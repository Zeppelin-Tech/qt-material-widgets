cmake_minimum_required(VERSION 3.9)

project(qt-material-widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_subdirectory(components)
add_subdirectory(examples)
