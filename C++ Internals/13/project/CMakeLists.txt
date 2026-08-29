cmake_minimum_required(VERSION 3.20)
project(project)
add_executable(target)
target_sources(target
    PRIVATE
        1.cpp
)
add_library(MathFunctions)
target_sources(MathFunctions
    PRIVATE
        libs/add.cpp

    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            libs
        FILES
            libs/add.h
)