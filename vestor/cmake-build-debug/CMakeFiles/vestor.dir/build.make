# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/vestor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vestor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vestor.dir/flags.make

CMakeFiles/vestor.dir/main.cpp.o: CMakeFiles/vestor.dir/flags.make
CMakeFiles/vestor.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vestor.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vestor.dir/main.cpp.o -c /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor/main.cpp

CMakeFiles/vestor.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vestor.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor/main.cpp > CMakeFiles/vestor.dir/main.cpp.i

CMakeFiles/vestor.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vestor.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor/main.cpp -o CMakeFiles/vestor.dir/main.cpp.s

# Object files for target vestor
vestor_OBJECTS = \
"CMakeFiles/vestor.dir/main.cpp.o"

# External object files for target vestor
vestor_EXTERNAL_OBJECTS =

vestor: CMakeFiles/vestor.dir/main.cpp.o
vestor: CMakeFiles/vestor.dir/build.make
vestor: CMakeFiles/vestor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vestor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vestor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vestor.dir/build: vestor

.PHONY : CMakeFiles/vestor.dir/build

CMakeFiles/vestor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vestor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vestor.dir/clean

CMakeFiles/vestor.dir/depend:
	cd /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor/cmake-build-debug /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor/cmake-build-debug /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/vestor/cmake-build-debug/CMakeFiles/vestor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vestor.dir/depend

