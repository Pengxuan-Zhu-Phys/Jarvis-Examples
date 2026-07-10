#!/bin/sh
set -eu

if [ "$#" -ne 3 ]; then
    echo "Usage: $0 <FlexibleSUSY-source> <build-dir> <jobs>" >&2
    exit 2
fi

source_dir=$1
build_dir=$2
jobs=$3
program_dir=$(CDPATH= cd -- "${source_dir}/.." && pwd)
math_cmd="${program_dir}/SARAH/jarvis_math_with_sarah.sh"
collier_root="${JARVIS_COLLIER_ROOT:-${program_dir}/COLLIER/current}"
exe="${build_dir}/models/lowMSSM/run_lowMSSM.x"
lock_dir="${build_dir}.lock"
tmp_dir="${build_dir}.tmp"

build_is_current() {
    [ -x "${exe}" ] || return 1
    [ -z "$(find "${source_dir}/model_files/lowMSSM" -type f -newer "${exe}" -print -quit)" ] || return 1
    if [ -d "${collier_root}/modules" ] && { [ -f "${collier_root}/libcollier.a" ] || [ -f "${collier_root}/libcollier.dylib" ] || [ -f "${collier_root}/libcollier.so" ]; }; then
        grep -q '#define ENABLE_COLLIER 1' "${build_dir}/config/config.h" 2>/dev/null || return 1
    fi
    return 0
}

if build_is_current; then
    echo "FlexibleSUSY lowMSSM already built -> ${exe}"
    exit 0
fi

while ! mkdir "${lock_dir}" 2>/dev/null; do
    if build_is_current; then
        echo "FlexibleSUSY lowMSSM already built -> ${exe}"
        exit 0
    fi
    echo "Waiting for FlexibleSUSY lowMSSM build lock -> ${lock_dir}"
    sleep 5
done

cleanup() {
    rmdir "${lock_dir}" 2>/dev/null || true
}
trap cleanup EXIT INT TERM

if build_is_current; then
    echo "FlexibleSUSY lowMSSM already built -> ${exe}"
    exit 0
fi

if [ ! -x "${math_cmd}" ]; then
    echo "ERROR: project SARAH Mathematica wrapper is not executable: ${math_cmd}" >&2
    exit 10
fi

if ! printf '%s\n' 'If[Needs["SARAH`"] === $Failed, Quit[1], Quit[0]]' | "${math_cmd}" >/dev/null 2>&1; then
    echo 'ERROR: project SARAH is not loadable from Mathematica via Needs["SARAH`"].' >&2
    echo "Expected project SARAH library under: ${program_dir}/SARAH/current" >&2
    exit 11
fi

rm -rf "${tmp_dir}"
mkdir -p "$(dirname "${build_dir}")"
cp -R "${source_dir}" "${tmp_dir}"

cd "${tmp_dir}"
./createmodel --name=lowMSSM --force --with-math-cmd="${math_cmd}"

configure_args="--with-models=lowMSSM --with-math-cmd=${math_cmd} --disable-librarylink"
if [ -d "${collier_root}/modules" ] && { [ -f "${collier_root}/libcollier.a" ] || [ -f "${collier_root}/libcollier.dylib" ] || [ -f "${collier_root}/libcollier.so" ]; }; then
    configure_args="${configure_args} --with-loop-libraries=collier --with-collier-incdir=${collier_root}/modules --with-collier-libdir=${collier_root}"
fi
if [ -d /opt/homebrew/include ]; then
    configure_args="${configure_args} --with-boost-incdir=/opt/homebrew/include"
fi
if [ -d /opt/homebrew/lib ]; then
    configure_args="${configure_args} --with-boost-libdir=/opt/homebrew/lib"
fi
if [ -d /opt/homebrew/include/eigen3 ]; then
    configure_args="${configure_args} --with-eigen-incdir=/opt/homebrew/include/eigen3"
fi
gsl_config=$(command -v gsl-config 2>/dev/null || true)
if [ -n "${gsl_config}" ]; then
    configure_args="${configure_args} --with-gsl-config=${gsl_config}"
fi

./configure ${configure_args}
make -j"${jobs}"

if [ ! -x "models/lowMSSM/run_lowMSSM.x" ]; then
    echo "ERROR: FlexibleSUSY build finished but models/lowMSSM/run_lowMSSM.x was not created." >&2
    exit 12
fi

rm -rf "${build_dir}"
mv "${tmp_dir}" "${build_dir}"
if command -v rg >/dev/null 2>&1 && command -v perl >/dev/null 2>&1; then
    rg -l --fixed-strings "${tmp_dir}" "${build_dir}" | while IFS= read -r file; do
        JARVIS_OLD_PATH="${tmp_dir}" JARVIS_NEW_PATH="${build_dir}" \
            perl -0pi -e 's/\Q$ENV{JARVIS_OLD_PATH}\E/$ENV{JARVIS_NEW_PATH}/g' "${file}"
    done
fi
echo "FlexibleSUSY lowMSSM built -> ${exe}"
