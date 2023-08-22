#include "gtest/gtest.h"
#include "FizzBuzz.hpp"

TEST(fizz_buzz_test, test_positive_num) {
	FizzBuzz fizzBuzz;

	EXPECT_EQ("1", fizzBuzz.ans(1));
	EXPECT_EQ("2", fizzBuzz.ans(2));
	EXPECT_EQ("Fizz", fizzBuzz.ans(3));
	EXPECT_EQ("4", fizzBuzz.ans(4));
	EXPECT_EQ("Buzz", fizzBuzz.ans(5));
	EXPECT_EQ("FizzBuzz", fizzBuzz.ans(15));
	EXPECT_EQ("91", fizzBuzz.ans(91));
}

TEST(fizz_buzz_test, test_negative_num) {
	FizzBuzz fizzBuzz;

	EXPECT_EQ("-1", fizzBuzz.ans(-1));
	EXPECT_EQ("-2", fizzBuzz.ans(-2));
	EXPECT_EQ("Fizz", fizzBuzz.ans(-3));
}

/*
 cd build
 cmake ..
 make all
 ./fizzbuzz_test
 */