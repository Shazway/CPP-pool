#include "test.hpp"

// Constructors
test::test()
{
	std::cout << "\e[0;33mDefault Constructor called of test\e[0m" << std::endl;
}

test::test(const test &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of test\e[0m" << std::endl;
}


// Destructor
test::~test()
{
	std::cout << "\e[0;31mDestructor called of test\e[0m" << std::endl;
}


// Operators
test & test::operator=(const test &assign)
{
	(void) assign;
	return *this;
}

