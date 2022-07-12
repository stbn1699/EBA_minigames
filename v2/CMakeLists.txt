cmake_minimum_required(VERSION 3.22)
project(v2)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(Qt5_dir "/home/stbn/Qt5.7.0/5.7/")



find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(v2 main.cpp)
target_link_libraries(v2
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

