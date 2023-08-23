#include <string>
#include "gtest/gtest.h"

std::string hello(std::string str) {
	return str;
}

TEST(HelloTest, test_empty) {
	EXPECT_EQ("", hello(""));
}

TEST(HelloTest, test_hello) {
	EXPECT_EQ("hello", hello("hello"));
}
