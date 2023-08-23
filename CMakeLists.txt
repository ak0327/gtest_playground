cmake_minimum_required(VERSION 3.23)
project(gtest_playground)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# google test ------------------------------------------------------------------

include(FetchContent)
include(GoogleTest)

FetchContent_Declare(
        googletest
        DOWNLOAD_EXTRACT_TIMESTAMP true
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()

# srcs -------------------------------------------------------------------------
add_executable(
        gtest_sample
        srcs/test_fizzbuzz.cpp
        srcs/FizzBuzz.cpp
        srcs/FizzBuzz.hpp
        srcs/test_hello.cpp)

target_link_libraries(
        gtest_sample
        GTest::gtest_main
)

# test -------------------------------------------------------------------------
gtest_discover_tests(gtest_sample)