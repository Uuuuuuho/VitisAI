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
include general1/CMakeFiles/test_general.dir/depend.make

# Include the progress variables for this target.
include general1/CMakeFiles/test_general.dir/progress.make

# Include the compile flags for this target's objects.
include general1/CMakeFiles/test_general.dir/flags.make

general1/CMakeFiles/test_general.dir/test/test_general.cpp.o: general1/CMakeFiles/test_general.dir/flags.make
general1/CMakeFiles/test_general.dir/test/test_general.cpp.o: ../general1/test/test_general.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object general1/CMakeFiles/test_general.dir/test/test_general.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_general.dir/test/test_general.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/general1/test/test_general.cpp

general1/CMakeFiles/test_general.dir/test/test_general.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_general.dir/test/test_general.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/general1/test/test_general.cpp > CMakeFiles/test_general.dir/test/test_general.cpp.i

general1/CMakeFiles/test_general.dir/test/test_general.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_general.dir/test/test_general.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/general1/test/test_general.cpp -o CMakeFiles/test_general.dir/test/test_general.cpp.s

# Object files for target test_general
test_general_OBJECTS = \
"CMakeFiles/test_general.dir/test/test_general.cpp.o"

# External object files for target test_general
test_general_EXTERNAL_OBJECTS =

general1/test_general: general1/CMakeFiles/test_general.dir/test/test_general.cpp.o
general1/test_general: general1/CMakeFiles/test_general.dir/build.make
general1/test_general: general1/libvitis_ai_library-general1.so.1.3.1
general1/test_general: refinedet/libvitis_ai_library-refinedet.so.1.3.1
general1/test_general: segmentation/libvitis_ai_library-segmentation.so.1.3.1
general1/test_general: reid/libvitis_ai_library-reid.so.1.3.1
general1/test_general: multitask/libvitis_ai_library-multitask.so.1.3.1
general1/test_general: medicalsegmentation/libvitis_ai_library-medicalsegmentation.so.1.3.1
general1/test_general: posedetect/libvitis_ai_library-posedetect.so.1.3.1
general1/test_general: platenum/libvitis_ai_library-platenum.so.1.3.1
general1/test_general: platedetect/libvitis_ai_library-platedetect.so.1.3.1
general1/test_general: lanedetect/libvitis_ai_library-lanedetect.so.1.3.1
general1/test_general: ssd/libvitis_ai_library-ssd.so.1.3.1
general1/test_general: tfssd/libvitis_ai_library-tfssd.so.1.3.1
general1/test_general: yolov2/libvitis_ai_library-yolov2.so.1.3.1
general1/test_general: yolov3/libvitis_ai_library-yolov3.so.1.3.1
general1/test_general: classification/libvitis_ai_library-classification.so.1.3.1
general1/test_general: facedetectrecog/libvitis_ai_library-facedetectrecog.so.1.3.1
general1/test_general: facefeature/libvitis_ai_library-facefeature.so.1.3.1
general1/test_general: facelandmark/libvitis_ai_library-facelandmark.so.1.3.1
general1/test_general: facedetect/libvitis_ai_library-facedetect.so.1.3.1
general1/test_general: xnnpp/libxnnpp-xnnpp.so.1.3.1
general1/test_general: dpu_task/libvitis_ai_library-dpu_task.so.1.3.1
general1/test_general: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_video.so.3.4.3
general1/test_general: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_highgui.so.3.4.3
general1/test_general: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_videoio.so.3.4.3
general1/test_general: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgcodecs.so.3.4.3
general1/test_general: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgproc.so.3.4.3
general1/test_general: model_config/libvitis_ai_library-model_config.so.1.3.1
general1/test_general: math/libvitis_ai_library-math.so.1.3.1
general1/test_general: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_core.so.3.4.3
general1/test_general: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libvart-util.so.1.3.2
general1/test_general: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libxir.so.1.3.2
general1/test_general: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libunilog.so.1.3.2
general1/test_general: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libglog.so.0.4.0
general1/test_general: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libgflags.so.2.2.2
general1/test_general: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libprotobuf.so
general1/test_general: general1/CMakeFiles/test_general.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_general"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_general.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
general1/CMakeFiles/test_general.dir/build: general1/test_general

.PHONY : general1/CMakeFiles/test_general.dir/build

general1/CMakeFiles/test_general.dir/clean:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 && $(CMAKE_COMMAND) -P CMakeFiles/test_general.dir/cmake_clean.cmake
.PHONY : general1/CMakeFiles/test_general.dir/clean

general1/CMakeFiles/test_general.dir/depend:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/general1 /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1/CMakeFiles/test_general.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : general1/CMakeFiles/test_general.dir/depend

