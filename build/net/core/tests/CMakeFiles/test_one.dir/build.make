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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.15.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.15.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lianzheng/icu/netGen/net_core

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lianzheng/icu/netGen/net_core/build

# Include any dependencies generated for this target.
include net/core/tests/CMakeFiles/test_one.dir/depend.make

# Include the progress variables for this target.
include net/core/tests/CMakeFiles/test_one.dir/progress.make

# Include the compile flags for this target's objects.
include net/core/tests/CMakeFiles/test_one.dir/flags.make

net/core/tests/CMakeFiles/test_one.dir/test_core_one.cc.o: net/core/tests/CMakeFiles/test_one.dir/flags.make
net/core/tests/CMakeFiles/test_one.dir/test_core_one.cc.o: ../net/core/tests/test_core_one.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lianzheng/icu/netGen/net_core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object net/core/tests/CMakeFiles/test_one.dir/test_core_one.cc.o"
	cd /Users/lianzheng/icu/netGen/net_core/build/net/core/tests && g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_one.dir/test_core_one.cc.o -c /Users/lianzheng/icu/netGen/net_core/net/core/tests/test_core_one.cc

net/core/tests/CMakeFiles/test_one.dir/test_core_one.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_one.dir/test_core_one.cc.i"
	cd /Users/lianzheng/icu/netGen/net_core/build/net/core/tests && g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lianzheng/icu/netGen/net_core/net/core/tests/test_core_one.cc > CMakeFiles/test_one.dir/test_core_one.cc.i

net/core/tests/CMakeFiles/test_one.dir/test_core_one.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_one.dir/test_core_one.cc.s"
	cd /Users/lianzheng/icu/netGen/net_core/build/net/core/tests && g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lianzheng/icu/netGen/net_core/net/core/tests/test_core_one.cc -o CMakeFiles/test_one.dir/test_core_one.cc.s

# Object files for target test_one
test_one_OBJECTS = \
"CMakeFiles/test_one.dir/test_core_one.cc.o"

# External object files for target test_one
test_one_EXTERNAL_OBJECTS =

run/test_one: net/core/tests/CMakeFiles/test_one.dir/test_core_one.cc.o
run/test_one: net/core/tests/CMakeFiles/test_one.dir/build.make
run/test_one: lib/libnet_core.a
run/test_one: lib/libnet_base.a
run/test_one: /usr/local/lib/libboost_system.dylib
run/test_one: /usr/local/lib/libboost_filesystem.dylib
run/test_one: /usr/local/lib/libboost_regex.dylib
run/test_one: /usr/local/lib/libboost_thread-mt.dylib
run/test_one: net/core/tests/CMakeFiles/test_one.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lianzheng/icu/netGen/net_core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../run/test_one"
	cd /Users/lianzheng/icu/netGen/net_core/build/net/core/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_one.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
net/core/tests/CMakeFiles/test_one.dir/build: run/test_one

.PHONY : net/core/tests/CMakeFiles/test_one.dir/build

net/core/tests/CMakeFiles/test_one.dir/clean:
	cd /Users/lianzheng/icu/netGen/net_core/build/net/core/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_one.dir/cmake_clean.cmake
.PHONY : net/core/tests/CMakeFiles/test_one.dir/clean

net/core/tests/CMakeFiles/test_one.dir/depend:
	cd /Users/lianzheng/icu/netGen/net_core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lianzheng/icu/netGen/net_core /Users/lianzheng/icu/netGen/net_core/net/core/tests /Users/lianzheng/icu/netGen/net_core/build /Users/lianzheng/icu/netGen/net_core/build/net/core/tests /Users/lianzheng/icu/netGen/net_core/build/net/core/tests/CMakeFiles/test_one.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : net/core/tests/CMakeFiles/test_one.dir/depend

