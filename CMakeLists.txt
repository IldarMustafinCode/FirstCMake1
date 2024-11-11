
cmake_minimum_required(VERSION 3.5.0)
project(firstCM VERSION 0.1.0)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_executable(firstCM main.cpp)


add_subdirectory(SomeFunctions)

######## Build tests ########

add_subdirectory(googletest)

enable_testing()
add_subdirectory(Tests)

