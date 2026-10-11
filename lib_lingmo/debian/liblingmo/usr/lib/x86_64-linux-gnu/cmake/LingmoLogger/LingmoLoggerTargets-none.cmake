#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "LingmoLogger" for configuration "None"
set_property(TARGET LingmoLogger APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(LingmoLogger PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NONE "Qt6::Core;Qt6::Qml"
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/libLingmoLogger.so.2.2.0"
  IMPORTED_SONAME_NONE "libLingmoLogger.so.2"
  )

list(APPEND _cmake_import_check_targets LingmoLogger )
list(APPEND _cmake_import_check_files_for_LingmoLogger "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/libLingmoLogger.so.2.2.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
