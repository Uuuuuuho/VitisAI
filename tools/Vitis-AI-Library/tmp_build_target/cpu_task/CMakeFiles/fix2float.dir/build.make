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
include cpu_task/CMakeFiles/fix2float.dir/depend.make

# Include the progress variables for this target.
include cpu_task/CMakeFiles/fix2float.dir/progress.make

# Include the compile flags for this target's objects.
include cpu_task/CMakeFiles/fix2float.dir/flags.make

cpu_task/CMakeFiles/fix2float.dir/ops/fix2float/fix2float.cpp.o: cpu_task/CMakeFiles/fix2float.dir/flags.make
cpu_task/CMakeFiles/fix2float.dir/ops/fix2float/fix2float.cpp.o: ../cpu_task/ops/fix2float/fix2float.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object cpu_task/CMakeFiles/fix2float.dir/ops/fix2float/fix2float.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/cpu_task && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fix2float.dir/ops/fix2float/fix2float.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/cpu_task/ops/fix2float/fix2float.cpp

cpu_task/CMakeFiles/fix2float.dir/ops/fix2float/fix2float.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fix2float.dir/ops/fix2float/fix2float.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/cpu_task && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/cpu_task/ops/fix2float/fix2float.cpp > CMakeFiles/fix2float.dir/ops/fix2float/fix2float.cpp.i

cpu_task/CMakeFiles/fix2float.dir/ops/fix2float/fix2float.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fix2float.dir/ops/fix2float/fix2float.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/cpu_task && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/cpu_task/ops/fix2float/fix2float.cpp -o CMakeFiles/fix2float.dir/ops/fix2float/fix2float.cpp.s

# Object files for target fix2float
fix2float_OBJECTS = \
"CMakeFiles/fix2float.dir/ops/fix2float/fix2float.cpp.o"

# External object files for target fix2float
fix2float_EXTERNAL_OBJECTS =

cpu_task/libvart_op_imp_fix2float.so: cpu_task/CMakeFiles/fix2float.dir/ops/fix2float/fix2float.cpp.o
cpu_task/libvart_op_imp_fix2float.so: cpu_task/CMakeFiles/fix2float.dir/build.make
cpu_task/libvart_op_imp_fix2float.so: cpu_task/libvitis_ai_library-cpu_task.so.1.3.1
cpu_task/libvart_op_imp_fix2float.so: runner_helper/libvitis_ai_library-runner_helper.so.1.3.1
cpu_task/libvart_op_imp_fix2float.so: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libvart-mem-manager.so.1.3.2
cpu_task/libvart_op_imp_fix2float.so: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libvart-runner.so.1.3.2
cpu_task/libvart_op_imp_fix2float.so: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libvart-util.so.1.3.2
cpu_task/libvart_op_imp_fix2float.so: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libxir.so.1.3.2
cpu_task/libvart_op_imp_fix2float.so: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libunilog.so.1.3.2
cpu_task/libvart_op_imp_fix2float.so: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libglog.so.0.4.0
cpu_task/libvart_op_imp_fix2float.so: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libgflags.so.2.2.2
cpu_task/libvart_op_imp_fix2float.so: cpu_task/CMakeFiles/fix2float.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libvart_op_imp_fix2float.so"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/cpu_task && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fix2float.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cpu_task/CMakeFiles/fix2float.dir/build: cpu_task/libvart_op_imp_fix2float.so

.PHONY : cpu_task/CMakeFiles/fix2float.dir/build

cpu_task/CMakeFiles/fix2float.dir/clean:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/cpu_task && $(CMAKE_COMMAND) -P CMakeFiles/fix2float.dir/cmake_clean.cmake
.PHONY : cpu_task/CMakeFiles/fix2float.dir/clean

cpu_task/CMakeFiles/fix2float.dir/depend:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/cpu_task /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/cpu_task /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/cpu_task/CMakeFiles/fix2float.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cpu_task/CMakeFiles/fix2float.dir/depend

