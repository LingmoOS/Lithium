# Install script for directory: /home/lingmo/Lithium/libqapt6/src

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/worker/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "qapt" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libQApt6.so.6.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libQApt6.so.6"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/libQApt6.so.6.0.0"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/libQApt6.so.6"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libQApt6.so.6.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libQApt6.so.6"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/x86_64-linux-gnu-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "qapt" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/libQApt6.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/include/qapt6/backend.h;/usr/include/qapt6/changelog.h;/usr/include/qapt6/config.h;/usr/include/qapt6/debfile.h;/usr/include/qapt6/dependencyinfo.h;/usr/include/qapt6/downloadprogress.h;/usr/include/qapt6/globals.h;/usr/include/qapt6/history.h;/usr/include/qapt6/markingerrorinfo.h;/usr/include/qapt6/package.h;/usr/include/qapt6/sourceentry.h;/usr/include/qapt6/sourceslist.h;/usr/include/qapt6/transaction.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/include/qapt6" TYPE FILE FILES
    "/home/lingmo/Lithium/libqapt6/src/backend.h"
    "/home/lingmo/Lithium/libqapt6/src/changelog.h"
    "/home/lingmo/Lithium/libqapt6/src/config.h"
    "/home/lingmo/Lithium/libqapt6/src/debfile.h"
    "/home/lingmo/Lithium/libqapt6/src/dependencyinfo.h"
    "/home/lingmo/Lithium/libqapt6/src/downloadprogress.h"
    "/home/lingmo/Lithium/libqapt6/src/globals.h"
    "/home/lingmo/Lithium/libqapt6/src/history.h"
    "/home/lingmo/Lithium/libqapt6/src/markingerrorinfo.h"
    "/home/lingmo/Lithium/libqapt6/src/package.h"
    "/home/lingmo/Lithium/libqapt6/src/sourceentry.h"
    "/home/lingmo/Lithium/libqapt6/src/sourceslist.h"
    "/home/lingmo/Lithium/libqapt6/src/transaction.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/include/QApt6/Backend;/usr/include/QApt6/Changelog;/usr/include/QApt6/Config;/usr/include/QApt6/DebFile;/usr/include/QApt6/DependencyInfo;/usr/include/QApt6/DownloadProgress;/usr/include/QApt6/Globals;/usr/include/QApt6/History;/usr/include/QApt6/MarkingErrorInfo;/usr/include/QApt6/Package;/usr/include/QApt6/SourceEntry;/usr/include/QApt6/SourcesList;/usr/include/QApt6/Transaction")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/include/QApt6" TYPE FILE FILES
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/Backend"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/Changelog"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/Config"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/DebFile"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/DependencyInfo"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/DownloadProgress"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/Globals"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/History"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/MarkingErrorInfo"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/Package"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/SourceEntry"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/SourcesList"
    "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/QApt6/Transaction"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/lingmo/Lithium/libqapt6/obj-x86_64-linux-gnu/src/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
