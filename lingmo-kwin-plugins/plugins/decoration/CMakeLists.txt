project (lingdecoration)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(KF6CoreAddons 6 REQUIRED)
find_package(KF6Config 6 REQUIRED)
find_package(KF6WindowSystem 6 REQUIRED)
find_package(KDecoration3 6 REQUIRED)

message(STATUS "KDecoration version: ${KDecoration3_VERSION}")
string(REPLACE "." ";" version_parts ${KDecoration3_VERSION})
list(GET version_parts 0 KDECORATION_MAJOR)
list(GET version_parts 1 KDECORATION_MINOR)
list(GET version_parts 2 KDECORATION_PATCH)
add_compile_definitions(KDECORATION_MAJOR=${KDECORATION_MAJOR})
add_compile_definitions(KDECORATION_MINOR=${KDECORATION_MINOR})
add_compile_definitions(KDECORATION_PATCH=${KDECORATION_PATCH})

find_package(Qt6 CONFIG REQUIRED COMPONENTS Gui Widgets Core)

# Get the installation directory from qmake
if(ECM_VERSION VERSION_LESS 5.93.0)
    include(ECMQueryQmake)
    query_qmake(QT_PLUGINS_DIR QT_INSTALL_PLUGINS)
else()
    include(ECMQueryQt)
    ecm_query_qt(QT_PLUGINS_DIR QT_INSTALL_PLUGINS)
endif()

if(QT_PLUGINS_DIR)
    message(STATUS "Qt6 plugin directory:" "${QT_PLUGINS_DIR}")
else()
    message(FATAL_ERROR "Qt6 plugin directory cannot be detected.")
endif()

set (decoration_SRCS
    decoration.cpp
    x11shadow.cpp
    button.cpp
    resources.qrc
)

add_library (lingdecoration MODULE
    ${decoration_SRCS}
)

target_link_libraries (lingdecoration
    PUBLIC
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
        Qt6::GuiPrivate
        KF6::ConfigCore
        KF6::ConfigGui
        KF6::CoreAddons
        KF6::WindowSystem

    PRIVATE
        KDecoration3::KDecoration
)

install (TARGETS lingdecoration
         DESTINATION ${QT_PLUGINS_DIR}/org.kde.kdecoration3)
