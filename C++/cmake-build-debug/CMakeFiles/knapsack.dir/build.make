# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CS\Kattis\KattisSoluions\C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CS\Kattis\KattisSoluions\C++\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/knapsack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/knapsack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/knapsack.dir/flags.make

CMakeFiles/knapsack.dir/knapsack.cpp.obj: CMakeFiles/knapsack.dir/flags.make
CMakeFiles/knapsack.dir/knapsack.cpp.obj: ../knapsack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CS\Kattis\KattisSoluions\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/knapsack.dir/knapsack.cpp.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\knapsack.dir\knapsack.cpp.obj -c D:\CS\Kattis\KattisSoluions\C++\knapsack.cpp

CMakeFiles/knapsack.dir/knapsack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/knapsack.dir/knapsack.cpp.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CS\Kattis\KattisSoluions\C++\knapsack.cpp > CMakeFiles\knapsack.dir\knapsack.cpp.i

CMakeFiles/knapsack.dir/knapsack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/knapsack.dir/knapsack.cpp.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CS\Kattis\KattisSoluions\C++\knapsack.cpp -o CMakeFiles\knapsack.dir\knapsack.cpp.s

# Object files for target knapsack
knapsack_OBJECTS = \
"CMakeFiles/knapsack.dir/knapsack.cpp.obj"

# External object files for target knapsack
knapsack_EXTERNAL_OBJECTS =

knapsack.exe: CMakeFiles/knapsack.dir/knapsack.cpp.obj
knapsack.exe: CMakeFiles/knapsack.dir/build.make
knapsack.exe: CMakeFiles/knapsack.dir/linklibs.rsp
knapsack.exe: CMakeFiles/knapsack.dir/objects1.rsp
knapsack.exe: CMakeFiles/knapsack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CS\Kattis\KattisSoluions\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable knapsack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\knapsack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/knapsack.dir/build: knapsack.exe

.PHONY : CMakeFiles/knapsack.dir/build

CMakeFiles/knapsack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\knapsack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/knapsack.dir/clean

CMakeFiles/knapsack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CS\Kattis\KattisSoluions\C++ D:\CS\Kattis\KattisSoluions\C++ D:\CS\Kattis\KattisSoluions\C++\cmake-build-debug D:\CS\Kattis\KattisSoluions\C++\cmake-build-debug D:\CS\Kattis\KattisSoluions\C++\cmake-build-debug\CMakeFiles\knapsack.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/knapsack.dir/depend
