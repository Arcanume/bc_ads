# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/cmake/cmake-3.21.1-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /opt/cmake/cmake-3.21.1-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/xiaojian/xiaojian/src/util/CRoaring-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/xiaojian/xiaojian/src/util/CRoaring-master

# Include any dependencies generated for this target.
include benchmarks/CMakeFiles/add_benchmark.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include benchmarks/CMakeFiles/add_benchmark.dir/compiler_depend.make

# Include the progress variables for this target.
include benchmarks/CMakeFiles/add_benchmark.dir/progress.make

# Include the compile flags for this target's objects.
include benchmarks/CMakeFiles/add_benchmark.dir/flags.make

benchmarks/CMakeFiles/add_benchmark.dir/add_benchmark.c.o: benchmarks/CMakeFiles/add_benchmark.dir/flags.make
benchmarks/CMakeFiles/add_benchmark.dir/add_benchmark.c.o: benchmarks/add_benchmark.c
benchmarks/CMakeFiles/add_benchmark.dir/add_benchmark.c.o: benchmarks/CMakeFiles/add_benchmark.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/xiaojian/xiaojian/src/util/CRoaring-master/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object benchmarks/CMakeFiles/add_benchmark.dir/add_benchmark.c.o"
	cd /root/xiaojian/xiaojian/src/util/CRoaring-master/benchmarks && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT benchmarks/CMakeFiles/add_benchmark.dir/add_benchmark.c.o -MF CMakeFiles/add_benchmark.dir/add_benchmark.c.o.d -o CMakeFiles/add_benchmark.dir/add_benchmark.c.o -c /root/xiaojian/xiaojian/src/util/CRoaring-master/benchmarks/add_benchmark.c

benchmarks/CMakeFiles/add_benchmark.dir/add_benchmark.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/add_benchmark.dir/add_benchmark.c.i"
	cd /root/xiaojian/xiaojian/src/util/CRoaring-master/benchmarks && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/xiaojian/xiaojian/src/util/CRoaring-master/benchmarks/add_benchmark.c > CMakeFiles/add_benchmark.dir/add_benchmark.c.i

benchmarks/CMakeFiles/add_benchmark.dir/add_benchmark.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/add_benchmark.dir/add_benchmark.c.s"
	cd /root/xiaojian/xiaojian/src/util/CRoaring-master/benchmarks && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/xiaojian/xiaojian/src/util/CRoaring-master/benchmarks/add_benchmark.c -o CMakeFiles/add_benchmark.dir/add_benchmark.c.s

# Object files for target add_benchmark
add_benchmark_OBJECTS = \
"CMakeFiles/add_benchmark.dir/add_benchmark.c.o"

# External object files for target add_benchmark
add_benchmark_EXTERNAL_OBJECTS =

benchmarks/add_benchmark: benchmarks/CMakeFiles/add_benchmark.dir/add_benchmark.c.o
benchmarks/add_benchmark: benchmarks/CMakeFiles/add_benchmark.dir/build.make
benchmarks/add_benchmark: src/libroaring.a
benchmarks/add_benchmark: benchmarks/CMakeFiles/add_benchmark.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/xiaojian/xiaojian/src/util/CRoaring-master/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable add_benchmark"
	cd /root/xiaojian/xiaojian/src/util/CRoaring-master/benchmarks && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/add_benchmark.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
benchmarks/CMakeFiles/add_benchmark.dir/build: benchmarks/add_benchmark
.PHONY : benchmarks/CMakeFiles/add_benchmark.dir/build

benchmarks/CMakeFiles/add_benchmark.dir/clean:
	cd /root/xiaojian/xiaojian/src/util/CRoaring-master/benchmarks && $(CMAKE_COMMAND) -P CMakeFiles/add_benchmark.dir/cmake_clean.cmake
.PHONY : benchmarks/CMakeFiles/add_benchmark.dir/clean

benchmarks/CMakeFiles/add_benchmark.dir/depend:
	cd /root/xiaojian/xiaojian/src/util/CRoaring-master && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/xiaojian/xiaojian/src/util/CRoaring-master /root/xiaojian/xiaojian/src/util/CRoaring-master/benchmarks /root/xiaojian/xiaojian/src/util/CRoaring-master /root/xiaojian/xiaojian/src/util/CRoaring-master/benchmarks /root/xiaojian/xiaojian/src/util/CRoaring-master/benchmarks/CMakeFiles/add_benchmark.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : benchmarks/CMakeFiles/add_benchmark.dir/depend

