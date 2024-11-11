
cmake_minimum_required(VERSION 3.11)


macro(add_google_test name)


  set(TEST_EXECUTABLE ${name})
  set(TEST_NAME ${name})


add_executable(
    ${TEST_NAME}  
      ${TEST_EXECUTABLE}.cpp
  )


target_include_directories(
    ${TEST_NAME} PRIVATE 
      "${CMAKE_CURRENT_SOURCE_DIR}/../"
  )

target_include_directories(
    ${TEST_NAME} PRIVATE 
      "${CMAKE_CURRENT_SOURCE_DIR}/../eigen"
      )


target_link_libraries(
    ${TEST_NAME} PRIVATE
      gtest_main
  ) 


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

    
# adding the test, finally
add_test(
  NAME ${TEST_NAME} 
  COMMAND ${TEST_EXECUTABLE})


  endmacro()


  add_google_test(mainTest)
