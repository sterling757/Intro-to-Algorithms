# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.4\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.4\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Sterling\Desktop\Algo Programs\Lab1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Sterling\Desktop\Algo Programs\Lab1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Algo_Programs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Algo_Programs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Algo_Programs.dir/flags.make

CMakeFiles/Algo_Programs.dir/main.cpp.obj: CMakeFiles/Algo_Programs.dir/flags.make
CMakeFiles/Algo_Programs.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Sterling\Desktop\Algo Programs\Lab1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Algo_Programs.dir/main.cpp.obj"
	C:\MinGw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Algo_Programs.dir\main.cpp.obj -c "C:\Users\Sterling\Desktop\Algo Programs\Lab1\main.cpp"

CMakeFiles/Algo_Programs.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algo_Programs.dir/main.cpp.i"
	C:\MinGw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Sterling\Desktop\Algo Programs\Lab1\main.cpp" > CMakeFiles\Algo_Programs.dir\main.cpp.i

CMakeFiles/Algo_Programs.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algo_Programs.dir/main.cpp.s"
	C:\MinGw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Sterling\Desktop\Algo Programs\Lab1\main.cpp" -o CMakeFiles\Algo_Programs.dir\main.cpp.s

CMakeFiles/Algo_Programs.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Algo_Programs.dir/main.cpp.obj.requires

CMakeFiles/Algo_Programs.dir/main.cpp.obj.provides: CMakeFiles/Algo_Programs.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Algo_Programs.dir\build.make CMakeFiles/Algo_Programs.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Algo_Programs.dir/main.cpp.obj.provides

CMakeFiles/Algo_Programs.dir/main.cpp.obj.provides.build: CMakeFiles/Algo_Programs.dir/main.cpp.obj


# Object files for target Algo_Programs
Algo_Programs_OBJECTS = \
"CMakeFiles/Algo_Programs.dir/main.cpp.obj"

# External object files for target Algo_Programs
Algo_Programs_EXTERNAL_OBJECTS =

Algo_Programs.exe: CMakeFiles/Algo_Programs.dir/main.cpp.obj
Algo_Programs.exe: CMakeFiles/Algo_Programs.dir/build.make
Algo_Programs.exe: CMakeFiles/Algo_Programs.dir/linklibs.rsp
Algo_Programs.exe: CMakeFiles/Algo_Programs.dir/objects1.rsp
Algo_Programs.exe: CMakeFiles/Algo_Programs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Sterling\Desktop\Algo Programs\Lab1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Algo_Programs.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Algo_Programs.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Algo_Programs.dir/build: Algo_Programs.exe

.PHONY : CMakeFiles/Algo_Programs.dir/build

CMakeFiles/Algo_Programs.dir/requires: CMakeFiles/Algo_Programs.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/Algo_Programs.dir/requires

CMakeFiles/Algo_Programs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Algo_Programs.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Algo_Programs.dir/clean

CMakeFiles/Algo_Programs.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Sterling\Desktop\Algo Programs\Lab1" "C:\Users\Sterling\Desktop\Algo Programs\Lab1" "C:\Users\Sterling\Desktop\Algo Programs\Lab1\cmake-build-debug" "C:\Users\Sterling\Desktop\Algo Programs\Lab1\cmake-build-debug" "C:\Users\Sterling\Desktop\Algo Programs\Lab1\cmake-build-debug\CMakeFiles\Algo_Programs.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Algo_Programs.dir/depend

