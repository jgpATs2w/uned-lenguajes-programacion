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
CMAKE_COMMAND = /home/garciaja/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.6668.126/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/garciaja/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.6668.126/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/4_polinomios.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/4_polinomios.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4_polinomios.dir/flags.make

CMakeFiles/4_polinomios.dir/main.cpp.o: CMakeFiles/4_polinomios.dir/flags.make
CMakeFiles/4_polinomios.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/4_polinomios.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/4_polinomios.dir/main.cpp.o -c /home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios/main.cpp

CMakeFiles/4_polinomios.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/4_polinomios.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios/main.cpp > CMakeFiles/4_polinomios.dir/main.cpp.i

CMakeFiles/4_polinomios.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/4_polinomios.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios/main.cpp -o CMakeFiles/4_polinomios.dir/main.cpp.s

# Object files for target 4_polinomios
4_polinomios_OBJECTS = \
"CMakeFiles/4_polinomios.dir/main.cpp.o"

# External object files for target 4_polinomios
4_polinomios_EXTERNAL_OBJECTS =

4_polinomios: CMakeFiles/4_polinomios.dir/main.cpp.o
4_polinomios: CMakeFiles/4_polinomios.dir/build.make
4_polinomios: CMakeFiles/4_polinomios.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 4_polinomios"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/4_polinomios.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4_polinomios.dir/build: 4_polinomios

.PHONY : CMakeFiles/4_polinomios.dir/build

CMakeFiles/4_polinomios.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/4_polinomios.dir/cmake_clean.cmake
.PHONY : CMakeFiles/4_polinomios.dir/clean

CMakeFiles/4_polinomios.dir/depend:
	cd /home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios /home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios /home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios/cmake-build-debug /home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios/cmake-build-debug /home/garciaja/Documents/uned/19_20/2s/leng_prog/trabajo/4_polinomios/cmake-build-debug/CMakeFiles/4_polinomios.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/4_polinomios.dir/depend

