#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "vitis_ai_library::platerecog" for configuration "Debug"
set_property(TARGET vitis_ai_library::platerecog APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(vitis_ai_library::platerecog PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libvitis_ai_library-platerecog.so.1.3.1"
  IMPORTED_SONAME_DEBUG "libvitis_ai_library-platerecog.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS vitis_ai_library::platerecog )
list(APPEND _IMPORT_CHECK_FILES_FOR_vitis_ai_library::platerecog "${_IMPORT_PREFIX}/lib/libvitis_ai_library-platerecog.so.1.3.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
