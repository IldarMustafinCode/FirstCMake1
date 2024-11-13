cmake_minimum_required(VERSION 3.11)


# add googletest as submodule
# <cd> git submodule add https://github.com/google/googletest  
# bind to a particular tag
# cd googletest
# git checkout v1.14.0


macro(add_google_test name)
  set(TEST_EXECUTABLE ${name})
  set(TEST_NAME ${name})

  add_executable(
    ${TEST_NAME}  
      ${TEST_EXECUTABLE}.cpp
  )


  target_include_directories(
    ${TEST_NAME} PRIVATE 
      "${CMAKE_SOURCE_DIR}/SomeFunctions"
  )

  target_include_directories(
    ${TEST_NAME} PRIVATE 
      "${CMAKE_SOURCE_DIR}/eigen"
  )

  target_include_directories(
    ${TEST_NAME} PRIVATE 
      "${CMAKE_SOURCE_DIR}/googletest"
  )

  target_include_directories(
    ${TEST_NAME} PRIVATE 
      "${CMAKE_SOURCE_DIR}/../"
  )
 
  target_link_libraries(
    ${TEST_NAME} PRIVATE
       gtest_main
  ) 


  # compiler-specific options
  if(MSVC AND MSVC_VERSION GREATER 1400)
    target_compile_options(
      ${TEST_NAME} PRIVATE 
      /MP)
  else()
    target_compile_options(
      ${TEST_NAME} PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
  endif()
  
  if(MSVC)
    # hack for windows compilation
    # or for compilation with MSVC
    # if MinGW -- may not be required...
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
  endif()

  # adding the test, finally
  add_test(
    NAME ${TEST_NAME} 
    COMMAND ${TEST_EXECUTABLE})

endmacro()




add_google_test(mainTest)
