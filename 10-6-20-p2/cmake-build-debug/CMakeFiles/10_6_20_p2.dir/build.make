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
CMAKE_SOURCE_DIR = /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/10_6_20_p2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/10_6_20_p2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/10_6_20_p2.dir/flags.make

CMakeFiles/10_6_20_p2.dir/main.cpp.o: CMakeFiles/10_6_20_p2.dir/flags.make
CMakeFiles/10_6_20_p2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/10_6_20_p2.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/10_6_20_p2.dir/main.cpp.o -c /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2/main.cpp

CMakeFiles/10_6_20_p2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/10_6_20_p2.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2/main.cpp > CMakeFiles/10_6_20_p2.dir/main.cpp.i

CMakeFiles/10_6_20_p2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/10_6_20_p2.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2/main.cpp -o CMakeFiles/10_6_20_p2.dir/main.cpp.s

# Object files for target 10_6_20_p2
10_6_20_p2_OBJECTS = \
"CMakeFiles/10_6_20_p2.dir/main.cpp.o"

# External object files for target 10_6_20_p2
10_6_20_p2_EXTERNAL_OBJECTS =

10_6_20_p2: CMakeFiles/10_6_20_p2.dir/main.cpp.o
10_6_20_p2: CMakeFiles/10_6_20_p2.dir/build.make
10_6_20_p2: CMakeFiles/10_6_20_p2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 10_6_20_p2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/10_6_20_p2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/10_6_20_p2.dir/build: 10_6_20_p2

.PHONY : CMakeFiles/10_6_20_p2.dir/build

CMakeFiles/10_6_20_p2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/10_6_20_p2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/10_6_20_p2.dir/clean

CMakeFiles/10_6_20_p2.dir/depend:
	cd /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2 /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2 /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2/cmake-build-debug /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2/cmake-build-debug /Users/francescomazzola/Desktop/programmazione/execise/exercise-C-/10-6-20-p2/cmake-build-debug/CMakeFiles/10_6_20_p2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/10_6_20_p2.dir/depend

