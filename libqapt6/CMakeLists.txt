cmake_minimum_required(VERSION 3.10)

project(qapt)

set(PROJECT_VERSION_MAJOR 6)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 0)
set(PROJECT_VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}" )
set(PROJECT_SOVERSION ${PROJECT_VERSION_MAJOR})

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(ECM REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH
    ${ECM_MODULE_PATH}
    ${ECM_KDE_MODULE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules)

set(REQUIRED_QT_VERSION 6) # Used in QAptConfig
find_package(Qt6 ${REQUIRED_QT_VERSION} CONFIG REQUIRED Core Core5Compat DBus Widgets)

find_package(Xapian REQUIRED)
find_package(AptPkg REQUIRED)

find_package(PolkitQt6-1 0.112 REQUIRED)

include(ECMGenerateHeaders)
include(CMakePackageConfigHelpers)
# include(ECMPoQmTools)
include(ECMSetupVersion)
# include(FeatureSummary)
# include(KDECMakeSettings NO_POLICY_SCOPE)
# include(KDECompilerSettings NO_POLICY_SCOPE)
include(ECMPoQmTools) # This needs InstallDirs

include(KDEInstallDirs6)

# Find the required Libaries
include_directories(
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
    ${POLKITQT-1_INCLUDE_DIR}
    ${XAPIAN_INCLUDE_DIR}
    ${APTPKG_INCLUDE_DIR})

ecm_setup_version(${PROJECT_VERSION} VARIABLE_PREFIX QAPT
                  VERSION_HEADER "${CMAKE_CURRENT_BINARY_DIR}/qaptversion.h"
                  PACKAGE_VERSION_FILE "${CMAKE_CURRENT_BINARY_DIR}/QApt6ConfigVersion.cmake"
                  SOVERSION ${PROJECT_SOVERSION})

set(QAPT_WORKER_VERSION ${PROJECT_SOVERSION})
set(QAPT_WORKER_RDN org.kubuntu.qaptworker)
set(QAPT_WORKER_RDN_VERSIONED ${QAPT_WORKER_RDN}${QAPT_WORKER_VERSION})

# For forwarding into C++ convert them into properly excaped strings.
set(QAPT_WORKER_VERSION_STRING \"${QAPT_WORKER_VERSION}\")
set(QAPT_WORKER_RDN_VERSIONED_STRING \"${QAPT_WORKER_RDN_VERSIONED}\")

add_definitions(-DQAPT_WORKER_VERSION_STRING=${QAPT_WORKER_VERSION_STRING})
add_definitions(-DQAPT_WORKER_RDN_VERSIONED_STRING=${QAPT_WORKER_RDN_VERSIONED_STRING})

# Also forward version for utils.
add_definitions(-DCMAKE_PROJECT_VERSION=\"${PROJECT_VERSION}\")

set(KF6_DEP_VERSION "6.0.0")

# Only used to install worker actions
find_package(KF6Auth ${KF6_DEP_VERSION})

# Used for utils
find_package(KF6CoreAddons ${KF6_DEP_VERSION})
find_package(KF6I18n ${KF6_DEP_VERSION} REQUIRED)
find_package(KF6KIO ${KF6_DEP_VERSION})
find_package(KF6Runner ${KF6_DEP_VERSION})
find_package(KF6TextWidgets ${KF6_DEP_VERSION})
find_package(KF6WidgetsAddons ${KF6_DEP_VERSION})
find_package(KF6WindowSystem ${KF6_DEP_VERSION})
find_package(KF6IconThemes ${KF6_DEP_VERSION})

find_package(DebconfKDE 1.0)
find_package(GStreamer 1.0)
find_package(GLIB2 2.0)

if (KF6CoreAddons_FOUND
        AND KF6I18n_FOUND
        AND KF6KIO_FOUND
        AND KF6Runner_FOUND
        AND KF6TextWidgets_FOUND
        AND KF6WidgetsAddons_FOUND
        AND KF6WindowSystem_FOUND
        AND KF6IconThemes_FOUND
        AND DebconfKDE_FOUND)
    set(WITH_UTILS true)
endif()

set(WITH_UTILS false)

if (WITH_UTILS AND GSTREAMER_FOUND AND GLIB2_FOUND)
    set(WITH_GSTREAMER true)
    add_definitions(${GSTREAMER_DEFINITIONS})
endif()

add_feature_info(qapt-utils WITH_UTILS "Runtime utilities using KDE frameworks")
add_feature_info(qapt-gst-helper WITH_GSTREAMER "GStreamer codec helper util")

message(WARNING "gettext and tr in the same source is insanely tricky, maybe we should give some ki18n to qapt...")
if (IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/po")
    ecm_install_po_files_as_qm(po)
endif()

# create a Config.cmake and a ConfigVersion.cmake file and install them
set(CMAKECONFIG_INSTALL_DIR "${KDE_INSTALL_FULL_CMAKEPACKAGEDIR}/QApt6")

configure_package_config_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/QApt6Config.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/QApt6Config.cmake"
    INSTALL_DESTINATION  ${CMAKECONFIG_INSTALL_DIR})

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/QApt6Config.cmake"
              "${CMAKE_CURRENT_BINARY_DIR}/QApt6ConfigVersion.cmake"
        DESTINATION "${CMAKECONFIG_INSTALL_DIR}"
        COMPONENT Devel)
install(EXPORT QAptTargets
        DESTINATION "${CMAKECONFIG_INSTALL_DIR}"
        FILE QAptTargets.cmake
        NAMESPACE QApt6:: )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qaptversion.h
        DESTINATION include/qapt6
        COMPONENT Devel)

add_subdirectory(autotests)
add_subdirectory(src)

if(WITH_UTILS)
    add_subdirectory(utils)

    #Do not remove or modify these.  The release script substitutes in for these
    #comments with appropriate doc and translation directories.
    #PO_SUBDIR
    #DOC_SUBDIR
endif()

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/libqapt6.pc.cmake
    ${CMAKE_CURRENT_BINARY_DIR}/libqapt6.pc
    @ONLY)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/libqapt6.pc
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/pkgconfig
    COMPONENT Devel)

# ecm_generate_pri_file(BASE_NAME QApt
#     LIB_NAME QApt
#     DEPS "core widgets dbus"
#     FILENAME_VAR PRI_FILENAME
#     INCLUDE_INSTALL_DIR include/QApt)
# install(FILES ${PRI_FILENAME} DESTINATION ${ECM_MKSPECS_INSTALL_DIR})

feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)
