#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "fmtlib_fmt::fmt" for configuration ""
set_property(TARGET fmtlib_fmt::fmt APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fmtlib_fmt::fmt PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libfmt.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS fmtlib_fmt::fmt )
list(APPEND _IMPORT_CHECK_FILES_FOR_fmtlib_fmt::fmt "${_IMPORT_PREFIX}/lib/libfmt.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
