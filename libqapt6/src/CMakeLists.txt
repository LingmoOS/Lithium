set(qapt_SRCS
    backend.cpp
    cache.cpp
    package.cpp
    config.cpp
    history.cpp
    debfile.cpp
    dependencyinfo.cpp
    changelog.cpp
    transaction.cpp
    downloadprogress.cpp
    markingerrorinfo.cpp
    sourceentry.cpp
    sourceslist.cpp)

add_subdirectory(worker)

set_property(SOURCE ${CMAKE_CURRENT_BINARY_DIR}/worker/${QAPT_WORKER_RDN_VERSIONED}.transaction.xml
    APPEND PROPERTY
        INCLUDE downloadprogress.h
)
set_property(SOURCE ${CMAKE_CURRENT_BINARY_DIR}/worker/${QAPT_WORKER_RDN_VERSIONED}.transaction.xml
    APPEND PROPERTY
        NO_NAMESPACE 1
)

message(WARNING "terrible use of transaction xml file")
qt6_add_dbus_interface(qapt_SRCS
                       ${CMAKE_CURRENT_BINARY_DIR}/worker/${QAPT_WORKER_RDN_VERSIONED}.transaction.xml
                       transactioninterface_p)

set_property(SOURCE ${CMAKE_CURRENT_BINARY_DIR}/worker/${QAPT_WORKER_RDN_VERSIONED}.xml
    APPEND PROPERTY
        NO_NAMESPACE 1
)

message(WARNING "terrible use of  worker xml file")
qt6_add_dbus_interface(qapt_SRCS
                       ${CMAKE_CURRENT_BINARY_DIR}/worker/${QAPT_WORKER_RDN_VERSIONED}.xml
                       workerinterface_p)

configure_file(dbusinterfaces_p.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/dbusinterfaces_p.h)

ecm_create_qm_loader(qapt_SRCS libqapt)

add_library(QApt${PROJECT_VERSION_MAJOR} SHARED ${qapt_SRCS})
add_library(QApt${PROJECT_VERSION_MAJOR}::Main ALIAS QApt${PROJECT_VERSION_MAJOR})

# Set header paths for target so the utils can find them.
target_include_directories(QApt${PROJECT_VERSION_MAJOR} PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..;${CMAKE_CURRENT_BINARY_DIR}/..>")
target_include_directories(QApt${PROJECT_VERSION_MAJOR} PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/;${CMAKE_CURRENT_BINARY_DIR}/>")
target_include_directories(QApt${PROJECT_VERSION_MAJOR} INTERFACE "$<INSTALL_INTERFACE:${KDE_INSTALL_FULL_INCLUDEDIR}/QApt${PROJECT_VERSION_MAJOR}>" )

set_target_properties(QApt${PROJECT_VERSION_MAJOR}
    PROPERTIES
    VERSION ${QAPT_VERSION_STRING}
    SOVERSION ${QAPT_SOVERSION}
    EXPORT_NAME Main)

target_link_libraries(QApt${PROJECT_VERSION_MAJOR}
    PUBLIC
        Qt6::Widgets
        KF6::I18n
        ${APTPKG_LIBRARIES}
    PRIVATE
        Qt6::DBus
        ${XAPIAN_LIBRARIES})

install(TARGETS QApt${PROJECT_VERSION_MAJOR} EXPORT QAptTargets LIBRARY DESTINATION ${KF6_INSTALL_TARGETS_DEFAULT_ARGS})

ecm_generate_headers(QAPT_CAMEL_CASE_HEADERS
    HEADER_NAMES
        Backend
        Changelog
        Config
        DebFile
        DependencyInfo
        DownloadProgress
        Globals
        History
        MarkingErrorInfo
        Package
        SourceEntry
        SourcesList
        Transaction

  REQUIRED_HEADERS QAPT_HEADERS
  PREFIX QApt${PROJECT_VERSION_MAJOR})

install(FILES ${QAPT_HEADERS} DESTINATION ${KDE_INSTALL_FULL_INCLUDEDIR}/qapt${PROJECT_VERSION_MAJOR} COMPONENT Devel)
install(FILES ${QAPT_CAMEL_CASE_HEADERS} DESTINATION ${KDE_INSTALL_FULL_INCLUDEDIR}/QApt${PROJECT_VERSION_MAJOR} COMPONENT Devel)
