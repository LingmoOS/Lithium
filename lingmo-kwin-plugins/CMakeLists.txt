cmake_minimum_required(VERSION 3.16)

project(lingmo-kwin-plugins)

# KF6 (KScreen, KDecoration3, ...) headers need C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ECM REQUIRED NO_MODULE)

list(APPEND CMAKE_MODULE_PATH ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR})
message(STATUS "ECM version: ${ECM_VERSION}")

add_subdirectory(plugins)

install(FILES config/kglobalshortcutsrc DESTINATION /etc/xdg)
install(FILES config/kwinrc DESTINATION /etc/xdg)
install(FILES config/kwinrulesrc DESTINATION /etc/xdg)

install(DIRECTORY scripts/linglauncher DESTINATION /usr/share/kwin/scripts)
install(DIRECTORY scripts/ling_squash DESTINATION /usr/share/kwin/effects)
install(DIRECTORY scripts/ling_scale DESTINATION /usr/share/kwin/effects)
install(DIRECTORY scripts/ling_popups DESTINATION /usr/share/kwin/effects)
install(DIRECTORY tabbox/ling_thumbnail DESTINATION /usr/share/kwin/tabbox)
