#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "vitis_ai_library::math" for configuration "Debug"
set_property(TARGET vitis_ai_library::math APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(vitis_ai_library::math PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "glog::glog;vart::util;vart::dpu-controller"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libvitis_ai_library-math.so.1.3.1"
  IMPORTED_SONAME_DEBUG "libvitis_ai_library-math.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS vitis_ai_library::math )
list(APPEND _IMPORT_CHECK_FILES_FOR_vitis_ai_library::math "${_IMPORT_PREFIX}/lib/libvitis_ai_library-math.so.1.3.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
