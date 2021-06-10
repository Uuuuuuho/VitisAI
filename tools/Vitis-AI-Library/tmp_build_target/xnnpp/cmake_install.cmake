# Install script for directory: /home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxnnpp-xnnpp.so.1.3.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxnnpp-xnnpp.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/libxnnpp-xnnpp.so.1.3.1"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/libxnnpp-xnnpp.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxnnpp-xnnpp.so.1.3.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxnnpp-xnnpp.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/opt/xilinx/xrt/lib:/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math:/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/model_config:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxnnpp-xnnpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxnnpp-xnnpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxnnpp-xnnpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/libxnnpp-xnnpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxnnpp-xnnpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxnnpp-xnnpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxnnpp-xnnpp.so"
         OLD_RPATH "/opt/xilinx/xrt/lib:/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math:/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/model_config:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxnnpp-xnnpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library/xnnpp-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library/xnnpp-targets.cmake"
         "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/CMakeFiles/Export/share/cmake/vitis_ai_library/xnnpp-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library/xnnpp-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library/xnnpp-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library" TYPE FILE FILES "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/CMakeFiles/Export/share/cmake/vitis_ai_library/xnnpp-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/vitis_ai_library" TYPE FILE FILES "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/CMakeFiles/Export/share/cmake/vitis_ai_library/xnnpp-targets-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vitis/ai/nnpp" TYPE FILE FILES
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/classification.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/openpose.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/multitask.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/platedetect.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/platenum.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/facedetect.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/facefeature.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/facequality5pt.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/facelandmark.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/segmentation.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/yolov2.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/yolov3.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/posedetect.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/refinedet.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/lanedetect.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/ssd.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/tfssd.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/reid.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/medicalsegmentation.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/medicaldetection.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/retinaface.hpp"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/vitis/ai/nnpp/hourglass.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/object_detection/protos" TYPE FILE FILES
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/anchor_generator.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/grid_anchor_generator.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/mean_stddev_box_coder.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/region_similarity_calculator.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/argmax_matcher.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/hyperparams.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/model.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/square_box_coder.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/bipartite_matcher.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/eval.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/image_resizer.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/multiscale_anchor_generator.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/ssd_anchor_generator.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/box_coder.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/faster_rcnn_box_coder.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/input_reader.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/optimizer.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/ssd.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/box_predictor.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/faster_rcnn.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/keypoint_box_coder.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/pipeline.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/string_int_label_map.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/calibration.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/flexible_grid_anchor_generator.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/losses.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/post_processing.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/graph_rewriter.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/matcher.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/preprocessor.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include/object_detection/protos/train.proto"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/anchor_generator.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/grid_anchor_generator.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/mean_stddev_box_coder.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/region_similarity_calculator.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/argmax_matcher.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/hyperparams.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/model.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/square_box_coder.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/bipartite_matcher.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/eval.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/image_resizer.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/multiscale_anchor_generator.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/ssd_anchor_generator.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/box_coder.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/faster_rcnn_box_coder.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/input_reader.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/optimizer.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/ssd.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/box_predictor.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/faster_rcnn.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/keypoint_box_coder.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/pipeline.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/string_int_label_map.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/calibration.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/flexible_grid_anchor_generator.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/losses.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/post_processing.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/graph_rewriter.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/matcher.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/preprocessor.pb.h"
    "/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp/object_detection/protos/train.pb.h"
    )
endif()

