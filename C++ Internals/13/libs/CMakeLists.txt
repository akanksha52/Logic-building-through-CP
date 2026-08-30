add_library(MathFunctions)
target_sources(MathFunctions
    PRIVATE
        add.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            headers
        FILES
            headers/add.h
)
target_include_directories(MathFunctions
    PRIVATE 
        headers
)