cmake_minimum_required(VERSION 3.15.0)
project(TestQApt6 VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED Core Core5Compat DBus Widgets)

find_package(QApt6 REQUIRED)

add_executable(TestQApt6 main.cpp TestQApt.cpp commitwidget.cpp cacheupdatewidget.cpp)
target_link_libraries(TestQApt6 QApt6::Main)
