# Install script for directory: /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/retinaface

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/install/Debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvitis_ai_library-retinaface.so.1.3.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvitis_ai_library-retinaface.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/retinaface/libvitis_ai_library-retinaface.so.1.3.1"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/retinaface/libvitis_ai_library-retinaface.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvitis_ai_library-retinaface.so.1.3.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvitis_ai_library-retinaface.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/opt/xilinx/xrt/lib:/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp:/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/dpu_task:/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math:/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/model_config:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvitis_ai_library-retinaface.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvitis_ai_library-retinaface.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvitis_ai_library-retinaface.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/retinaface/libvitis_ai_library-retinaface.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvitis_ai_library-retinaface.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvitis_ai_library-retinaface.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvitis_ai_library-retinaface.so"
         OLD_RPATH "/opt/xilinx/xrt/lib:/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp:/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/dpu_task:/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math:/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/model_config:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvitis_ai_library-retinaface.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library/retinaface-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library/retinaface-targets.cmake"
         "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/retinaface/CMakeFiles/Export/share/cmake/vitis_ai_library/retinaface-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library/retinaface-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library/retinaface-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library" TYPE FILE FILES "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/retinaface/CMakeFiles/Export/share/cmake/vitis_ai_library/retinaface-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library" TYPE FILE FILES "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/retinaface/CMakeFiles/Export/share/cmake/vitis_ai_library/retinaface-targets-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vitis/ai" TYPE FILE FILES "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/retinaface/include/vitis/ai/retinaface.hpp")
endif()

