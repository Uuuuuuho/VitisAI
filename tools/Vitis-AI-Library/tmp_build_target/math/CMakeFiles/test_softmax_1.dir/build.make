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
include math/CMakeFiles/test_softmax_1.dir/depend.make

# Include the progress variables for this target.
include math/CMakeFiles/test_softmax_1.dir/progress.make

# Include the compile flags for this target's objects.
include math/CMakeFiles/test_softmax_1.dir/flags.make

math/CMakeFiles/test_softmax_1.dir/test/test_softmax_1.cpp.o: math/CMakeFiles/test_softmax_1.dir/flags.make
math/CMakeFiles/test_softmax_1.dir/test/test_softmax_1.cpp.o: ../math/test/test_softmax_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object math/CMakeFiles/test_softmax_1.dir/test/test_softmax_1.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_softmax_1.dir/test/test_softmax_1.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/math/test/test_softmax_1.cpp

math/CMakeFiles/test_softmax_1.dir/test/test_softmax_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_softmax_1.dir/test/test_softmax_1.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/math/test/test_softmax_1.cpp > CMakeFiles/test_softmax_1.dir/test/test_softmax_1.cpp.i

math/CMakeFiles/test_softmax_1.dir/test/test_softmax_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_softmax_1.dir/test/test_softmax_1.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/math/test/test_softmax_1.cpp -o CMakeFiles/test_softmax_1.dir/test/test_softmax_1.cpp.s

# Object files for target test_softmax_1
test_softmax_1_OBJECTS = \
"CMakeFiles/test_softmax_1.dir/test/test_softmax_1.cpp.o"

# External object files for target test_softmax_1
test_softmax_1_EXTERNAL_OBJECTS =

math/test_softmax_1: math/CMakeFiles/test_softmax_1.dir/test/test_softmax_1.cpp.o
math/test_softmax_1: math/CMakeFiles/test_softmax_1.dir/build.make
math/test_softmax_1: math/libvitis_ai_library-math.so.1.3.1
math/test_softmax_1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_video.so.3.4.3
math/test_softmax_1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_highgui.so.3.4.3
math/test_softmax_1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libglog.so.0.4.0
math/test_softmax_1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libgflags.so.2.2.2
math/test_softmax_1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_videoio.so.3.4.3
math/test_softmax_1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgcodecs.so.3.4.3
math/test_softmax_1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgproc.so.3.4.3
math/test_softmax_1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_core.so.3.4.3
math/test_softmax_1: math/CMakeFiles/test_softmax_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_softmax_1"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_softmax_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
math/CMakeFiles/test_softmax_1.dir/build: math/test_softmax_1

.PHONY : math/CMakeFiles/test_softmax_1.dir/build

math/CMakeFiles/test_softmax_1.dir/clean:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math && $(CMAKE_COMMAND) -P CMakeFiles/test_softmax_1.dir/cmake_clean.cmake
.PHONY : math/CMakeFiles/test_softmax_1.dir/clean

math/CMakeFiles/test_softmax_1.dir/depend:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/math /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math/CMakeFiles/test_softmax_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : math/CMakeFiles/test_softmax_1.dir/depend

