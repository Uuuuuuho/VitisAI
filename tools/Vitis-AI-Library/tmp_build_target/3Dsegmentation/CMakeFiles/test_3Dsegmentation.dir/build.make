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
include 3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/depend.make

# Include the progress variables for this target.
include 3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/progress.make

# Include the compile flags for this target's objects.
include 3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/flags.make

3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/test/test_3Dsegmentation.cpp.o: 3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/flags.make
3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/test/test_3Dsegmentation.cpp.o: ../3Dsegmentation/test/test_3Dsegmentation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/test/test_3Dsegmentation.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/3Dsegmentation && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_3Dsegmentation.dir/test/test_3Dsegmentation.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/3Dsegmentation/test/test_3Dsegmentation.cpp

3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/test/test_3Dsegmentation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_3Dsegmentation.dir/test/test_3Dsegmentation.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/3Dsegmentation && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/3Dsegmentation/test/test_3Dsegmentation.cpp > CMakeFiles/test_3Dsegmentation.dir/test/test_3Dsegmentation.cpp.i

3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/test/test_3Dsegmentation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_3Dsegmentation.dir/test/test_3Dsegmentation.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/3Dsegmentation && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/3Dsegmentation/test/test_3Dsegmentation.cpp -o CMakeFiles/test_3Dsegmentation.dir/test/test_3Dsegmentation.cpp.s

# Object files for target test_3Dsegmentation
test_3Dsegmentation_OBJECTS = \
"CMakeFiles/test_3Dsegmentation.dir/test/test_3Dsegmentation.cpp.o"

# External object files for target test_3Dsegmentation
test_3Dsegmentation_EXTERNAL_OBJECTS =

3Dsegmentation/test_3Dsegmentation: 3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/test/test_3Dsegmentation.cpp.o
3Dsegmentation/test_3Dsegmentation: 3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/build.make
3Dsegmentation/test_3Dsegmentation: 3Dsegmentation/libvitis_ai_library-3Dsegmentation.so.1.3.1
3Dsegmentation/test_3Dsegmentation: xnnpp/libxnnpp-xnnpp.so.1.3.1
3Dsegmentation/test_3Dsegmentation: dpu_task/libvitis_ai_library-dpu_task.so.1.3.1
3Dsegmentation/test_3Dsegmentation: math/libvitis_ai_library-math.so.1.3.1
3Dsegmentation/test_3Dsegmentation: model_config/libvitis_ai_library-model_config.so.1.3.1
3Dsegmentation/test_3Dsegmentation: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libprotobuf.so
3Dsegmentation/test_3Dsegmentation: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_video.so.3.4.3
3Dsegmentation/test_3Dsegmentation: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_highgui.so.3.4.3
3Dsegmentation/test_3Dsegmentation: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_videoio.so.3.4.3
3Dsegmentation/test_3Dsegmentation: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgcodecs.so.3.4.3
3Dsegmentation/test_3Dsegmentation: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgproc.so.3.4.3
3Dsegmentation/test_3Dsegmentation: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_core.so.3.4.3
3Dsegmentation/test_3Dsegmentation: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libvart-util.so.1.3.2
3Dsegmentation/test_3Dsegmentation: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libxir.so.1.3.2
3Dsegmentation/test_3Dsegmentation: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libunilog.so.1.3.2
3Dsegmentation/test_3Dsegmentation: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libglog.so.0.4.0
3Dsegmentation/test_3Dsegmentation: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libgflags.so.2.2.2
3Dsegmentation/test_3Dsegmentation: 3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_3Dsegmentation"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/3Dsegmentation && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_3Dsegmentation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/build: 3Dsegmentation/test_3Dsegmentation

.PHONY : 3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/build

3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/clean:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/3Dsegmentation && $(CMAKE_COMMAND) -P CMakeFiles/test_3Dsegmentation.dir/cmake_clean.cmake
.PHONY : 3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/clean

3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/depend:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/3Dsegmentation /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/3Dsegmentation /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 3Dsegmentation/CMakeFiles/test_3Dsegmentation.dir/depend

