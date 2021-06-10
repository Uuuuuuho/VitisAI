# Install script for directory: /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library" TYPE FILE FILES
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/vitis_ai_library-config.cmake"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/vitis_ai_library-config-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/usefultools/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/benchmark/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/model_config/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/runner_helper/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/dpu_task/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/cpu_task/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/classification/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facefeature/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/lanedetect/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov2/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facelandmark/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facequality5pt/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/ssd/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/segmentation/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/covid19segmentation/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/3Dsegmentation/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/refinedet/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/openpose/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/hourglass/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/posedetect/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reid/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reidtracker/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/multitask/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/platedetect/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/platenum/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/platerecog/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/carplaterecog/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/medicalsegmentation/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/medicaldetection/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facerecog/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetectrecog/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/pointpillars/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/retinaface/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/cifar10classification/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/mnistclassification/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/medicalsegcell/cmake_install.cmake")
  include("/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
