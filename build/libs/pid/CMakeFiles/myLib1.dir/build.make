# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build

# Include any dependencies generated for this target.
include libs/pid/CMakeFiles/myLib1.dir/depend.make

# Include the progress variables for this target.
include libs/pid/CMakeFiles/myLib1.dir/progress.make

# Include the compile flags for this target's objects.
include libs/pid/CMakeFiles/myLib1.dir/flags.make

libs/pid/CMakeFiles/myLib1.dir/src.cpp.o: libs/pid/CMakeFiles/myLib1.dir/flags.make
libs/pid/CMakeFiles/myLib1.dir/src.cpp.o: ../libs/pid/src.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libs/pid/CMakeFiles/myLib1.dir/src.cpp.o"
	cd /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build/libs/pid && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myLib1.dir/src.cpp.o -c /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/libs/pid/src.cpp

libs/pid/CMakeFiles/myLib1.dir/src.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myLib1.dir/src.cpp.i"
	cd /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build/libs/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/libs/pid/src.cpp > CMakeFiles/myLib1.dir/src.cpp.i

libs/pid/CMakeFiles/myLib1.dir/src.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myLib1.dir/src.cpp.s"
	cd /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build/libs/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/libs/pid/src.cpp -o CMakeFiles/myLib1.dir/src.cpp.s

# Object files for target myLib1
myLib1_OBJECTS = \
"CMakeFiles/myLib1.dir/src.cpp.o"

# External object files for target myLib1
myLib1_EXTERNAL_OBJECTS =

libs/pid/libmyLib1.a: libs/pid/CMakeFiles/myLib1.dir/src.cpp.o
libs/pid/libmyLib1.a: libs/pid/CMakeFiles/myLib1.dir/build.make
libs/pid/libmyLib1.a: libs/pid/CMakeFiles/myLib1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmyLib1.a"
	cd /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build/libs/pid && $(CMAKE_COMMAND) -P CMakeFiles/myLib1.dir/cmake_clean_target.cmake
	cd /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build/libs/pid && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myLib1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/pid/CMakeFiles/myLib1.dir/build: libs/pid/libmyLib1.a

.PHONY : libs/pid/CMakeFiles/myLib1.dir/build

libs/pid/CMakeFiles/myLib1.dir/clean:
	cd /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build/libs/pid && $(CMAKE_COMMAND) -P CMakeFiles/myLib1.dir/cmake_clean.cmake
.PHONY : libs/pid/CMakeFiles/myLib1.dir/clean

libs/pid/CMakeFiles/myLib1.dir/depend:
	cd /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/libs/pid /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build/libs/pid /home/tarun/Masters/ENPM808X/PID_Test_Driven_Development/build/libs/pid/CMakeFiles/myLib1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/pid/CMakeFiles/myLib1.dir/depend

