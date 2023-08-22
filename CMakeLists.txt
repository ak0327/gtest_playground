cmake_minimum_required(VERSION 3.23)
project(gtest_playground)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# google test ------------------------------------------------------------------

include(FetchContent)
FetchContent_Declare(
        googletest
        DOWNLOAD_EXTRACT_TIMESTAMP true
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(
        ${PROJECT_NAME}-googletest
#        srcs/main.cpp
        srcs/FizzBuzz.cpp
        srcs/FizzBuzz.hpp)

target_link_libraries(
        ${PROJECT_NAME}-googletest
        GTest::gtest_main
)

#target_include_directories(
#        ${PROJECT_NAME}-googletest
#        PUBLIC
#        ${CMAKE_CURRENT_SOURCE_DIR}/srcs)

#include(GoogleTest)
#gtest_discover_tests(fizzbuzz_test)
#add_test(NAME example_test COMMAND example)
#target_link_libraries(fizzbuzz_test gtest_main)
#add_test(NAME fizzbuzz_test COMMAND example)
#enable_testing()

add_test(NAME test COMMAND ${PROJECT_NAME}-googletest)
enable_testing()
