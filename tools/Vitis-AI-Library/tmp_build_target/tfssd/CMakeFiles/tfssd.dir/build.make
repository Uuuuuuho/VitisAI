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
include tfssd/CMakeFiles/tfssd.dir/depend.make

# Include the progress variables for this target.
include tfssd/CMakeFiles/tfssd.dir/progress.make

# Include the compile flags for this target's objects.
include tfssd/CMakeFiles/tfssd.dir/flags.make

tfssd/CMakeFiles/tfssd.dir/src/tfssd.cpp.o: tfssd/CMakeFiles/tfssd.dir/flags.make
tfssd/CMakeFiles/tfssd.dir/src/tfssd.cpp.o: ../tfssd/src/tfssd.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tfssd/CMakeFiles/tfssd.dir/src/tfssd.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tfssd.dir/src/tfssd.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tfssd/src/tfssd.cpp

tfssd/CMakeFiles/tfssd.dir/src/tfssd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tfssd.dir/src/tfssd.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tfssd/src/tfssd.cpp > CMakeFiles/tfssd.dir/src/tfssd.cpp.i

tfssd/CMakeFiles/tfssd.dir/src/tfssd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tfssd.dir/src/tfssd.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tfssd/src/tfssd.cpp -o CMakeFiles/tfssd.dir/src/tfssd.cpp.s

tfssd/CMakeFiles/tfssd.dir/src/tfssd_imp.cpp.o: tfssd/CMakeFiles/tfssd.dir/flags.make
tfssd/CMakeFiles/tfssd.dir/src/tfssd_imp.cpp.o: ../tfssd/src/tfssd_imp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tfssd/CMakeFiles/tfssd.dir/src/tfssd_imp.cpp.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tfssd.dir/src/tfssd_imp.cpp.o -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tfssd/src/tfssd_imp.cpp

tfssd/CMakeFiles/tfssd.dir/src/tfssd_imp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tfssd.dir/src/tfssd_imp.cpp.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tfssd/src/tfssd_imp.cpp > CMakeFiles/tfssd.dir/src/tfssd_imp.cpp.i

tfssd/CMakeFiles/tfssd.dir/src/tfssd_imp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tfssd.dir/src/tfssd_imp.cpp.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tfssd/src/tfssd_imp.cpp -o CMakeFiles/tfssd.dir/src/tfssd_imp.cpp.s

tfssd/CMakeFiles/tfssd.dir/version.c.o: tfssd/CMakeFiles/tfssd.dir/flags.make
tfssd/CMakeFiles/tfssd.dir/version.c.o: tfssd/version.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object tfssd/CMakeFiles/tfssd.dir/version.c.o"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tfssd.dir/version.c.o   -c /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd/version.c

tfssd/CMakeFiles/tfssd.dir/version.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tfssd.dir/version.c.i"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd/version.c > CMakeFiles/tfssd.dir/version.c.i

tfssd/CMakeFiles/tfssd.dir/version.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tfssd.dir/version.c.s"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd && /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc   -march=armv8-a+crc -mtune=cortex-a72.cortex-a53 --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux --sysroot=/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd/version.c -o CMakeFiles/tfssd.dir/version.c.s

# Object files for target tfssd
tfssd_OBJECTS = \
"CMakeFiles/tfssd.dir/src/tfssd.cpp.o" \
"CMakeFiles/tfssd.dir/src/tfssd_imp.cpp.o" \
"CMakeFiles/tfssd.dir/version.c.o"

# External object files for target tfssd
tfssd_EXTERNAL_OBJECTS =

tfssd/libvitis_ai_library-tfssd.so.1.3.1: tfssd/CMakeFiles/tfssd.dir/src/tfssd.cpp.o
tfssd/libvitis_ai_library-tfssd.so.1.3.1: tfssd/CMakeFiles/tfssd.dir/src/tfssd_imp.cpp.o
tfssd/libvitis_ai_library-tfssd.so.1.3.1: tfssd/CMakeFiles/tfssd.dir/version.c.o
tfssd/libvitis_ai_library-tfssd.so.1.3.1: tfssd/CMakeFiles/tfssd.dir/build.make
tfssd/libvitis_ai_library-tfssd.so.1.3.1: xnnpp/libxnnpp-xnnpp.so.1.3.1
tfssd/libvitis_ai_library-tfssd.so.1.3.1: dpu_task/libvitis_ai_library-dpu_task.so.1.3.1
tfssd/libvitis_ai_library-tfssd.so.1.3.1: math/libvitis_ai_library-math.so.1.3.1
tfssd/libvitis_ai_library-tfssd.so.1.3.1: model_config/libvitis_ai_library-model_config.so.1.3.1
tfssd/libvitis_ai_library-tfssd.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libprotobuf.so
tfssd/libvitis_ai_library-tfssd.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_video.so.3.4.3
tfssd/libvitis_ai_library-tfssd.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_highgui.so.3.4.3
tfssd/libvitis_ai_library-tfssd.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_videoio.so.3.4.3
tfssd/libvitis_ai_library-tfssd.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgcodecs.so.3.4.3
tfssd/libvitis_ai_library-tfssd.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_imgproc.so.3.4.3
tfssd/libvitis_ai_library-tfssd.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libopencv_core.so.3.4.3
tfssd/libvitis_ai_library-tfssd.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libvart-util.so.1.3.2
tfssd/libvitis_ai_library-tfssd.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libxir.so.1.3.2
tfssd/libvitis_ai_library-tfssd.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libunilog.so.1.3.2
tfssd/libvitis_ai_library-tfssd.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libglog.so.0.4.0
tfssd/libvitis_ai_library-tfssd.so.1.3.1: /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/lib/libgflags.so.2.2.2
tfssd/libvitis_ai_library-tfssd.so.1.3.1: tfssd/CMakeFiles/tfssd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libvitis_ai_library-tfssd.so"
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tfssd.dir/link.txt --verbose=$(VERBOSE)
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd && $(CMAKE_COMMAND) -E cmake_symlink_library libvitis_ai_library-tfssd.so.1.3.1 libvitis_ai_library-tfssd.so.1 libvitis_ai_library-tfssd.so

tfssd/libvitis_ai_library-tfssd.so.1: tfssd/libvitis_ai_library-tfssd.so.1.3.1
	@$(CMAKE_COMMAND) -E touch_nocreate tfssd/libvitis_ai_library-tfssd.so.1

tfssd/libvitis_ai_library-tfssd.so: tfssd/libvitis_ai_library-tfssd.so.1.3.1
	@$(CMAKE_COMMAND) -E touch_nocreate tfssd/libvitis_ai_library-tfssd.so

# Rule to build all files generated by this target.
tfssd/CMakeFiles/tfssd.dir/build: tfssd/libvitis_ai_library-tfssd.so

.PHONY : tfssd/CMakeFiles/tfssd.dir/build

tfssd/CMakeFiles/tfssd.dir/clean:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd && $(CMAKE_COMMAND) -P CMakeFiles/tfssd.dir/cmake_clean.cmake
.PHONY : tfssd/CMakeFiles/tfssd.dir/clean

tfssd/CMakeFiles/tfssd.dir/depend:
	cd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tfssd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd/CMakeFiles/tfssd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tfssd/CMakeFiles/tfssd.dir/depend

