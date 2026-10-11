find_package(ECM REQUIRED NO_MODULE)
list(APPEND CMAKE_MODULE_PATH ${ECM_MODULE_PATH})

find_package(XCB MODULE REQUIRED COMPONENTS XCB KEYSYMS)
find_package(X11 REQUIRED)
# Global shortcuts: X11 grabs on X11, KGlobalAccel on Wayland.
find_package(KF6 6.5.0 REQUIRED COMPONENTS GlobalAccel WindowSystem)

set(PROJECT_SOURCES
    main.cpp
    application.cpp
    hotkeys.cpp
    QHotkey/qhotkey.cpp
    QHotkey/qhotkey_linux.cpp
    QHotkey/xdgshortcut.cpp
)

add_executable(lingmo-chotkeys
    ${PROJECT_SOURCES}
)

# KGlobalAccel D-Bus interfaces (the Wayland path inside QHotkey)
set(kglobalaccel_xml ${KGLOBALACCEL_DBUS_INTERFACES_DIR}/kf6_org.kde.KGlobalAccel.xml)
set_source_files_properties(${kglobalaccel_xml} PROPERTIES
    INCLUDE "kglobalaccel.h"
    NO_NAMESPACE TRUE
    CLASSNAME "KGlobalAccelInterface"
)
qt_add_dbus_interface(kglobalaccel_dbus_SRC ${kglobalaccel_xml} kglobalaccel_interface)

set(kglobalaccel_component_xml ${KGLOBALACCEL_DBUS_INTERFACES_DIR}/kf6_org.kde.kglobalaccel.Component.xml)
set_source_files_properties(${kglobalaccel_component_xml} PROPERTIES
    INCLUDE "kglobalshortcutinfo.h"
    NO_NAMESPACE TRUE
    CLASSNAME "KGlobalAccelComponentInterface"
)
qt_add_dbus_interface(kglobalaccel_dbus_SRC ${kglobalaccel_component_xml} kglobalaccel_component_interface)

target_sources(lingmo-chotkeys PRIVATE ${kglobalaccel_dbus_SRC})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(lingmo-chotkeys
    PRIVATE
    Qt6::Core
    Qt6::Widgets
    Qt6::DBus
    Qt6::GuiPrivate
    ${XCB_LIBS}
    ${X11_LIBRARIES}
    XCB::KEYSYMS
    KF6::GlobalAccel
    KF6::WindowSystem
)

install(TARGETS lingmo-chotkeys RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
