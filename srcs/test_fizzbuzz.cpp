#include "gtest/gtest.h"
#include "FizzBuzz.hpp"

TEST(FizzBuzzTest, TestPositiveNum) {
	FizzBuzz fizzBuzz;

	EXPECT_EQ("1", fizzBuzz.ans(1));
	EXPECT_EQ("2", fizzBuzz.ans(2));
	EXPECT_EQ("Fizz", fizzBuzz.ans(3));
	EXPECT_EQ("4", fizzBuzz.ans(4));
	EXPECT_EQ("Buzz", fizzBuzz.ans(5));
	EXPECT_EQ("FizzBuzz", fizzBuzz.ans(15));
	EXPECT_EQ("91", fizzBuzz.ans(91));
}

TEST(FizzBuzzTest, TestNegativeNum) {
	FizzBuzz fizzBuzz;

	EXPECT_EQ("-1", fizzBuzz.ans(-1));
	EXPECT_EQ("-2", fizzBuzz.ans(-2));
	EXPECT_EQ("Fizz", fizzBuzz.ans(-3));
}

// TEST(FizzBuzzTest, TestZero) {
// 	FizzBuzz fizzBuzz;
//
// 	EXPECT_EQ("0", fizzBuzz.ans(0));
// }


/*
 cmake -S . -B build
 cmake --build build
 cd build && ctest

 cmake --build .
 ctest
 */