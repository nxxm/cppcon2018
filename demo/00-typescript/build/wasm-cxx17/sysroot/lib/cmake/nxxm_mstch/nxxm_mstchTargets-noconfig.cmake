#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "nxxm_mstch::mstch" for configuration ""
set_property(TARGET nxxm_mstch::mstch APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(nxxm_mstch::mstch PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmstch.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS nxxm_mstch::mstch )
list(APPEND _IMPORT_CHECK_FILES_FOR_nxxm_mstch::mstch "${_IMPORT_PREFIX}/lib/libmstch.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
