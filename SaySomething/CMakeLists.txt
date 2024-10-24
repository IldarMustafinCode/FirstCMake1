cmake_minimum_required(VERSION 3.11)


set(project "sayprogr")

add_executable(${project} sayprogr.cpp)

target_include_directories
(
    ${project} PRIVATE 
      "${PROJECT_SOURCE_DIR}/../eigen"
  )