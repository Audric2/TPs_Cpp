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
CMAKE_SOURCE_DIR = /mnt/d/Audric/Informatique/ZZ3/C++/tp_6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Audric/Informatique/ZZ3/C++/tp_6/build

# Include any dependencies generated for this target.
include CMakeFiles/tp6_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tp6_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp6_test.dir/flags.make

CMakeFiles/tp6_test.dir/test/catch.cpp.o: CMakeFiles/tp6_test.dir/flags.make
CMakeFiles/tp6_test.dir/test/catch.cpp.o: ../test/catch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Audric/Informatique/ZZ3/C++/tp_6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp6_test.dir/test/catch.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp6_test.dir/test/catch.cpp.o -c /mnt/d/Audric/Informatique/ZZ3/C++/tp_6/test/catch.cpp

CMakeFiles/tp6_test.dir/test/catch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp6_test.dir/test/catch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Audric/Informatique/ZZ3/C++/tp_6/test/catch.cpp > CMakeFiles/tp6_test.dir/test/catch.cpp.i

CMakeFiles/tp6_test.dir/test/catch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp6_test.dir/test/catch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Audric/Informatique/ZZ3/C++/tp_6/test/catch.cpp -o CMakeFiles/tp6_test.dir/test/catch.cpp.s

CMakeFiles/tp6_test.dir/test/tp6_test.cpp.o: CMakeFiles/tp6_test.dir/flags.make
CMakeFiles/tp6_test.dir/test/tp6_test.cpp.o: ../test/tp6_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Audric/Informatique/ZZ3/C++/tp_6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tp6_test.dir/test/tp6_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp6_test.dir/test/tp6_test.cpp.o -c /mnt/d/Audric/Informatique/ZZ3/C++/tp_6/test/tp6_test.cpp

CMakeFiles/tp6_test.dir/test/tp6_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp6_test.dir/test/tp6_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Audric/Informatique/ZZ3/C++/tp_6/test/tp6_test.cpp > CMakeFiles/tp6_test.dir/test/tp6_test.cpp.i

CMakeFiles/tp6_test.dir/test/tp6_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp6_test.dir/test/tp6_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Audric/Informatique/ZZ3/C++/tp_6/test/tp6_test.cpp -o CMakeFiles/tp6_test.dir/test/tp6_test.cpp.s

# Object files for target tp6_test
tp6_test_OBJECTS = \
"CMakeFiles/tp6_test.dir/test/catch.cpp.o" \
"CMakeFiles/tp6_test.dir/test/tp6_test.cpp.o"

# External object files for target tp6_test
tp6_test_EXTERNAL_OBJECTS =

tp6_test: CMakeFiles/tp6_test.dir/test/catch.cpp.o
tp6_test: CMakeFiles/tp6_test.dir/test/tp6_test.cpp.o
tp6_test: CMakeFiles/tp6_test.dir/build.make
tp6_test: CMakeFiles/tp6_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Audric/Informatique/ZZ3/C++/tp_6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable tp6_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp6_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp6_test.dir/build: tp6_test

.PHONY : CMakeFiles/tp6_test.dir/build

CMakeFiles/tp6_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp6_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp6_test.dir/clean

CMakeFiles/tp6_test.dir/depend:
	cd /mnt/d/Audric/Informatique/ZZ3/C++/tp_6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Audric/Informatique/ZZ3/C++/tp_6 /mnt/d/Audric/Informatique/ZZ3/C++/tp_6 /mnt/d/Audric/Informatique/ZZ3/C++/tp_6/build /mnt/d/Audric/Informatique/ZZ3/C++/tp_6/build /mnt/d/Audric/Informatique/ZZ3/C++/tp_6/build/CMakeFiles/tp6_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tp6_test.dir/depend

