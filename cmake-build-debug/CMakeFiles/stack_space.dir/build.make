# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake.exe

# The command to remove a file.
RM = /usr/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/e/Workspace/code/c/C-Languge-coding

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/e/Workspace/code/c/C-Languge-coding/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stack_space.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/stack_space.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/stack_space.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack_space.dir/flags.make

CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.o: CMakeFiles/stack_space.dir/flags.make
CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.o: /cygdrive/e/Workspace/code/c/C-Languge-coding/variable\ and\ memory\ distribute/stack_space.c
CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.o: CMakeFiles/stack_space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/cygdrive/e/Workspace/code/c/C-Languge-coding/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.o"
	/usr/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.o -MF CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.o.d -o CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.o -c "/cygdrive/e/Workspace/code/c/C-Languge-coding/variable and memory distribute/stack_space.c"

CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.i"
	/usr/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/cygdrive/e/Workspace/code/c/C-Languge-coding/variable and memory distribute/stack_space.c" > CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.i

CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.s"
	/usr/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/cygdrive/e/Workspace/code/c/C-Languge-coding/variable and memory distribute/stack_space.c" -o CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.s

# Object files for target stack_space
stack_space_OBJECTS = \
"CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.o"

# External object files for target stack_space
stack_space_EXTERNAL_OBJECTS =

stack_space.exe: CMakeFiles/stack_space.dir/variable_and_memory_distribute/stack_space.c.o
stack_space.exe: CMakeFiles/stack_space.dir/build.make
stack_space.exe: CMakeFiles/stack_space.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/cygdrive/e/Workspace/code/c/C-Languge-coding/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable stack_space.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack_space.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack_space.dir/build: stack_space.exe
.PHONY : CMakeFiles/stack_space.dir/build

CMakeFiles/stack_space.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stack_space.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stack_space.dir/clean

CMakeFiles/stack_space.dir/depend:
	cd /cygdrive/e/Workspace/code/c/C-Languge-coding/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/e/Workspace/code/c/C-Languge-coding /cygdrive/e/Workspace/code/c/C-Languge-coding /cygdrive/e/Workspace/code/c/C-Languge-coding/cmake-build-debug /cygdrive/e/Workspace/code/c/C-Languge-coding/cmake-build-debug /cygdrive/e/Workspace/code/c/C-Languge-coding/cmake-build-debug/CMakeFiles/stack_space.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/stack_space.dir/depend
