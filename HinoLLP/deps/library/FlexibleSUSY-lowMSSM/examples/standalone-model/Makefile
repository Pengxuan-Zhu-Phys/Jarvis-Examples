# Package information
PKGNAME         := FlexibleSUSY
VERSION         := 2.9.0
ABSBASEDIR      := /Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/calculators/flexiblesusy/_build

# Switches
ENABLE_FFLITE    := no
ENABLE_LOOPTOOLS := no
ENABLE_COLLIER   := yes
ENABLE_THREADS   := no

MODULE_LIBEXT   := .a

MODEL           := MSSM

MODELDIR        := $(ABSBASEDIR)/models/$(MODEL)
CONFIGDIR       := $(ABSBASEDIR)/config
FLEXIDIR        := $(ABSBASEDIR)/src
FFLITEDIR       := $(ABSBASEDIR)/fflite
SMHODIR         := $(ABSBASEDIR)/model_specific/SM
MSSMHODIR       := $(ABSBASEDIR)/model_specific/MSSM_higgs

INCMODEL        := -I$(MODELDIR)
INCCONFIG       := -I$(CONFIGDIR)
INCFLEXI        := -I$(FLEXIDIR)
INCFFLITE       := -I$(FFLITEDIR)
LIBMODEL        := $(MODELDIR)/lib$(MODEL)$(MODULE_LIBEXT)
LIBFLEXI        := $(FLEXIDIR)/libflexisusy$(MODULE_LIBEXT)
LIBFFLITE       := $(FFLITEDIR)/libfflite$(MODULE_LIBEXT)
LIBSMHO         := $(SMHODIR)/libmodel_specific_SM$(MODULE_LIBEXT)
LIBMSSMHO       := $(MSSMHODIR)/libmodel_specific_MSSM_higgs$(MODULE_LIBEXT)

# Variables for compilation
CXX             := g++
CPPFLAGS        :=  -I. $(INCCONFIG) -I$(SMHODIR) -I$(MSSMHODIR) $(INCFLEXI) \
                   $(INCMODEL)
CXXFLAGS        := -std=c++17 -O2 -fPIC
CXX_DEP_GEN     := $(CXX)
CXXFLAGS_DEP_GEN:= $(CXXFLAGS)
FC              := gfortran
FFLAGS          := -O2 -fPIC -frecursive
FLIBS           := -L/opt/homebrew/Cellar/gcc/15.2.0_1/bin/../lib/gcc/current/gcc/aarch64-apple-darwin25/15/../../../ -lgfortran -lm
FUTILIBS        := /Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/calculators/flexiblesusy/_build/src/libfortran_utils.a
FOR_DEP_GEN     := $(FC)
BOOSTFLAGS      :=  -I/opt/homebrew/include
EIGENFLAGS      := -I/opt/homebrew/include/eigen3
GSLLIBS         := -L/opt/homebrew/Cellar/gsl/2.8/lib -lgsl -lgslcblas
GSLFLAGS        := -I/opt/homebrew/Cellar/gsl/2.8/include
LOOPFUNCFLAGS   :=  -I/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current/modules
LOOPFUNCLIBS    :=  /Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/calculators/flexiblesusy/_build/src/loop_libraries/libcollier_wrapper.a -L/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current -Wl,-rpath,/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current -lcollier
SQLITEFLAGS     := 
SQLITELIBS      := 
THREADLIBS      := -lpthread

STANDALONE_SRC := \
		standalone.cpp

STANDALONE_OBJ := \
		$(patsubst %.cpp, %.o, $(filter %.cpp, $(STANDALONE_SRC))) \
		$(patsubst %.f, %.o, $(filter %.f, $(STANDALONE_SRC)))

STANDALONE_DEP := \
		$(STANDALONE_OBJ:.o=.d)

STANDALONE_EXE := \
		standalone.x

# set default shell
SHELL = /bin/sh

# disable built-in rules to improve speed
MAKEFLAGS += -rR --include-dir=$(CURDIR)

# returns file name with absolute path, taking whitespace in directory
# names into account
abspathx        = $(foreach name,$(1),\
		$(shell echo '$(abspath $(name))' | sed s/\[\[:space:\]\]/\\\\\&/g))

.PHONY:         all clean clean-dep clean-obj distclean showbuild

all: $(STANDALONE_EXE)

clean-dep:
		-rm -f $(STANDALONE_DEP)

clean-obj:
		-rm -f $(STANDALONE_OBJ)

clean: clean-dep clean-obj
		-rm -f $(STANDALONE_EXE)

distclean: clean
		-rm -f Makefile

$(STANDALONE_DEP) $(STANDALONE_OBJ): CPPFLAGS += $(GSLFLAGS) $(EIGENFLAGS) $(BOOSTFLAGS)

ifneq (,$(findstring yes,$(ENABLE_LOOPTOOLS)$(ENABLE_FFLITE)$(ENABLE_COLLIER)))
$(STANDALONE_DEP) $(STANDALONE_OBJ): CPPFLAGS += $(LOOPFUNCFLAGS)
endif

$(STANDALONE_EXE): $(STANDALONE_OBJ) $(LIBMODEL) $(LIBSMHO) $(LIBMSSMHO) $(LIBFLEXI) $(filter-out -%,$(LOOPFUNCLIBS)) $(FUTILIBS)
		$(CXX) -o $@ $(call abspathx,$^) $(filter -%,$(LOOPFUNCLIBS)) $(GSLLIBS) $(THREADLIBS) $(FLIBS) $(FUTILIBS) $(SQLITELIBS)

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),clean-dep)
ifneq ($(MAKECMDGOALS),clean-obj)
ifneq ($(MAKECMDGOALS),distclean)
ifneq ($(MAKECMDGOALS),showbuild)
-include $(STANDALONE_DEP)
endif
endif
endif
endif
endif

%.d: %.cpp
	$(CXX_DEP_GEN) $(CPPFLAGS) $(CXXFLAGS_DEP_GEN) -MM -MP -MG -o $@ -MT '$*.o' $^

%.d: %.f
	$(FOR_DEP_GEN) $(CPPFLAGS) -cpp -MM -MP -MG $^ -MT '$*.o' | \
	sed 's|.*\.o:|$*.o:|' > $@

%.o: %.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

showbuild:
	@echo "# package information"
	@echo "PKGNAME            = $(PKGNAME)"
	@echo "VERSION            = $(VERSION)"
	@echo "ABSBASEDIR         = $(ABSBASEDIR)"
	@echo ""
	@echo "# linked FlexibleSUSY libraries"
	@echo "MODEL              = $(MODEL)"
	@echo "MODELDIR           = $(MODELDIR)"
	@echo "FLEXIDIR           = $(FLEXIDIR)"
	@echo "LIBMODEL           = $(LIBMODEL)"
	@echo "LIBFLEXI           = $(LIBFLEXI)"
	@echo ""
	@echo "# compilation information"
	@echo "CXX                = $(CXX)"
	@echo "CPPFLAGS           = $(CPPFLAGS)"
	@echo "CXXFLAGS           = $(CXXFLAGS)"
	@echo "CXX_DEP_GEN        = $(CXX_DEP_GEN)"
	@echo "CXXFLAGS_DEP_GEN   = $(CXXFLAGS_DEP_GEN)"
	@echo "FC                 = $(FC)"
	@echo "FFLAGS             = $(FFLAGS)"
	@echo "FLIBS              = $(FLIBS)"
	@echo "FOR_DEP_GEN        = $(FOR_DEP_GEN)"
	@echo "BOOSTFLAGS         = $(BOOSTFLAGS)"
	@echo "EIGENFLAGS         = $(EIGENFLAGS)"
	@echo "GSLLIBS            = $(GSLLIBS)"
	@echo "GSLFLAGS           = $(GSLFLAGS)"
	@echo "LOOPFUNCFLAGS      = $(LOOPFUNCFLAGS)"
	@echo "LOOPFUNCLIBS       = $(LOOPFUNCLIBS)"
	@echo "MODULE_LIBEXT      = $(MODULE_LIBEXT)"
	@echo "SQLITELIBS         = $(SQLITELIBS)"
	@echo "SQLITEFLAGS        = $(SQLITEFLAGS)"
	@echo "THREADLIBS         = $(THREADLIBS)"
	@echo ""
	@echo "ENABLE_FFLITE      = $(ENABLE_FFLITE)"
	@echo "ENABLE_LOOPTOOLS   = $(ENABLE_LOOPTOOLS)"
	@echo "ENABLE_COLLIER     = $(ENABLE_COLLIER)"
	@echo "ENABLE_THREADS     = $(ENABLE_THREADS)"
