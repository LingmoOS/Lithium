cmake_minimum_required(VERSION 3.16)

project(lingmo-lockscreen LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui DBus)

add_executable(lingmo-screenlocker
    main.cpp
)

target_link_libraries(lingmo-screenlocker
    PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::DBus
)

install(TARGETS lingmo-screenlocker RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
