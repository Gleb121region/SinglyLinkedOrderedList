# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Gelog\Desktop\GG

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Gelog\Desktop\GG\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GG.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GG.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GG.dir/flags.make

CMakeFiles/GG.dir/main.cpp.obj: CMakeFiles/GG.dir/flags.make
CMakeFiles/GG.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Gelog\Desktop\GG\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GG.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GG.dir\main.cpp.obj -c C:\Users\Gelog\Desktop\GG\main.cpp

CMakeFiles/GG.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GG.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Gelog\Desktop\GG\main.cpp > CMakeFiles\GG.dir\main.cpp.i

CMakeFiles/GG.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GG.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Gelog\Desktop\GG\main.cpp -o CMakeFiles\GG.dir\main.cpp.s

CMakeFiles/GG.dir/list.cpp.obj: CMakeFiles/GG.dir/flags.make
CMakeFiles/GG.dir/list.cpp.obj: ../list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Gelog\Desktop\GG\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GG.dir/list.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GG.dir\list.cpp.obj -c C:\Users\Gelog\Desktop\GG\list.cpp

CMakeFiles/GG.dir/list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GG.dir/list.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Gelog\Desktop\GG\list.cpp > CMakeFiles\GG.dir\list.cpp.i

CMakeFiles/GG.dir/list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GG.dir/list.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Gelog\Desktop\GG\list.cpp -o CMakeFiles\GG.dir\list.cpp.s

# Object files for target GG
GG_OBJECTS = \
"CMakeFiles/GG.dir/main.cpp.obj" \
"CMakeFiles/GG.dir/list.cpp.obj"

# External object files for target GG
GG_EXTERNAL_OBJECTS =

GG.exe: CMakeFiles/GG.dir/main.cpp.obj
GG.exe: CMakeFiles/GG.dir/list.cpp.obj
GG.exe: CMakeFiles/GG.dir/build.make
GG.exe: CMakeFiles/GG.dir/linklibs.rsp
GG.exe: CMakeFiles/GG.dir/objects1.rsp
GG.exe: CMakeFiles/GG.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Gelog\Desktop\GG\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable GG.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GG.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GG.dir/build: GG.exe

.PHONY : CMakeFiles/GG.dir/build

CMakeFiles/GG.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GG.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GG.dir/clean

CMakeFiles/GG.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Gelog\Desktop\GG C:\Users\Gelog\Desktop\GG C:\Users\Gelog\Desktop\GG\cmake-build-debug C:\Users\Gelog\Desktop\GG\cmake-build-debug C:\Users\Gelog\Desktop\GG\cmake-build-debug\CMakeFiles\GG.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GG.dir/depend
