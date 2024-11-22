cmake_minimum_required(VERSION 3.10)

project(ti)

file(GLOB C_SOURCES "source/file/*.c")

include_directories("include/file")

add_executable(${PROJECT_NAME} C_SOURCES)