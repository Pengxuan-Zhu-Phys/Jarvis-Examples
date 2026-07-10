#!/bin/sh
set -eu

script_dir=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
sarah_root="${JARVIS_PROJECT_SARAH_ROOT:-${script_dir}/current}"
math_cmd="${JARVIS_MATH_CMD:-math}"

if [ ! -f "${sarah_root}/SARAH.m" ]; then
    echo "ERROR: project SARAH library not found at ${sarah_root}" >&2
    echo "Expected file: ${sarah_root}/SARAH.m" >&2
    exit 20
fi

if ! command -v "${math_cmd}" >/dev/null 2>&1; then
    echo "ERROR: Mathematica/Wolfram kernel '${math_cmd}' was not found." >&2
    exit 21
fi

sarah_root_mma=$(printf '%s' "${sarah_root}" | sed 's/\\/\\\\/g; s/"/\\"/g')
{
    printf 'PrependTo[$Path, "%s/"];\n' "${sarah_root_mma}"
    cat
} | "${math_cmd}" "$@"
