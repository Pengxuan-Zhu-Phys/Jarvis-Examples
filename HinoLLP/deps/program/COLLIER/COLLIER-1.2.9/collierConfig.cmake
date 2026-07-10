# File: collierConfig.cmake.in
# Author: Jean-Nicolas Lang
# Description: Config file for creating the collier library package
# Last Modified: March 02, 2018

# It defines the following variables
#  COLLIER_LIBRARY_DIR - include directories for project library
#  COLLIER_INCLUDE_DIR - include directories for project headers
#  COLLIER_LIBRARY_PATH - path to the collier library file

set(COLLIER_LIBRARY_DIR "/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/COLLIER-1.2.9")
set(COLLIER_INCLUDE_DIR "/Users/p.zhu/Jarvis-Workshop/Jarvis-Examples/HinoLLP/deps/program/COLLIER/COLLIER-1.2.9/modules")
add_library(collier SHARED IMPORTED)
find_library(COLLIER_LIBRARY_PATH collier HINTS "${COLLIER_LIBRARY_DIR}" NO_DEFAULT_PATH)
set_target_properties(collier PROPERTIES IMPORTED_LOCATION "${COLLIER_LIBRARY_PATH}")
include_directories(${COLLIER_INCLUDE_DIR})
