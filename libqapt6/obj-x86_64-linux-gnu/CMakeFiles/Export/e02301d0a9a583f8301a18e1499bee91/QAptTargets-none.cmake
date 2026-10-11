#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "QApt6::Main" for configuration "None"
set_property(TARGET QApt6::Main APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(QApt6::Main PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NONE "Qt6::DBus"
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/libQApt6.so.6.0.0"
  IMPORTED_SONAME_NONE "libQApt6.so.6"
  )

list(APPEND _cmake_import_check_targets QApt6::Main )
list(APPEND _cmake_import_check_files_for_QApt6::Main "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/libQApt6.so.6.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
