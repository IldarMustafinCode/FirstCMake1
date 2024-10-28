cmake_minimum_required(VERSION 3.11)


set(project "eigenTest")

add_executable(${project} eigenTest.cpp)

target_include_directories
(
    ${project} PRIVATE 
      "${PROJECT_SOURCE_DIR}/../eigen"
  )