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
include usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/depend.make

# Include the progress variables for this target.
include usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/progress.make

# Include the compile flags for this target's objects.
include usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/flags.make

usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/src/reboot.c.o: usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/flags.make
usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/src/reboot.c.o: ../usefultools/src/reboot.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/src/reboot.c.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/usefultools && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/xilinx_upgrade-reboot.dir/src/reboot.c.o   -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/usefultools/src/reboot.c

usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/src/reboot.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/xilinx_upgrade-reboot.dir/src/reboot.c.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/usefultools && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/usefultools/src/reboot.c > CMakeFiles/xilinx_upgrade-reboot.dir/src/reboot.c.i

usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/src/reboot.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/xilinx_upgrade-reboot.dir/src/reboot.c.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/usefultools && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/usefultools/src/reboot.c -o CMakeFiles/xilinx_upgrade-reboot.dir/src/reboot.c.s

# Object files for target xilinx_upgrade-reboot
xilinx_upgrade__reboot_OBJECTS = \
"CMakeFiles/xilinx_upgrade-reboot.dir/src/reboot.c.o"

# External object files for target xilinx_upgrade-reboot
xilinx_upgrade__reboot_EXTERNAL_OBJECTS =

usefultools/xilinx_upgrade-reboot: usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/src/reboot.c.o
usefultools/xilinx_upgrade-reboot: usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/build.make
usefultools/xilinx_upgrade-reboot: usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable xilinx_upgrade-reboot"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/usefultools && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/xilinx_upgrade-reboot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/build: usefultools/xilinx_upgrade-reboot

.PHONY : usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/build

usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/clean:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/usefultools && $(CMAKE_COMMAND) -P CMakeFiles/xilinx_upgrade-reboot.dir/cmake_clean.cmake
.PHONY : usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/clean

usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/depend:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/usefultools /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/usefultools /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : usefultools/CMakeFiles/xilinx_upgrade-reboot.dir/depend

