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
        fizzbuzz_test
        srcs/test_fizzbuzz.cpp
        srcs/FizzBuzz.cpp
        srcs/FizzBuzz.hpp)

target_link_libraries(
        fizzbuzz_test
        GTest::gtest_main
)

add_test(NAME test COMMAND fizzbuzz_test)
enable_testing()
