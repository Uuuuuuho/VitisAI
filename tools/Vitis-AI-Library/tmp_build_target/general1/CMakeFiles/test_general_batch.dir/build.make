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
include general1/CMakeFiles/test_general_batch.dir/depend.make

# Include the progress variables for this target.
include general1/CMakeFiles/test_general_batch.dir/progress.make

# Include the compile flags for this target's objects.
include general1/CMakeFiles/test_general_batch.dir/flags.make

general1/CMakeFiles/test_general_batch.dir/test/test_general_batch.cpp.o: general1/CMakeFiles/test_general_batch.dir/flags.make
general1/CMakeFiles/test_general_batch.dir/test/test_general_batch.cpp.o: ../general1/test/test_general_batch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object general1/CMakeFiles/test_general_batch.dir/test/test_general_batch.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_general_batch.dir/test/test_general_batch.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/general1/test/test_general_batch.cpp

general1/CMakeFiles/test_general_batch.dir/test/test_general_batch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_general_batch.dir/test/test_general_batch.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/general1/test/test_general_batch.cpp > CMakeFiles/test_general_batch.dir/test/test_general_batch.cpp.i

general1/CMakeFiles/test_general_batch.dir/test/test_general_batch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_general_batch.dir/test/test_general_batch.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/general1/test/test_general_batch.cpp -o CMakeFiles/test_general_batch.dir/test/test_general_batch.cpp.s

# Object files for target test_general_batch
test_general_batch_OBJECTS = \
"CMakeFiles/test_general_batch.dir/test/test_general_batch.cpp.o"

# External object files for target test_general_batch
test_general_batch_EXTERNAL_OBJECTS =

general1/test_general_batch: general1/CMakeFiles/test_general_batch.dir/test/test_general_batch.cpp.o
general1/test_general_batch: general1/CMakeFiles/test_general_batch.dir/build.make
general1/test_general_batch: general1/libvitis_ai_library-general1.so.1.3.1
general1/test_general_batch: refinedet/libvitis_ai_library-refinedet.so.1.3.1
general1/test_general_batch: segmentation/libvitis_ai_library-segmentation.so.1.3.1
general1/test_general_batch: reid/libvitis_ai_library-reid.so.1.3.1
general1/test_general_batch: multitask/libvitis_ai_library-multitask.so.1.3.1
general1/test_general_batch: medicalsegmentation/libvitis_ai_library-medicalsegmentation.so.1.3.1
general1/test_general_batch: posedetect/libvitis_ai_library-posedetect.so.1.3.1
general1/test_general_batch: platenum/libvitis_ai_library-platenum.so.1.3.1
general1/test_general_batch: platedetect/libvitis_ai_library-platedetect.so.1.3.1
general1/test_general_batch: lanedetect/libvitis_ai_library-lanedetect.so.1.3.1
general1/test_general_batch: ssd/libvitis_ai_library-ssd.so.1.3.1
general1/test_general_batch: tfssd/libvitis_ai_library-tfssd.so.1.3.1
general1/test_general_batch: yolov2/libvitis_ai_library-yolov2.so.1.3.1
general1/test_general_batch: yolov3/libvitis_ai_library-yolov3.so.1.3.1
general1/test_general_batch: classification/libvitis_ai_library-classification.so.1.3.1
general1/test_general_batch: facedetectrecog/libvitis_ai_library-facedetectrecog.so.1.3.1
general1/test_general_batch: facefeature/libvitis_ai_library-facefeature.so.1.3.1
general1/test_general_batch: facelandmark/libvitis_ai_library-facelandmark.so.1.3.1
general1/test_general_batch: facedetect/libvitis_ai_library-facedetect.so.1.3.1
general1/test_general_batch: xnnpp/libxnnpp-xnnpp.so.1.3.1
general1/test_general_batch: dpu_task/libvitis_ai_library-dpu_task.so.1.3.1
general1/test_general_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_video.so.3.4.3
general1/test_general_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_highgui.so.3.4.3
general1/test_general_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_videoio.so.3.4.3
general1/test_general_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgcodecs.so.3.4.3
general1/test_general_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgproc.so.3.4.3
general1/test_general_batch: model_config/libvitis_ai_library-model_config.so.1.3.1
general1/test_general_batch: math/libvitis_ai_library-math.so.1.3.1
general1/test_general_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_core.so.3.4.3
general1/test_general_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libvart-util.so.1.3.2
general1/test_general_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libxir.so.1.3.2
general1/test_general_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libunilog.so.1.3.2
general1/test_general_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libglog.so.0.4.0
general1/test_general_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libgflags.so.2.2.2
general1/test_general_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libprotobuf.so
general1/test_general_batch: general1/CMakeFiles/test_general_batch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_general_batch"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_general_batch.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
general1/CMakeFiles/test_general_batch.dir/build: general1/test_general_batch

.PHONY : general1/CMakeFiles/test_general_batch.dir/build

general1/CMakeFiles/test_general_batch.dir/clean:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 && $(CMAKE_COMMAND) -P CMakeFiles/test_general_batch.dir/cmake_clean.cmake
.PHONY : general1/CMakeFiles/test_general_batch.dir/clean

general1/CMakeFiles/test_general_batch.dir/depend:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/general1 /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1/CMakeFiles/test_general_batch.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : general1/CMakeFiles/test_general_batch.dir/depend

