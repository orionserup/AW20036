cmake_minimum_required(VERSION 3.10)

project(AW20036 
        LANGUAGES C 
        VERSION ".1a" 
        DESCRIPTION "A hardware agnostic library to control the AW20036 Matrix LED Driver")

file(GLOB SOURCES "src/*.c")
add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC "include")