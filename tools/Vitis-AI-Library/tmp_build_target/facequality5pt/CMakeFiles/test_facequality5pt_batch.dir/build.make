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
include facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/depend.make

# Include the progress variables for this target.
include facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/progress.make

# Include the compile flags for this target's objects.
include facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/flags.make

facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/test/test_facequality5pt_batch.cpp.o: facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/flags.make
facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/test/test_facequality5pt_batch.cpp.o: ../facequality5pt/test/test_facequality5pt_batch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/test/test_facequality5pt_batch.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facequality5pt && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_facequality5pt_batch.dir/test/test_facequality5pt_batch.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facequality5pt/test/test_facequality5pt_batch.cpp

facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/test/test_facequality5pt_batch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_facequality5pt_batch.dir/test/test_facequality5pt_batch.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facequality5pt && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facequality5pt/test/test_facequality5pt_batch.cpp > CMakeFiles/test_facequality5pt_batch.dir/test/test_facequality5pt_batch.cpp.i

facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/test/test_facequality5pt_batch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_facequality5pt_batch.dir/test/test_facequality5pt_batch.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facequality5pt && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facequality5pt/test/test_facequality5pt_batch.cpp -o CMakeFiles/test_facequality5pt_batch.dir/test/test_facequality5pt_batch.cpp.s

# Object files for target test_facequality5pt_batch
test_facequality5pt_batch_OBJECTS = \
"CMakeFiles/test_facequality5pt_batch.dir/test/test_facequality5pt_batch.cpp.o"

# External object files for target test_facequality5pt_batch
test_facequality5pt_batch_EXTERNAL_OBJECTS =

facequality5pt/test_facequality5pt_batch: facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/test/test_facequality5pt_batch.cpp.o
facequality5pt/test_facequality5pt_batch: facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/build.make
facequality5pt/test_facequality5pt_batch: facequality5pt/libvitis_ai_library-facequality5pt.so.1.3.1
facequality5pt/test_facequality5pt_batch: xnnpp/libxnnpp-xnnpp.so.1.3.1
facequality5pt/test_facequality5pt_batch: dpu_task/libvitis_ai_library-dpu_task.so.1.3.1
facequality5pt/test_facequality5pt_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_video.so.3.4.3
facequality5pt/test_facequality5pt_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_highgui.so.3.4.3
facequality5pt/test_facequality5pt_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_videoio.so.3.4.3
facequality5pt/test_facequality5pt_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgcodecs.so.3.4.3
facequality5pt/test_facequality5pt_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgproc.so.3.4.3
facequality5pt/test_facequality5pt_batch: math/libvitis_ai_library-math.so.1.3.1
facequality5pt/test_facequality5pt_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_core.so.3.4.3
facequality5pt/test_facequality5pt_batch: model_config/libvitis_ai_library-model_config.so.1.3.1
facequality5pt/test_facequality5pt_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libprotobuf.so
facequality5pt/test_facequality5pt_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libvart-util.so.1.3.2
facequality5pt/test_facequality5pt_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libxir.so.1.3.2
facequality5pt/test_facequality5pt_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libunilog.so.1.3.2
facequality5pt/test_facequality5pt_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libglog.so.0.4.0
facequality5pt/test_facequality5pt_batch: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libgflags.so.2.2.2
facequality5pt/test_facequality5pt_batch: facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_facequality5pt_batch"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facequality5pt && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_facequality5pt_batch.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/build: facequality5pt/test_facequality5pt_batch

.PHONY : facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/build

facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/clean:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facequality5pt && $(CMAKE_COMMAND) -P CMakeFiles/test_facequality5pt_batch.dir/cmake_clean.cmake
.PHONY : facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/clean

facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/depend:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facequality5pt /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facequality5pt /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : facequality5pt/CMakeFiles/test_facequality5pt_batch.dir/depend

