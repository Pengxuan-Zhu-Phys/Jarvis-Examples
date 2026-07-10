/* DO NOT EDIT! GENERATED AUTOMATICALLY! */
/* generated at Fri 10 Jul 2026 01:17:36 ACST */

#ifndef CONFIG_H
#define CONFIG_H

#define PKGNAME "FlexibleSUSY"

#define FLEXIBLESUSY_VERSION  "2.9.0"
#define FLEXIBLESUSY_MAJOR    2
#define FLEXIBLESUSY_MINOR    9
#define FLEXIBLESUSY_PATCH    0
#define FLEXIBLESUSY_EXTRA    ""
#define GIT_COMMIT            "f6c42e0acc243a803d789e613c05eaf2dea2ba2d"

#define SARAH_VERSION         "4.15.4"
#define SARAH_MAJOR           4
#define SARAH_MINOR           15
#define SARAH_PATCH           4

#define MATHEMATICA_VERSION   13.3

#define GM2CALC_VERSION       "unknown"
#define HIMALAYA_VERSION      "unknown"

/* System information */
#define OPERATING_SYSTEM      "Darwin"
#define KERNEL_VERSION        "25.5.0"

/* Build variables */
#define BOOSTFLAGS            " -I/opt/homebrew/include"
#define BOOSTTESTLIBS         "-L/opt/homebrew/lib -lboost_unit_test_framework"
#define BOOSTTHREADLIBS       ""
#define CPPFLAGS              ""
#define CXX                   "g++"
#define CXXFLAGS              "-std=c++17 -O2 -fPIC"
#define EIGENFLAGS            "-I/opt/homebrew/include/eigen3"
#define FC                    "gfortran"
#define FFLAGS                "-O2 -fPIC -frecursive"
#define FLIBS                 "-L/opt/homebrew/Cellar/gcc/15.2.0_1/bin/../lib/gcc/current/gcc/aarch64-apple-darwin25/15/../../../ -lgfortran -lm"
#define FMOD                  "-J"
#define FSTD                  "-std=f2008"
#define FUTILIBS              "/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/calculators/flexiblesusy/_build/src/libfortran_utils.a"
#define GM2CALCFLAGS          ""
#define GM2CALCLIBS           ""
#define HIGGSTOOLSFLAGS       "-Imodel_specific/SM"
#define HIGGSTOOLSLIBS        "model_specific/SM/libmodel_specific_SM.a"
#define HIMALAYAFLAGS         ""
#define HIMALAYALIBS          ""
#define GSLFLAGS              "-I/opt/homebrew/Cellar/gsl/2.8/include"
#define GSLLIBS               "-L/opt/homebrew/Cellar/gsl/2.8/lib -lgsl -lgslcblas"
#define LDFLAGS               ""
#define LDLIBS                ""
#define LLFLAGS               ""
#define LLLIBS                ""
#define COLLIERFLAGS          "-I/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current/modules"
#define COLLIERLIBS           "/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/calculators/flexiblesusy/_build/src/loop_libraries/libcollier_wrapper.a -L/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current -Wl,-rpath,/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current -lcollier"
#define LOOPFUNCFLAGS         " -I/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current/modules"
#define LOOPFUNCLIBS          " /Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/calculators/flexiblesusy/_build/src/loop_libraries/libcollier_wrapper.a -L/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current -Wl,-rpath,/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/current -lcollier"
#define SQLITELIBS            ""
#define SQLITEFLAGS           ""
#define THREADLIBS            "-lpthread"
#define TSILLIBS              ""
#define TSILFLAGS             ""

/* Switches */

/* Enable colored printout */
#undef ENABLE_COLORS

/* Enable eigenvalues error check */
#undef CHECK_EIGENVALUE_ERROR

/* Enable debug mode */
#undef ENABLE_DEBUG

/* Enable silent mode */
#undef ENABLE_SILENT

/* Enable verbose mode */
#undef ENABLE_VERBOSE

/* Enable fflite */
#undef ENABLE_FFLITE

/* Enable GM2Calc */
#undef ENABLE_GM2CALC

/* Enable HiggsTools */
#undef ENABLE_HIGGSTOOLS

/* Enable Lilith */
#undef ENABLE_LILITH

/* Enable Himalaya */
#undef ENABLE_HIMALAYA

/* Enable LibraryLink */
#undef ENABLE_LIBRARYLINK

/* Enable LoopTools */
#undef ENABLE_LOOPTOOLS

/* Enable COLLIER */
#define ENABLE_COLLIER 1

/* Enable odeint */
#define ENABLE_ODEINT 1

/* Enable sqlite */
#undef ENABLE_SQLITE

/* Enable multi-threading */
#undef ENABLE_THREADS

/* Enable tsil */
#undef ENABLE_TSIL

/* Enable <random> header */
#define ENABLE_RANDOM 1

/* Enable two-scale BVP solver */
#define ENABLE_TWO_SCALE_SOLVER 1

/* Enable lattice BVP solver */
#undef ENABLE_LATTICE_SOLVER

/* Enable semi-analytic BVP solver */
#define ENABLE_SEMI_ANALYTIC_SOLVER 1

/* Enable shooting BVP solver */
#define ENABLE_SHOOTING_SOLVER 1

/* Enable statements for addons */


/* Enable FeynArts */
#undef ENABLE_FEYNARTS

/* Enable FormCalc */
#undef ENABLE_FORMCALC

#endif
