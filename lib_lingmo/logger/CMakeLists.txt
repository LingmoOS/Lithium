# CMake build support courtesy of Axel Gembe <axel@gembe.net>
cmake_minimum_required(VERSION 3.15)

set(LIB_VERSION_MAJOR 2)
set(LIB_VERSION_MINOR 2)
set(LIB_VERSION_PATCH 0)
set(LIB_VERSION ${LIB_VERSION_MAJOR}.${LIB_VERSION_MINOR}.${LIB_VERSION_PATCH})

project(LingmoLogger VERSION ${LIB_VERSION})


# Add CMake modules
set(CMAKE_MODULE_PATH
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake"
    "${CMAKE_MODULE_PATH}"
)

# Add a _d to debug binaries
set(CMAKE_DEBUG_POSTFIX "_d")

# Qt6
set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Core Qml REQUIRED)

# As moc files are generated in the binary dir, tell to always look for includes there
set(CMAKE_INCLUDE_CURRENT_DIR ON)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# Specify build paths
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

# Generate version file
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/QsLogVersion.h.in"
    "${CMAKE_CURRENT_BINARY_DIR}/QsLogVersion.h"
)

set(HEADER_FILES
	QsLog.h
	QsLogDest.h
	QsLogDestConsole.h
	QsLogDestFile.h
	QsLogDestFunctor.h
	QsLogDisableForThisFile.h
	QsLogLevel.h
	QsLogMessage.h
	QsLogSharedLibrary.h
	"${CMAKE_CURRENT_BINARY_DIR}/QsLogVersion.h"
    )

set(SOURCE_FILES
	QsLog.cpp
	QsLogDest.cpp
	QsLogDestConsole.cpp
	QsLogDestFile.cpp
	QsLogDestFunctor.cpp
	QsLogMessage.cpp
	QsLogLevel.cpp
    )

if(APPLE)
	# Apple's compiler will not find standard includes like <thread> or <mutex> with 10.7 target otherwise
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
endif()

# Use 10.7 OSX SDK
set(CMAKE_OSX_DEPLOYMENT_TARGET "10.7")

option(QS_LOG_LINE_NUMBERS "Automatically writes the file and line for each log message" ON)
if(QS_LOG_LINE_NUMBERS)
	add_definitions(-DQS_LOG_LINE_NUMBERS)
endif()

option(QS_LOG_DISABLE "Logging code is replaced with a no-op" OFF)
if(QS_LOG_DISABLE)
	add_definitions(-DQS_LOG_DISABLE)
endif()

option(QS_LOG_SEPARATE_THREAD "Messages are queued and written from a separate thread" ON)
if(QS_LOG_SEPARATE_THREAD)
	add_definitions(-DQS_LOG_SEPARATE_THREAD)
endif()

option(QS_LOG_WIN_PRINTF_CONSOLE "Use fprintf instead of OutputDebugString on Windows" OFF)
if(QS_LOG_WIN_PRINTF_CONSOLE)
	add_definitions(-DQS_LOG_WIN_PRINTF_CONSOLE)
endif()

option(QS_LOG_IS_SHARED_LIBRARY "Build shared library" ON)
if(QS_LOG_IS_SHARED_LIBRARY)
	set(QS_LOG_LIBRARY_TYPE SHARED)
	add_definitions(-DQSLOG_IS_SHARED_LIBRARY)
else(QS_LOG_IS_SHARED_LIBRARY)
	set(QS_LOG_LIBRARY_TYPE STATIC)
endif(QS_LOG_IS_SHARED_LIBRARY)

option(QS_LOG_BUILD_WINDOW "Build log window, depends on Qt6::Widgets" OFF)
if(QS_LOG_BUILD_WINDOW)
	find_package(Qt6Widgets REQUIRED)
	list(APPEND ADDITIONAL_LIBRARIES Qt6::Widgets)
        list(APPEND HEADER_FILES QsLogWindowModel.h QsLogWindow.h)
        list(APPEND SOURCE_FILES QsLogWindowModel.cpp QsLogWindow.cpp)
	list(APPEND UI_FILES QsLogWindow.ui)
	list(APPEND RES_FILES QsLogWindow.qrc)
	Qt6_wrap_ui(UI_SOURCE_FILES ${UI_FILES})
	Qt6_add_resources(RES_SOURCE_FILES ${RES_FILES})
    add_definitions(-DQS_LOG_WINDOW)
endif()

qt_add_library(LingmoLogger ${QS_LOG_LIBRARY_TYPE})

target_link_libraries(LingmoLogger PRIVATE Qt6::Core Qt6::Qml ${ADDITIONAL_LIBRARIES})

set_target_properties(LingmoLogger  PROPERTIES 
        VERSION ${LIB_VERSION}
        SOVERSION ${LIB_VERSION_MAJOR}
)

qt_add_qml_module(LingmoLogger
    PLUGIN_TARGET LingmoLogger
    OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/temp/Lingmo/Logger
    VERSION "1.0"
    URI "Lingmo.Logger"
    TYPEINFO "plugins.qmltypes"
    SOURCES ${HEADER_FILES} ${SOURCE_FILES} ${UI_SOURCE_FILES} ${RES_SOURCE_FILES}
    RESOURCE_PREFIX "/lingmo/logger"
)


install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/temp/Lingmo/Logger DESTINATION ${INSTALL_QMLDIR}/Lingmo)

# For outside linking, we must install libraries and headers to ${CMAKE_INSTALL_LIBDIR} and ${CMAKE_INSTALL_INCLUDEDIR}
install(TARGETS LingmoLogger
        EXPORT  LingmoLoggerTargets
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
install(FILES ${HEADER_FILES} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/LingmoLogger)

set(CMAKECONFIG_INSTALL_DIR "${CMAKE_INSTALL_LIBDIR}/cmake/LingmoLogger")

configure_package_config_file(
        "${CMAKE_CURRENT_SOURCE_DIR}/LingmoLoggerConfig.cmake.in"
        "${CMAKE_CURRENT_BINARY_DIR}/LingmoLoggerConfig.cmake"
        INSTALL_DESTINATION
        "${CMAKECONFIG_INSTALL_DIR}"
        PATH_VARS
        CMAKECONFIG_INSTALL_DIR CMAKE_INSTALL_PREFIX
)

write_basic_package_version_file(
        ${CMAKE_CURRENT_BINARY_DIR}/LingmoLoggerConfigVersion.cmake
        VERSION ${LIB_VERSION}
        COMPATIBILITY AnyNewerVersion
)

install(
        FILES
        "${CMAKE_CURRENT_BINARY_DIR}/LingmoLoggerConfig.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/LingmoLoggerConfigVersion.cmake"
        DESTINATION
        "${CMAKECONFIG_INSTALL_DIR}"
        COMPONENT
        Devel
)

install(EXPORT LingmoLoggerTargets
        DESTINATION "${CMAKECONFIG_INSTALL_DIR}"
        FILE LingmoLoggerTargets.cmake
)

option(QS_LOG_BUILD_TESTS "Build unit tests" ON)
if(QS_LOG_BUILD_TESTS)
	add_subdirectory(unittest)
endif()
