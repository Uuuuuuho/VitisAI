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
include facedetect/CMakeFiles/facedetect.dir/depend.make

# Include the progress variables for this target.
include facedetect/CMakeFiles/facedetect.dir/progress.make

# Include the compile flags for this target's objects.
include facedetect/CMakeFiles/facedetect.dir/flags.make

facedetect/CMakeFiles/facedetect.dir/src/facedetect.cpp.o: facedetect/CMakeFiles/facedetect.dir/flags.make
facedetect/CMakeFiles/facedetect.dir/src/facedetect.cpp.o: ../facedetect/src/facedetect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object facedetect/CMakeFiles/facedetect.dir/src/facedetect.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/facedetect.dir/src/facedetect.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facedetect/src/facedetect.cpp

facedetect/CMakeFiles/facedetect.dir/src/facedetect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/facedetect.dir/src/facedetect.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facedetect/src/facedetect.cpp > CMakeFiles/facedetect.dir/src/facedetect.cpp.i

facedetect/CMakeFiles/facedetect.dir/src/facedetect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/facedetect.dir/src/facedetect.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facedetect/src/facedetect.cpp -o CMakeFiles/facedetect.dir/src/facedetect.cpp.s

facedetect/CMakeFiles/facedetect.dir/src/detect_imp.cpp.o: facedetect/CMakeFiles/facedetect.dir/flags.make
facedetect/CMakeFiles/facedetect.dir/src/detect_imp.cpp.o: ../facedetect/src/detect_imp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object facedetect/CMakeFiles/facedetect.dir/src/detect_imp.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/facedetect.dir/src/detect_imp.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facedetect/src/detect_imp.cpp

facedetect/CMakeFiles/facedetect.dir/src/detect_imp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/facedetect.dir/src/detect_imp.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facedetect/src/detect_imp.cpp > CMakeFiles/facedetect.dir/src/detect_imp.cpp.i

facedetect/CMakeFiles/facedetect.dir/src/detect_imp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/facedetect.dir/src/detect_imp.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facedetect/src/detect_imp.cpp -o CMakeFiles/facedetect.dir/src/detect_imp.cpp.s

facedetect/CMakeFiles/facedetect.dir/version.c.o: facedetect/CMakeFiles/facedetect.dir/flags.make
facedetect/CMakeFiles/facedetect.dir/version.c.o: facedetect/version.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object facedetect/CMakeFiles/facedetect.dir/version.c.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/facedetect.dir/version.c.o   -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect/version.c

facedetect/CMakeFiles/facedetect.dir/version.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/facedetect.dir/version.c.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect/version.c > CMakeFiles/facedetect.dir/version.c.i

facedetect/CMakeFiles/facedetect.dir/version.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/facedetect.dir/version.c.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect/version.c -o CMakeFiles/facedetect.dir/version.c.s

# Object files for target facedetect
facedetect_OBJECTS = \
"CMakeFiles/facedetect.dir/src/facedetect.cpp.o" \
"CMakeFiles/facedetect.dir/src/detect_imp.cpp.o" \
"CMakeFiles/facedetect.dir/version.c.o"

# External object files for target facedetect
facedetect_EXTERNAL_OBJECTS =

facedetect/libvitis_ai_library-facedetect.so.1.3.1: facedetect/CMakeFiles/facedetect.dir/src/facedetect.cpp.o
facedetect/libvitis_ai_library-facedetect.so.1.3.1: facedetect/CMakeFiles/facedetect.dir/src/detect_imp.cpp.o
facedetect/libvitis_ai_library-facedetect.so.1.3.1: facedetect/CMakeFiles/facedetect.dir/version.c.o
facedetect/libvitis_ai_library-facedetect.so.1.3.1: facedetect/CMakeFiles/facedetect.dir/build.make
facedetect/libvitis_ai_library-facedetect.so.1.3.1: xnnpp/libxnnpp-xnnpp.so.1.3.1
facedetect/libvitis_ai_library-facedetect.so.1.3.1: dpu_task/libvitis_ai_library-dpu_task.so.1.3.1
facedetect/libvitis_ai_library-facedetect.so.1.3.1: math/libvitis_ai_library-math.so.1.3.1
facedetect/libvitis_ai_library-facedetect.so.1.3.1: model_config/libvitis_ai_library-model_config.so.1.3.1
facedetect/libvitis_ai_library-facedetect.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libprotobuf.so
facedetect/libvitis_ai_library-facedetect.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_video.so.3.4.3
facedetect/libvitis_ai_library-facedetect.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_highgui.so.3.4.3
facedetect/libvitis_ai_library-facedetect.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_videoio.so.3.4.3
facedetect/libvitis_ai_library-facedetect.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgcodecs.so.3.4.3
facedetect/libvitis_ai_library-facedetect.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgproc.so.3.4.3
facedetect/libvitis_ai_library-facedetect.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_core.so.3.4.3
facedetect/libvitis_ai_library-facedetect.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libvart-util.so.1.3.2
facedetect/libvitis_ai_library-facedetect.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libxir.so.1.3.2
facedetect/libvitis_ai_library-facedetect.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libunilog.so.1.3.2
facedetect/libvitis_ai_library-facedetect.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libglog.so.0.4.0
facedetect/libvitis_ai_library-facedetect.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libgflags.so.2.2.2
facedetect/libvitis_ai_library-facedetect.so.1.3.1: facedetect/CMakeFiles/facedetect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libvitis_ai_library-facedetect.so"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/facedetect.dir/link.txt --verbose=$(VERBOSE)
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect && $(CMAKE_COMMAND) -E cmake_symlink_library libvitis_ai_library-facedetect.so.1.3.1 libvitis_ai_library-facedetect.so.1 libvitis_ai_library-facedetect.so

facedetect/libvitis_ai_library-facedetect.so.1: facedetect/libvitis_ai_library-facedetect.so.1.3.1
	@$(CMAKE_COMMAND) -E touch_nocreate facedetect/libvitis_ai_library-facedetect.so.1

facedetect/libvitis_ai_library-facedetect.so: facedetect/libvitis_ai_library-facedetect.so.1.3.1
	@$(CMAKE_COMMAND) -E touch_nocreate facedetect/libvitis_ai_library-facedetect.so

# Rule to build all files generated by this target.
facedetect/CMakeFiles/facedetect.dir/build: facedetect/libvitis_ai_library-facedetect.so

.PHONY : facedetect/CMakeFiles/facedetect.dir/build

facedetect/CMakeFiles/facedetect.dir/clean:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect && $(CMAKE_COMMAND) -P CMakeFiles/facedetect.dir/cmake_clean.cmake
.PHONY : facedetect/CMakeFiles/facedetect.dir/clean

facedetect/CMakeFiles/facedetect.dir/depend:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facedetect /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect/CMakeFiles/facedetect.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : facedetect/CMakeFiles/facedetect.dir/depend

