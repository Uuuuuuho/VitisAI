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
include facefeature/CMakeFiles/test_facefeature_batch.dir/depend.make

# Include the progress variables for this target.
include facefeature/CMakeFiles/test_facefeature_batch.dir/progress.make

# Include the compile flags for this target's objects.
include facefeature/CMakeFiles/test_facefeature_batch.dir/flags.make

facefeature/CMakeFiles/test_facefeature_batch.dir/test/test_facefeature_batch.cpp.o: facefeature/CMakeFiles/test_facefeature_batch.dir/flags.make
facefeature/CMakeFiles/test_facefeature_batch.dir/test/test_facefeature_batch.cpp.o: ../facefeature/test/test_facefeature_batch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object facefeature/CMakeFiles/test_facefeature_batch.dir/test/test_facefeature_batch.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facefeature && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_facefeature_batch.dir/test/test_facefeature_batch.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facefeature/test/test_facefeature_batch.cpp

facefeature/CMakeFiles/test_facefeature_batch.dir/test/test_facefeature_batch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_facefeature_batch.dir/test/test_facefeature_batch.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facefeature && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facefeature/test/test_facefeature_batch.cpp > CMakeFiles/test_facefeature_batch.dir/test/test_facefeature_batch.cpp.i

facefeature/CMakeFiles/test_facefeature_batch.dir/test/test_facefeature_batch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_facefeature_batch.dir/test/test_facefeature_batch.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facefeature && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facefeature/test/test_facefeature_batch.cpp -o CMakeFiles/test_facefeature_batch.dir/test/test_facefeature_batch.cpp.s

# Object files for target test_facefeature_batch
test_facefeature_batch_OBJECTS = \
"CMakeFiles/test_facefeature_batch.dir/test/test_facefeature_batch.cpp.o"

# External object files for target test_facefeature_batch
test_facefeature_batch_EXTERNAL_OBJECTS =

facefeature/test_facefeature_batch: facefeature/CMakeFiles/test_facefeature_batch.dir/test/test_facefeature_batch.cpp.o
facefeature/test_facefeature_batch: facefeature/CMakeFiles/test_facefeature_batch.dir/build.make
facefeature/test_facefeature_batch: facefeature/libvitis_ai_library-facefeature.so.1.3.1
facefeature/test_facefeature_batch: xnnpp/libxnnpp-xnnpp.so.1.3.1
facefeature/test_facefeature_batch: dpu_task/libvitis_ai_library-dpu_task.so.1.3.1
facefeature/test_facefeature_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_video.so.3.4.3
facefeature/test_facefeature_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_highgui.so.3.4.3
facefeature/test_facefeature_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_videoio.so.3.4.3
facefeature/test_facefeature_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgcodecs.so.3.4.3
facefeature/test_facefeature_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgproc.so.3.4.3
facefeature/test_facefeature_batch: math/libvitis_ai_library-math.so.1.3.1
facefeature/test_facefeature_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_core.so.3.4.3
facefeature/test_facefeature_batch: model_config/libvitis_ai_library-model_config.so.1.3.1
facefeature/test_facefeature_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libprotobuf.so
facefeature/test_facefeature_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libvart-util.so.1.3.2
facefeature/test_facefeature_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libxir.so.1.3.2
facefeature/test_facefeature_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libunilog.so.1.3.2
facefeature/test_facefeature_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libglog.so.0.4.0
facefeature/test_facefeature_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libgflags.so.2.2.2
facefeature/test_facefeature_batch: facefeature/CMakeFiles/test_facefeature_batch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_facefeature_batch"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facefeature && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_facefeature_batch.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
facefeature/CMakeFiles/test_facefeature_batch.dir/build: facefeature/test_facefeature_batch

.PHONY : facefeature/CMakeFiles/test_facefeature_batch.dir/build

facefeature/CMakeFiles/test_facefeature_batch.dir/clean:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facefeature && $(CMAKE_COMMAND) -P CMakeFiles/test_facefeature_batch.dir/cmake_clean.cmake
.PHONY : facefeature/CMakeFiles/test_facefeature_batch.dir/clean

facefeature/CMakeFiles/test_facefeature_batch.dir/depend:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facefeature /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facefeature /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facefeature/CMakeFiles/test_facefeature_batch.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : facefeature/CMakeFiles/test_facefeature_batch.dir/depend

