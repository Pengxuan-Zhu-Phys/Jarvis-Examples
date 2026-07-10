# Package information
PKGNAME            := FlexibleSUSY
FLEXIBLESUSY_VERSION := 2.9.0
FLEXIBLESUSY_MAJOR := 2
FLEXIBLESUSY_MINOR := 9
FLEXIBLESUSY_PATCH := 0
FLEXIBLESUSY_EXTRA := 
FLEXIBLESUSY_PKG   := $(PKGNAME)-$(FLEXIBLESUSY_VERSION)
FLEXIBLESUSY_TAG   := v$(FLEXIBLESUSY_VERSION)
ABSBASEDIR         := /Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/calculators/flexiblesusy/_build
INSTALL_DIR        := 
OPERATING_SYSTEM   := Darwin

# Makefile switches
ENABLE_COMPILE     := yes
ENABLE_FFLITE      := no
ENABLE_GM2CALC     := no
ENABLE_HIGGSTOOLS  := no
ENABLE_HIMALAYA    := no
ENABLE_LIBRARYLINK := no
ENABLE_LILITH      := no
ENABLE_LOOPTOOLS   := no
ENABLE_COLLIER     := yes
ENABLE_META        := yes
ENABLE_SHARED_LIBS := no
ENABLE_SQLITE      := no
ENABLE_STATIC      := no
ENABLE_THREADS     := no
ENABLE_TSIL        := no
ENABLE_FEYNARTS    := no
ENABLE_FORMCALC    := no

# C/C++ preprocessor defines
ENABLE_COLORS         := no
ENABLE_DEBUG          := 
ENABLE_CHECK_EIGENVALUE_ERROR := no
ENABLE_SILENT         := no
ENABLE_VERBOSE        := no

# Makefile modules
MODELS             := models/lowMSSM
ADDONS             := 
MODULES            := config src fflite slhaea doc nlohmann
# BEGIN: NOT EXPORTED ##########################################
MODULES            += meta templates
# END:   NOT EXPORTED ##########################################
MODULES            += $(MODELS) $(ADDONS)
# BEGIN: NOT EXPORTED ##########################################
MODULES            += 
# END:   NOT EXPORTED ##########################################

# Variables for Mathematica meta code
MATH               := /Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/SARAH/jarvis_math_with_sarah.sh
SOLVERS            := two_scale semi_analytic shooting

# Variables for compilation
CXX                := g++
CPPFLAGS           :=  $(patsubst %,-I%,$(MODULES)) -I.
CXXFLAGS           := -std=c++17 -O2 -fPIC
FC                 := gfortran
FFLAGS             := -O2 -fPIC -frecursive
FLIBS              := -L/opt/homebrew/Cellar/gcc/15.2.0_1/bin/../lib/gcc/current/gcc/aarch64-apple-darwin25/15/../../../ -lgfortran -lm
FMOD               := -J
FSTD               := -std=f2008
FUTILIBS           := /Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/calculators/flexiblesusy/_build/src/libfortran_utils.a
MODULE_LIBEXT      := .a
MODULE_MAKE_LIB_CMD:= ar cru
LDFLAGS            := 
LDLIBS             := 
LIBLNK_LIBEXT      := .so
LIBLNK_MAKE_LIB_CMD:= g++ -shared -o
LLFLAGS            := 
LLLIBS             := 
BOOSTTESTLIBS      := -L/opt/homebrew/lib -lboost_unit_test_framework
BOOSTTHREADLIBS    := 
BOOSTFLAGS         :=  -I/opt/homebrew/include
EIGENFLAGS         := -I/opt/homebrew/include/eigen3
GSLLIBS            := -L/opt/homebrew/Cellar/gsl/2.8/lib -lgsl -lgslcblas
GSLFLAGS           := -I/opt/homebrew/Cellar/gsl/2.8/include
LOOPFUNCFLAGS      :=  -I/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current/modules
LOOPFUNCLIBS       :=  /Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/calculators/flexiblesusy/_build/src/loop_libraries/libcollier_wrapper.a -L/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current -Wl,-rpath,/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current -lcollier
COLLIERFLAGS       := -I/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current/modules
COLLIERLIBS        := /Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/calculators/flexiblesusy/_build/src/loop_libraries/libcollier_wrapper.a -L/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current -Wl,-rpath,/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current -lcollier
GM2CALCFLAGS       := 
GM2CALCLIBS        := 
HIGGSTOOLSFLAGS    := -Imodel_specific/SM
HIGGSTOOLSLIBS     := model_specific/SM/libmodel_specific_SM.a
LILITHFLAGS        := 
HIMALAYAFLAGS      := 
HIMALAYALIBS       := 
SQLITEFLAGS        := 
SQLITELIBS         := 
THREADLIBS         := -lpthread
TSILFLAGS          := 
TSILLIBS           := 
PYTHONFLAGS        := -I/Users/p.zhu/.pyenv/versions/3.13.13/include/python3.13
PYTHONLIBS         := -lpython3.13 -lintl -ldl -L/Users/p.zhu/.pyenv/versions/3.13.13/lib -Wl,-rpath,/Users/p.zhu/.pyenv/versions/3.13.13/lib -L/opt/homebrew/lib -Wl,-rpath,/opt/homebrew/lib -framework CoreFoundation

ifeq ($(VERBOSE),1)
  Q :=
else
  Q := @
endif

# the modules add their dependency files to this variable
ALLDEP   :=
# the modules add soucre files to be created to this variable
ALLSRC   :=
# the modules add their libraries to this variable
ALLLIB   :=
# the modules add executables to this variable
ALLEXE   :=
# the modules add LibraryLink libraries to this variable
ALLLL    :=
# the modules add test executables to this variable
ALLTST   :=
# the addons add libraries to this variable to be linked against executables
ADDONLIBS:=
# the modules add dependent modules to this variable to be included in the makefile
ALLMODDEP:=

# set default shell
SHELL = /bin/sh

# disable built-in rules to improve speed
MAKEFLAGS += -rR --include-dir=$(CURDIR)

# message printed for each target
MSG = echo "Building $@"

# flexiblesusy-config script
FSCONFIG := ./flexiblesusy-config

# configure script
CONFIGURE_SCRIPT := configure

# dependency generator
DEPGEN = $(DEPGEN_EXE)

# script which lists the SARAH model files
SARAH_DEP_GEN := ./config/list_sarah_model_files.sh
SARAH_MODEL_DIR := /Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/SARAH/SARAH-4.15.4/Models/

# script which installs a file without export markers
INSTALL_STRIPPED := config/install_stripped.sh

# script which replaces path\like\this with path/like/this
# thereby enabling FlexibleSUSY to run on Cygwin
CONVERT_DOS_PATHS := config/convert_dos_paths.sh

# script which finds Mathematica's include paths
MATH_INC_PATHS := config/mathematica_include_paths.sh

# package information files
README_FILE    := README.rst
AUTHORS_FILE   := AUTHORS
COPYING_FILE   := COPYING
ChangeLog_FILE := CHANGES.rst

.PHONY:  all allsrc allexec alllib allll alltest clean clean-dep \
	 clean-executables clean-generated clean-lib clean-obj \
	 depend distclean librarylink release-tag release-head \
	 showbuild tag

all:
ifeq ($(ENABLE_META),yes)
all:     allsrc
endif
ifeq ($(ENABLE_COMPILE),yes)
all:     alllib allexec
endif
ifeq ($(ENABLE_LIBRARYLINK),yes)
all:     allll
endif

ifeq ($(INSTALL_DIR),)
install-src::
	$(error Installation directory is not set!  To set in please run: ./configure --with-install-dir=/path/to/install/dir)
else
install-src::
	$(Q)install -d $(INSTALL_DIR)
	$(Q)$(INSTALL_STRIPPED) $(CONFIGURE_SCRIPT) $(INSTALL_DIR) -m u=rwx,g=r,o=r
	$(Q)$(INSTALL_STRIPPED) $(README_FILE) $(INSTALL_DIR) -m u=rw,g=r,o=r
	$(Q)$(INSTALL_STRIPPED) $(AUTHORS_FILE) $(INSTALL_DIR) -m u=rw,g=r,o=r
	$(Q)$(INSTALL_STRIPPED) $(COPYING_FILE) $(INSTALL_DIR) -m u=rw,g=r,o=r
	$(Q)$(INSTALL_STRIPPED) $(ChangeLog_FILE) $(INSTALL_DIR) -m u=rw,g=r,o=r

ifeq ($(ENABLE_META),yes)
install-src:: allsrc
endif
endif

include config/abspathx.mk
include $(patsubst %, %/module.mk, $(MODULES))
include $(patsubst %, %/module.mk, $(sort $(ALLMODDEP)))

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),install-src)
ifneq ($(MAKECMDGOALS),showbuild)
ifneq ($(MAKECMDGOALS),tag)
ifneq ($(MAKECMDGOALS),depend)
ifneq ($(MAKECMDGOALS),doc)
ifeq ($(ENABLE_COMPILE),yes)
ifeq ($(findstring clean-,$(MAKECMDGOALS)),)
ifeq ($(findstring distclean-,$(MAKECMDGOALS)),)
ifeq ($(findstring doc-,$(MAKECMDGOALS)),)
ifeq ($(findstring pack-,$(MAKECMDGOALS)),)
ifeq ($(findstring print-,$(MAKECMDGOALS)),)
ifeq ($(findstring release-,$(MAKECMDGOALS)),)
-include $(ALLDEP)
endif
endif
endif
endif
endif
endif
endif
endif
endif
endif
endif
endif
endif
endif

allsrc:   $(ALLSRC)
allexec:  $(ALLEXE)
alllib:   $(ALLLIB)
allll:    $(ALLLL)
alltest:  $(ALLTST)

clean-dep:
	$(Q)-rm -f $(ALLDEP)

clean-executables:
	$(Q)-rm -f $(ALLEXE)

clean-lib:
	$(Q)-rm -f $(ALLLIB) $(ALLLL)

depend:  clean-dep
depend:  $(ALLDEP)

%.d: %.cpp | $(DEPGEN)
	$(Q)$(DEPGEN) $(CPPFLAGS) -MM -MI -o '$@' -MT '$*.o' $^

%.d: %.c | $(DEPGEN)
	$(Q)$(DEPGEN) $(CPPFLAGS) -MM -MI -o '$@' -MT '$*.o' $^

%.d: %.f | $(DEPGEN)
	$(Q)$(DEPGEN) $(CPPFLAGS) -MM -MI -o '$@' -MT '$*.o' $^

%.d: %.F | $(DEPGEN)
	$(Q)$(DEPGEN) $(CPPFLAGS) -MM -MI -o '$@' -MT '$*.o' $^

%.o: %.cpp
	@$(MSG)
	$(Q)$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

%.o: %.f
	@$(MSG)
	$(Q)$(FC) $(FFLAGS) -c $< -o $@

%.o: %.F
	@$(MSG)
	$(Q)$(FC) $(FFLAGS) $(CPPFLAGS) -c $< -o $@

distclean::
	$(Q)-rm -f Makefile
	$(Q)-rm -f $(FSCONFIG)
	$(Q)-rm -f $(SARAH_DEP_GEN)
	$(Q)-rm -f config.boost config.log config.math config.sarah config.status

librarylink: allll
	@true

showbuild:
	@echo "PKGNAME            = $(PKGNAME)"
	@echo "VERSION            = $(FLEXIBLESUSY_VERSION)"
	@echo "ABSBASEDIR         = $(ABSBASEDIR)"
	@echo "INSTALL_DIR        = $(INSTALL_DIR)"
	@echo "OPERATING_SYSTEM   = $(OPERATING_SYSTEM)"
	@echo ""
	@echo "MATH               = $(MATH)"
	@echo "MODELS             = $(MODELS)"
	@echo "ADDONS             = $(ADDONS)"
	@echo "SOLVERS            = $(SOLVERS)"
	@echo ""
	@echo "CXX                 = $(CXX)"
	@echo "CPPFLAGS            = $(CPPFLAGS)"
	@echo "CXXFLAGS            = $(CXXFLAGS)"
	@echo "FC                  = $(FC)"
	@echo "FFLAGS              = $(FFLAGS)"
	@echo "FLIBS               = $(FLIBS)"
	@echo "LDFLAGS             = $(LDFLAGS)"
	@echo "LDLIBS              = $(LDLIBS)"
	@echo "LLFLAGS             = $(LLFLAGS)"
	@echo "LLLIBS              = $(LLLIBS)"
	@echo "BOOSTTESTLIBS       = $(BOOSTTESTLIBS)"
	@echo "BOOSTTHREADLIBS     = $(BOOSTTHREADLIBS)"
	@echo "BOOSTFLAGS          = $(BOOSTFLAGS)"
	@echo "EIGENFLAGS          = $(EIGENFLAGS)"
	@echo "GM2CALCFLAGS        = $(GM2CALCFLAGS)"
	@echo "GM2CALCLIBS         = $(GM2CALCLIBS)"
	@echo "GSLLIBS             = $(GSLLIBS)"
	@echo "GSLFLAGS            = $(GSLFLAGS)"
	@echo "HIGGSTOOLSFLAGS     = $(HIGGSTOOLSFLAGS)"
	@echo "HIGGSTOOLSLIBS      = $(HIGGSTOOLSLIBS)"
	@echo "HIMALAYAFLAGS       = $(HIMALAYAFLAGS)"
	@echo "HIMALAYALIBS        = $(HIMALAYALIBS)"
	@echo "LIBLNK_MAKE_LIB_CMD = $(LIBLNK_MAKE_LIB_CMD)"
	@echo "LIBLNK_LIBEXT       = $(LIBLNK_LIBEXT)"
	@echo "LILITHFLAGS         = $(LILITHFLAGS)"
	@echo "LOOPFUNCFLAGS       = $(LOOPFUNCFLAGS)"
	@echo "LOOPFUNCLIBS        = $(LOOPFUNCLIBS)"
	@echo "MODULE_MAKE_LIB_CMD = $(MODULE_MAKE_LIB_CMD)"
	@echo "MODULE_LIBEXT       = $(MODULE_LIBEXT)"
	@echo "PYTHONFLAGS         = $(PYTHONFLAGS)"
	@echo "PYTHONLIBS          = $(PYTHONLIBS)"
	@echo "SQLITELIBS          = $(SQLITELIBS)"
	@echo "SQLITEFLAGS         = $(SQLITEFLAGS)"
	@echo "THREADLIBS          = $(THREADLIBS)"
	@echo "TSILLIBS            = $(TSILLIBS)"
	@echo "TSILFLAGS           = $(TSILFLAGS)"
	@echo ""
	@echo "ENABLE_COLORS      = $(ENABLE_COLORS)"
	@echo "ENABLE_COMPILE     = $(ENABLE_COMPILE)"
	@echo "ENABLE_DEBUG       = $(ENABLE_DEBUG)"
	@echo "ENABLE_CHECK_EIGENVALUE_ERROR = $(ENABLE_CHECK_EIGENVALUE_ERROR)"
	@echo "ENABLE_FFLITE      = $(ENABLE_FFLITE)"
	@echo "ENABLE_GM2CALC     = $(ENABLE_GM2CALC)"
	@echo "ENABLE_HIGGSTOOLS  = $(ENABLE_HIGGSTOOLS)"
	@echo "ENABLE_HIMALAYA    = $(ENABLE_HIMALAYA)"
	@echo "ENABLE_LIBRARYLINK = $(ENABLE_LIBRARYLINK)"
	@echo "ENABLE_LILITH      = $(ENABLE_LILITH)"
	@echo "ENABLE_FEYNARTS    = $(ENABLE_FEYNARTS)"
	@echo "ENABLE_FORMCALC    = $(ENABLE_FORMCALC)"
	@echo "ENABLE_LOOPTOOLS   = $(ENABLE_LOOPTOOLS)"
	@echo "ENABLE_META        = $(ENABLE_META)"
	@echo "ENABLE_SHARED_LIBS = $(ENABLE_SHARED_LIBS)"
	@echo "ENABLE_SILENT      = $(ENABLE_SILENT)"
	@echo "ENABLE_SQLITE      = $(ENABLE_SQLITE)"
	@echo "ENABLE_STATIC      = $(ENABLE_STATIC)"
	@echo "ENABLE_THREADS     = $(ENABLE_THREADS)"
	@echo "ENABLE_TSIL        = $(ENABLE_TSIL)"
	@echo "ENABLE_VERBOSE     = $(ENABLE_VERBOSE)"
	@echo ""
	@echo "The list of modules to be built:"
	@echo "--------------------------------"
	@echo "$(MODULES)"

print-% : ; @echo $* = $($*)

tag:
	git tag $(FLEXIBLESUSY_TAG)

release-tag:
	git archive --worktree-attributes \
		--prefix=$(FLEXIBLESUSY_PKG)/ \
		--output=$(FLEXIBLESUSY_PKG).tar.gz $(FLEXIBLESUSY_TAG)
	md5sum $(FLEXIBLESUSY_PKG).tar.gz \
		> $(FLEXIBLESUSY_PKG).tar.gz.md5

release-head:
	$(eval GIT_HEAD_DESCR := $(shell git describe --tags HEAD))
	$(eval FLEXIBLESUSY_HEAD_PKG := $(PKGNAME)-$(GIT_HEAD_DESCR))
	git archive --worktree-attributes \
		--prefix=$(FLEXIBLESUSY_HEAD_PKG)/ \
		--output=$(FLEXIBLESUSY_HEAD_PKG).tar.gz HEAD
	md5sum $(FLEXIBLESUSY_HEAD_PKG).tar.gz \
		> $(FLEXIBLESUSY_HEAD_PKG).tar.gz.md5
