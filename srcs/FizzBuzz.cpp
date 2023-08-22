#include <sstream>
#include "FizzBuzz.hpp"

FizzBuzz::FizzBuzz() {}

FizzBuzz::~FizzBuzz() {}

std::string FizzBuzz::ans(int n) {
	std::ostringstream	ss;

	if (n % 3 == 0 && n % 5 == 0) {
		ss << "FizzBuzz";
	} else if (n % 3 == 0) {
		ss << "Fizz";
	} else if (n % 5 == 0) {
		ss << "Buzz";
	} else {
		ss << n;
	}
	return ss.str();
}
