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
CMAKE_COMMAND = /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/cmake

# The command to remove a file.
RM = /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target

# Include any dependencies generated for this target.
include reidtracker/CMakeFiles/reidtracker.dir/depend.make

# Include the progress variables for this target.
include reidtracker/CMakeFiles/reidtracker.dir/progress.make

# Include the compile flags for this target's objects.
include reidtracker/CMakeFiles/reidtracker.dir/flags.make

reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_filter_linear.cpp.o: reidtracker/CMakeFiles/reidtracker.dir/flags.make
reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_filter_linear.cpp.o: ../reidtracker/src/ftd/ftd_filter_linear.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_filter_linear.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reidtracker.dir/src/ftd/ftd_filter_linear.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/ftd/ftd_filter_linear.cpp

reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_filter_linear.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reidtracker.dir/src/ftd/ftd_filter_linear.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/ftd/ftd_filter_linear.cpp > CMakeFiles/reidtracker.dir/src/ftd/ftd_filter_linear.cpp.i

reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_filter_linear.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reidtracker.dir/src/ftd/ftd_filter_linear.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/ftd/ftd_filter_linear.cpp -o CMakeFiles/reidtracker.dir/src/ftd/ftd_filter_linear.cpp.s

reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_structure.cpp.o: reidtracker/CMakeFiles/reidtracker.dir/flags.make
reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_structure.cpp.o: ../reidtracker/src/ftd/ftd_structure.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_structure.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reidtracker.dir/src/ftd/ftd_structure.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/ftd/ftd_structure.cpp

reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_structure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reidtracker.dir/src/ftd/ftd_structure.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/ftd/ftd_structure.cpp > CMakeFiles/reidtracker.dir/src/ftd/ftd_structure.cpp.i

reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_structure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reidtracker.dir/src/ftd/ftd_structure.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/ftd/ftd_structure.cpp -o CMakeFiles/reidtracker.dir/src/ftd/ftd_structure.cpp.s

reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_trajectory.cpp.o: reidtracker/CMakeFiles/reidtracker.dir/flags.make
reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_trajectory.cpp.o: ../reidtracker/src/ftd/ftd_trajectory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_trajectory.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reidtracker.dir/src/ftd/ftd_trajectory.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/ftd/ftd_trajectory.cpp

reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_trajectory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reidtracker.dir/src/ftd/ftd_trajectory.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/ftd/ftd_trajectory.cpp > CMakeFiles/reidtracker.dir/src/ftd/ftd_trajectory.cpp.i

reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_trajectory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reidtracker.dir/src/ftd/ftd_trajectory.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/ftd/ftd_trajectory.cpp -o CMakeFiles/reidtracker.dir/src/ftd/ftd_trajectory.cpp.s

reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_hungarian.cpp.o: reidtracker/CMakeFiles/reidtracker.dir/flags.make
reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_hungarian.cpp.o: ../reidtracker/src/ftd/ftd_hungarian.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_hungarian.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reidtracker.dir/src/ftd/ftd_hungarian.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/ftd/ftd_hungarian.cpp

reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_hungarian.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reidtracker.dir/src/ftd/ftd_hungarian.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/ftd/ftd_hungarian.cpp > CMakeFiles/reidtracker.dir/src/ftd/ftd_hungarian.cpp.i

reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_hungarian.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reidtracker.dir/src/ftd/ftd_hungarian.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/ftd/ftd_hungarian.cpp -o CMakeFiles/reidtracker.dir/src/ftd/ftd_hungarian.cpp.s

reidtracker/CMakeFiles/reidtracker.dir/src/state_map.cpp.o: reidtracker/CMakeFiles/reidtracker.dir/flags.make
reidtracker/CMakeFiles/reidtracker.dir/src/state_map.cpp.o: ../reidtracker/src/state_map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object reidtracker/CMakeFiles/reidtracker.dir/src/state_map.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reidtracker.dir/src/state_map.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/state_map.cpp

reidtracker/CMakeFiles/reidtracker.dir/src/state_map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reidtracker.dir/src/state_map.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/state_map.cpp > CMakeFiles/reidtracker.dir/src/state_map.cpp.i

reidtracker/CMakeFiles/reidtracker.dir/src/state_map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reidtracker.dir/src/state_map.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/state_map.cpp -o CMakeFiles/reidtracker.dir/src/state_map.cpp.s

reidtracker/CMakeFiles/reidtracker.dir/src/tracker.cpp.o: reidtracker/CMakeFiles/reidtracker.dir/flags.make
reidtracker/CMakeFiles/reidtracker.dir/src/tracker.cpp.o: ../reidtracker/src/tracker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object reidtracker/CMakeFiles/reidtracker.dir/src/tracker.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reidtracker.dir/src/tracker.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/tracker.cpp

reidtracker/CMakeFiles/reidtracker.dir/src/tracker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reidtracker.dir/src/tracker.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/tracker.cpp > CMakeFiles/reidtracker.dir/src/tracker.cpp.i

reidtracker/CMakeFiles/reidtracker.dir/src/tracker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reidtracker.dir/src/tracker.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/tracker.cpp -o CMakeFiles/reidtracker.dir/src/tracker.cpp.s

reidtracker/CMakeFiles/reidtracker.dir/src/tracker_imp.cpp.o: reidtracker/CMakeFiles/reidtracker.dir/flags.make
reidtracker/CMakeFiles/reidtracker.dir/src/tracker_imp.cpp.o: ../reidtracker/src/tracker_imp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object reidtracker/CMakeFiles/reidtracker.dir/src/tracker_imp.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reidtracker.dir/src/tracker_imp.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/tracker_imp.cpp

reidtracker/CMakeFiles/reidtracker.dir/src/tracker_imp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reidtracker.dir/src/tracker_imp.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/tracker_imp.cpp > CMakeFiles/reidtracker.dir/src/tracker_imp.cpp.i

reidtracker/CMakeFiles/reidtracker.dir/src/tracker_imp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reidtracker.dir/src/tracker_imp.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker/src/tracker_imp.cpp -o CMakeFiles/reidtracker.dir/src/tracker_imp.cpp.s

reidtracker/CMakeFiles/reidtracker.dir/version.c.o: reidtracker/CMakeFiles/reidtracker.dir/flags.make
reidtracker/CMakeFiles/reidtracker.dir/version.c.o: reidtracker/version.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object reidtracker/CMakeFiles/reidtracker.dir/version.c.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/reidtracker.dir/version.c.o   -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker/version.c

reidtracker/CMakeFiles/reidtracker.dir/version.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/reidtracker.dir/version.c.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker/version.c > CMakeFiles/reidtracker.dir/version.c.i

reidtracker/CMakeFiles/reidtracker.dir/version.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/reidtracker.dir/version.c.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker/version.c -o CMakeFiles/reidtracker.dir/version.c.s

# Object files for target reidtracker
reidtracker_OBJECTS = \
"CMakeFiles/reidtracker.dir/src/ftd/ftd_filter_linear.cpp.o" \
"CMakeFiles/reidtracker.dir/src/ftd/ftd_structure.cpp.o" \
"CMakeFiles/reidtracker.dir/src/ftd/ftd_trajectory.cpp.o" \
"CMakeFiles/reidtracker.dir/src/ftd/ftd_hungarian.cpp.o" \
"CMakeFiles/reidtracker.dir/src/state_map.cpp.o" \
"CMakeFiles/reidtracker.dir/src/tracker.cpp.o" \
"CMakeFiles/reidtracker.dir/src/tracker_imp.cpp.o" \
"CMakeFiles/reidtracker.dir/version.c.o"

# External object files for target reidtracker
reidtracker_EXTERNAL_OBJECTS =

reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_filter_linear.cpp.o
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_structure.cpp.o
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_trajectory.cpp.o
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: reidtracker/CMakeFiles/reidtracker.dir/src/ftd/ftd_hungarian.cpp.o
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: reidtracker/CMakeFiles/reidtracker.dir/src/state_map.cpp.o
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: reidtracker/CMakeFiles/reidtracker.dir/src/tracker.cpp.o
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: reidtracker/CMakeFiles/reidtracker.dir/src/tracker_imp.cpp.o
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: reidtracker/CMakeFiles/reidtracker.dir/version.c.o
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: reidtracker/CMakeFiles/reidtracker.dir/build.make
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: reid/libvitis_ai_library-reid.so.1.3.1
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: xnnpp/libxnnpp-xnnpp.so.1.3.1
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: dpu_task/libvitis_ai_library-dpu_task.so.1.3.1
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_video.so.3.4.3
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_highgui.so.3.4.3
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_videoio.so.3.4.3
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgcodecs.so.3.4.3
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgproc.so.3.4.3
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: model_config/libvitis_ai_library-model_config.so.1.3.1
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libprotobuf.so
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: math/libvitis_ai_library-math.so.1.3.1
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_core.so.3.4.3
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libvart-util.so.1.3.2
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libxir.so.1.3.2
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libunilog.so.1.3.2
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libglog.so.0.4.0
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libgflags.so.2.2.2
reidtracker/libvitis_ai_library-reidtracker.so.1.3.1: reidtracker/CMakeFiles/reidtracker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX shared library libvitis_ai_library-reidtracker.so"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reidtracker.dir/link.txt --verbose=$(VERBOSE)
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && $(CMAKE_COMMAND) -E cmake_symlink_library libvitis_ai_library-reidtracker.so.1.3.1 libvitis_ai_library-reidtracker.so.1 libvitis_ai_library-reidtracker.so

reidtracker/libvitis_ai_library-reidtracker.so.1: reidtracker/libvitis_ai_library-reidtracker.so.1.3.1
	@$(CMAKE_COMMAND) -E touch_nocreate reidtracker/libvitis_ai_library-reidtracker.so.1

reidtracker/libvitis_ai_library-reidtracker.so: reidtracker/libvitis_ai_library-reidtracker.so.1.3.1
	@$(CMAKE_COMMAND) -E touch_nocreate reidtracker/libvitis_ai_library-reidtracker.so

# Rule to build all files generated by this target.
reidtracker/CMakeFiles/reidtracker.dir/build: reidtracker/libvitis_ai_library-reidtracker.so

.PHONY : reidtracker/CMakeFiles/reidtracker.dir/build

reidtracker/CMakeFiles/reidtracker.dir/clean:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker && $(CMAKE_COMMAND) -P CMakeFiles/reidtracker.dir/cmake_clean.cmake
.PHONY : reidtracker/CMakeFiles/reidtracker.dir/clean

reidtracker/CMakeFiles/reidtracker.dir/depend:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reidtracker /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker/CMakeFiles/reidtracker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : reidtracker/CMakeFiles/reidtracker.dir/depend

