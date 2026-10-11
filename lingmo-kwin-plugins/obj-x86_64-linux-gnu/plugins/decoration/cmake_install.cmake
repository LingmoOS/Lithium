# Install script for directory: /home/lingmo/Lithium/lingmo-kwin-plugins/plugins/decoration

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "None")
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
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/x86_64-linux-gnu-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/qt6/plugins/org.kde.kdecoration3/liblingdecoration.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/qt6/plugins/org.kde.kdecoration3/liblingdecoration.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/qt6/plugins/org.kde.kdecoration3/liblingdecoration.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/x86_64-linux-gnu/qt6/plugins/org.kde.kdecoration3/liblingdecoration.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/lib/x86_64-linux-gnu/qt6/plugins/org.kde.kdecoration3" TYPE MODULE FILES "/home/lingmo/Lithium/lingmo-kwin-plugins/obj-x86_64-linux-gnu/plugins/decoration/liblingdecoration.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/qt6/plugins/org.kde.kdecoration3/liblingdecoration.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/qt6/plugins/org.kde.kdecoration3/liblingdecoration.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/x86_64-linux-gnu-strip" "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/qt6/plugins/org.kde.kdecoration3/liblingdecoration.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/lingmo/Lithium/lingmo-kwin-plugins/obj-x86_64-linux-gnu/plugins/decoration/CMakeFiles/lingdecoration.dir/install-cxx-module-bmi-None.cmake" OPTIONAL)
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/lingmo/Lithium/lingmo-kwin-plugins/obj-x86_64-linux-gnu/plugins/decoration/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
