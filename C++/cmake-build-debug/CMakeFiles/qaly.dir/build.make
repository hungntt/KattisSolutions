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
include CMakeFiles/qaly.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/qaly.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qaly.dir/flags.make

CMakeFiles/qaly.dir/qaly.cpp.obj: CMakeFiles/qaly.dir/flags.make
CMakeFiles/qaly.dir/qaly.cpp.obj: ../qaly.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CS\Kattis\KattisSoluions\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/qaly.dir/qaly.cpp.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\qaly.dir\qaly.cpp.obj -c D:\CS\Kattis\KattisSoluions\C++\qaly.cpp

CMakeFiles/qaly.dir/qaly.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qaly.dir/qaly.cpp.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CS\Kattis\KattisSoluions\C++\qaly.cpp > CMakeFiles\qaly.dir\qaly.cpp.i

CMakeFiles/qaly.dir/qaly.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qaly.dir/qaly.cpp.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CS\Kattis\KattisSoluions\C++\qaly.cpp -o CMakeFiles\qaly.dir\qaly.cpp.s

# Object files for target qaly
qaly_OBJECTS = \
"CMakeFiles/qaly.dir/qaly.cpp.obj"

# External object files for target qaly
qaly_EXTERNAL_OBJECTS =

qaly.exe: CMakeFiles/qaly.dir/qaly.cpp.obj
qaly.exe: CMakeFiles/qaly.dir/build.make
qaly.exe: CMakeFiles/qaly.dir/linklibs.rsp
qaly.exe: CMakeFiles/qaly.dir/objects1.rsp
qaly.exe: CMakeFiles/qaly.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CS\Kattis\KattisSoluions\C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable qaly.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\qaly.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qaly.dir/build: qaly.exe

.PHONY : CMakeFiles/qaly.dir/build

CMakeFiles/qaly.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\qaly.dir\cmake_clean.cmake
.PHONY : CMakeFiles/qaly.dir/clean

CMakeFiles/qaly.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CS\Kattis\KattisSoluions\C++ D:\CS\Kattis\KattisSoluions\C++ D:\CS\Kattis\KattisSoluions\C++\cmake-build-debug D:\CS\Kattis\KattisSoluions\C++\cmake-build-debug D:\CS\Kattis\KattisSoluions\C++\cmake-build-debug\CMakeFiles\qaly.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qaly.dir/depend
