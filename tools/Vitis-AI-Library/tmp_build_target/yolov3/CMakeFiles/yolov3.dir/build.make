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
include yolov3/CMakeFiles/yolov3.dir/depend.make

# Include the progress variables for this target.
include yolov3/CMakeFiles/yolov3.dir/progress.make

# Include the compile flags for this target's objects.
include yolov3/CMakeFiles/yolov3.dir/flags.make

yolov3/CMakeFiles/yolov3.dir/src/yolov3.cpp.o: yolov3/CMakeFiles/yolov3.dir/flags.make
yolov3/CMakeFiles/yolov3.dir/src/yolov3.cpp.o: ../yolov3/src/yolov3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object yolov3/CMakeFiles/yolov3.dir/src/yolov3.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/yolov3.dir/src/yolov3.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov3/src/yolov3.cpp

yolov3/CMakeFiles/yolov3.dir/src/yolov3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yolov3.dir/src/yolov3.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov3/src/yolov3.cpp > CMakeFiles/yolov3.dir/src/yolov3.cpp.i

yolov3/CMakeFiles/yolov3.dir/src/yolov3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yolov3.dir/src/yolov3.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov3/src/yolov3.cpp -o CMakeFiles/yolov3.dir/src/yolov3.cpp.s

yolov3/CMakeFiles/yolov3.dir/src/yolov3_imp.cpp.o: yolov3/CMakeFiles/yolov3.dir/flags.make
yolov3/CMakeFiles/yolov3.dir/src/yolov3_imp.cpp.o: ../yolov3/src/yolov3_imp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object yolov3/CMakeFiles/yolov3.dir/src/yolov3_imp.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/yolov3.dir/src/yolov3_imp.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov3/src/yolov3_imp.cpp

yolov3/CMakeFiles/yolov3.dir/src/yolov3_imp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yolov3.dir/src/yolov3_imp.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov3/src/yolov3_imp.cpp > CMakeFiles/yolov3.dir/src/yolov3_imp.cpp.i

yolov3/CMakeFiles/yolov3.dir/src/yolov3_imp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yolov3.dir/src/yolov3_imp.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov3/src/yolov3_imp.cpp -o CMakeFiles/yolov3.dir/src/yolov3_imp.cpp.s

yolov3/CMakeFiles/yolov3.dir/src/utils.cpp.o: yolov3/CMakeFiles/yolov3.dir/flags.make
yolov3/CMakeFiles/yolov3.dir/src/utils.cpp.o: ../yolov3/src/utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object yolov3/CMakeFiles/yolov3.dir/src/utils.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/yolov3.dir/src/utils.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov3/src/utils.cpp

yolov3/CMakeFiles/yolov3.dir/src/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yolov3.dir/src/utils.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov3/src/utils.cpp > CMakeFiles/yolov3.dir/src/utils.cpp.i

yolov3/CMakeFiles/yolov3.dir/src/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yolov3.dir/src/utils.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov3/src/utils.cpp -o CMakeFiles/yolov3.dir/src/utils.cpp.s

yolov3/CMakeFiles/yolov3.dir/version.c.o: yolov3/CMakeFiles/yolov3.dir/flags.make
yolov3/CMakeFiles/yolov3.dir/version.c.o: yolov3/version.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object yolov3/CMakeFiles/yolov3.dir/version.c.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/yolov3.dir/version.c.o   -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3/version.c

yolov3/CMakeFiles/yolov3.dir/version.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/yolov3.dir/version.c.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3/version.c > CMakeFiles/yolov3.dir/version.c.i

yolov3/CMakeFiles/yolov3.dir/version.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/yolov3.dir/version.c.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3/version.c -o CMakeFiles/yolov3.dir/version.c.s

# Object files for target yolov3
yolov3_OBJECTS = \
"CMakeFiles/yolov3.dir/src/yolov3.cpp.o" \
"CMakeFiles/yolov3.dir/src/yolov3_imp.cpp.o" \
"CMakeFiles/yolov3.dir/src/utils.cpp.o" \
"CMakeFiles/yolov3.dir/version.c.o"

# External object files for target yolov3
yolov3_EXTERNAL_OBJECTS =

yolov3/libvitis_ai_library-yolov3.so.1.3.1: yolov3/CMakeFiles/yolov3.dir/src/yolov3.cpp.o
yolov3/libvitis_ai_library-yolov3.so.1.3.1: yolov3/CMakeFiles/yolov3.dir/src/yolov3_imp.cpp.o
yolov3/libvitis_ai_library-yolov3.so.1.3.1: yolov3/CMakeFiles/yolov3.dir/src/utils.cpp.o
yolov3/libvitis_ai_library-yolov3.so.1.3.1: yolov3/CMakeFiles/yolov3.dir/version.c.o
yolov3/libvitis_ai_library-yolov3.so.1.3.1: yolov3/CMakeFiles/yolov3.dir/build.make
yolov3/libvitis_ai_library-yolov3.so.1.3.1: xnnpp/libxnnpp-xnnpp.so.1.3.1
yolov3/libvitis_ai_library-yolov3.so.1.3.1: dpu_task/libvitis_ai_library-dpu_task.so.1.3.1
yolov3/libvitis_ai_library-yolov3.so.1.3.1: math/libvitis_ai_library-math.so.1.3.1
yolov3/libvitis_ai_library-yolov3.so.1.3.1: model_config/libvitis_ai_library-model_config.so.1.3.1
yolov3/libvitis_ai_library-yolov3.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libprotobuf.so
yolov3/libvitis_ai_library-yolov3.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_video.so.3.4.3
yolov3/libvitis_ai_library-yolov3.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_highgui.so.3.4.3
yolov3/libvitis_ai_library-yolov3.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_videoio.so.3.4.3
yolov3/libvitis_ai_library-yolov3.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgcodecs.so.3.4.3
yolov3/libvitis_ai_library-yolov3.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgproc.so.3.4.3
yolov3/libvitis_ai_library-yolov3.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_core.so.3.4.3
yolov3/libvitis_ai_library-yolov3.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libvart-util.so.1.3.2
yolov3/libvitis_ai_library-yolov3.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libxir.so.1.3.2
yolov3/libvitis_ai_library-yolov3.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libunilog.so.1.3.2
yolov3/libvitis_ai_library-yolov3.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libglog.so.0.4.0
yolov3/libvitis_ai_library-yolov3.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libgflags.so.2.2.2
yolov3/libvitis_ai_library-yolov3.so.1.3.1: yolov3/CMakeFiles/yolov3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library libvitis_ai_library-yolov3.so"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/yolov3.dir/link.txt --verbose=$(VERBOSE)
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && $(CMAKE_COMMAND) -E cmake_symlink_library libvitis_ai_library-yolov3.so.1.3.1 libvitis_ai_library-yolov3.so.1 libvitis_ai_library-yolov3.so

yolov3/libvitis_ai_library-yolov3.so.1: yolov3/libvitis_ai_library-yolov3.so.1.3.1
	@$(CMAKE_COMMAND) -E touch_nocreate yolov3/libvitis_ai_library-yolov3.so.1

yolov3/libvitis_ai_library-yolov3.so: yolov3/libvitis_ai_library-yolov3.so.1.3.1
	@$(CMAKE_COMMAND) -E touch_nocreate yolov3/libvitis_ai_library-yolov3.so

# Rule to build all files generated by this target.
yolov3/CMakeFiles/yolov3.dir/build: yolov3/libvitis_ai_library-yolov3.so

.PHONY : yolov3/CMakeFiles/yolov3.dir/build

yolov3/CMakeFiles/yolov3.dir/clean:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 && $(CMAKE_COMMAND) -P CMakeFiles/yolov3.dir/cmake_clean.cmake
.PHONY : yolov3/CMakeFiles/yolov3.dir/clean

yolov3/CMakeFiles/yolov3.dir/depend:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov3 /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3/CMakeFiles/yolov3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : yolov3/CMakeFiles/yolov3.dir/depend

