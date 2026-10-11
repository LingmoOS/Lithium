cmake_minimum_required(VERSION 3.16)

project(lingmo-qt-plugins)

# KF6 (KScreen, KDecoration3, ...) headers need C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

find_package(ECM REQUIRED NO_MODULE)
list(APPEND CMAKE_MODULE_PATH ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR})
message(STATUS "ECM version: ${ECM_VERSION}")

set(QT Core Widgets DBus)
find_package(Qt6 ${REQUIRED_QT_VERSION} REQUIRED ${QT})

# Thirdparty
add_subdirectory(libdbusmenuqt)

#add_subdirectory(platformtheme)
#add_subdirectory(widgetstyle)
