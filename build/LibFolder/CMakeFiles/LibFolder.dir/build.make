# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vboxuser/Desktop/SETR/Assign1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vboxuser/Desktop/SETR/Assign1/build

# Include any dependencies generated for this target.
include LibFolder/CMakeFiles/LibFolder.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include LibFolder/CMakeFiles/LibFolder.dir/compiler_depend.make

# Include the progress variables for this target.
include LibFolder/CMakeFiles/LibFolder.dir/progress.make

# Include the compile flags for this target's objects.
include LibFolder/CMakeFiles/LibFolder.dir/flags.make

LibFolder/CMakeFiles/LibFolder.dir/MyDLL.c.o: LibFolder/CMakeFiles/LibFolder.dir/flags.make
LibFolder/CMakeFiles/LibFolder.dir/MyDLL.c.o: ../LibFolder/MyDLL.c
LibFolder/CMakeFiles/LibFolder.dir/MyDLL.c.o: LibFolder/CMakeFiles/LibFolder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vboxuser/Desktop/SETR/Assign1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object LibFolder/CMakeFiles/LibFolder.dir/MyDLL.c.o"
	cd /home/vboxuser/Desktop/SETR/Assign1/build/LibFolder && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT LibFolder/CMakeFiles/LibFolder.dir/MyDLL.c.o -MF CMakeFiles/LibFolder.dir/MyDLL.c.o.d -o CMakeFiles/LibFolder.dir/MyDLL.c.o -c /home/vboxuser/Desktop/SETR/Assign1/LibFolder/MyDLL.c

LibFolder/CMakeFiles/LibFolder.dir/MyDLL.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LibFolder.dir/MyDLL.c.i"
	cd /home/vboxuser/Desktop/SETR/Assign1/build/LibFolder && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vboxuser/Desktop/SETR/Assign1/LibFolder/MyDLL.c > CMakeFiles/LibFolder.dir/MyDLL.c.i

LibFolder/CMakeFiles/LibFolder.dir/MyDLL.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LibFolder.dir/MyDLL.c.s"
	cd /home/vboxuser/Desktop/SETR/Assign1/build/LibFolder && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vboxuser/Desktop/SETR/Assign1/LibFolder/MyDLL.c -o CMakeFiles/LibFolder.dir/MyDLL.c.s

# Object files for target LibFolder
LibFolder_OBJECTS = \
"CMakeFiles/LibFolder.dir/MyDLL.c.o"

# External object files for target LibFolder
LibFolder_EXTERNAL_OBJECTS =

LibFolder/libLibFolder.a: LibFolder/CMakeFiles/LibFolder.dir/MyDLL.c.o
LibFolder/libLibFolder.a: LibFolder/CMakeFiles/LibFolder.dir/build.make
LibFolder/libLibFolder.a: LibFolder/CMakeFiles/LibFolder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vboxuser/Desktop/SETR/Assign1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libLibFolder.a"
	cd /home/vboxuser/Desktop/SETR/Assign1/build/LibFolder && $(CMAKE_COMMAND) -P CMakeFiles/LibFolder.dir/cmake_clean_target.cmake
	cd /home/vboxuser/Desktop/SETR/Assign1/build/LibFolder && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LibFolder.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
LibFolder/CMakeFiles/LibFolder.dir/build: LibFolder/libLibFolder.a
.PHONY : LibFolder/CMakeFiles/LibFolder.dir/build

LibFolder/CMakeFiles/LibFolder.dir/clean:
	cd /home/vboxuser/Desktop/SETR/Assign1/build/LibFolder && $(CMAKE_COMMAND) -P CMakeFiles/LibFolder.dir/cmake_clean.cmake
.PHONY : LibFolder/CMakeFiles/LibFolder.dir/clean

LibFolder/CMakeFiles/LibFolder.dir/depend:
	cd /home/vboxuser/Desktop/SETR/Assign1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vboxuser/Desktop/SETR/Assign1 /home/vboxuser/Desktop/SETR/Assign1/LibFolder /home/vboxuser/Desktop/SETR/Assign1/build /home/vboxuser/Desktop/SETR/Assign1/build/LibFolder /home/vboxuser/Desktop/SETR/Assign1/build/LibFolder/CMakeFiles/LibFolder.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : LibFolder/CMakeFiles/LibFolder.dir/depend

