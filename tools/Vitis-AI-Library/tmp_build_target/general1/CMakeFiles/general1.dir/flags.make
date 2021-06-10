# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# compile C with /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc
# compile CXX with /home/uho/downloaded/peta_sdk/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++
C_FLAGS =  -O2 -pipe -g -feliminate-unused-debug-types  -Wall -Werror -Wall -Werror -g -fPIC   -std=gnu99

C_DEFINES = -DGFLAGS_IS_A_DLL=0 -DGOOGLE_GLOG_DLL_DECL="" -DGOOGLE_GLOG_DLL_DECL_FOR_UNITTESTS="" -Dgeneral1_EXPORTS

C_INCLUDES = -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/benchmark/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/general1/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/model_config/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/model_config -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/refinedet/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/refinedet -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/math/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/dpu_task/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facefeature/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facefeature -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/segmentation/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/segmentation -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reid/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reid -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/multitask/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/multitask -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/medicalsegmentation/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/medicalsegmentation -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/posedetect/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/posedetect -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/platenum/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/platenum -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/platedetect/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/platedetect -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facelandmark/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facelandmark -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/lanedetect/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/lanedetect -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/ssd/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/ssd -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tfssd/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov2/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov2 -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov3/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/classification/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/classification -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facedetect/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facedetectrecog/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetectrecog -isystem /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/include/opencv 

CXX_FLAGS =  -O2 -pipe -g -feliminate-unused-debug-types  -std=gnu++17 -Wall -Werror -std=gnu++17 -Wall -Werror -g -Wall -Werror -ggdb -O0 -fno-inline -Wno-pessimizing-move -Wall -Werror -ggdb -O0 -fno-inline -Wno-pessimizing-move -fPIC   -std=gnu++17

CXX_DEFINES = -DGFLAGS_IS_A_DLL=0 -DGOOGLE_GLOG_DLL_DECL="" -DGOOGLE_GLOG_DLL_DECL_FOR_UNITTESTS="" -Dgeneral1_EXPORTS

CXX_INCLUDES = -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/benchmark/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/general1/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/general1 -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/model_config/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/model_config -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/refinedet/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/refinedet -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/xnnpp/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/xnnpp -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/math/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/math -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/dpu_task/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facefeature/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facefeature -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/segmentation/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/segmentation -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/reid/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/reid -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/multitask/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/multitask -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/medicalsegmentation/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/medicalsegmentation -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/posedetect/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/posedetect -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/platenum/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/platenum -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/platedetect/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/platedetect -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facelandmark/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facelandmark -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/lanedetect/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/lanedetect -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/ssd/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/ssd -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tfssd/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/tfssd -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov2/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov2 -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/yolov3/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/yolov3 -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/classification/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/classification -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facedetect/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetect -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/facedetectrecog/include -I/home/uho/workspace/Vitis-AI/tools/Vitis-AI-Library/tmp_build_target/facedetectrecog -isystem /home/uho/downloaded/peta_sdk/sysroots/aarch64-xilinx-linux/usr/include/opencv 

