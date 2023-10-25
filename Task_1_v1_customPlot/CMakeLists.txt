cmake_minimum_required(VERSION 3.5)

project(Task_1_v1_customPlot VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets Concurrent PrintSupport REQUIRED)


set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        graphcp.h
        graphcp.cpp
        graphcp.ui
)

add_executable(Task_1_v1_customPlot WIN32
               ${PROJECT_SOURCES}
)

add_compile_definitions(QCUSTOMPLOT_USE_LIBRARY)
target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Task_1_v1_customPlot PRIVATE  Qt6::Concurrent
                                                    Qt6::PrintSupport
                                                    qcustomplot2.dll
                                                    Qt6::Widgets)

qt_finalize_executable(Task_1_v1_customPlot)
