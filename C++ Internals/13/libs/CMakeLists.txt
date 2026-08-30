add_library(MathFunctions)
target_sources(MathFunctions
    PRIVATE
        add.cpp
    PUBLIC
        FILE_SET HEADERS
        FILES
            add.h
)