#ifndef TEST_HPP
# define TEST_HPP

# include <iostream>
# include <string>

class test
{
	public:
		// Constructors
		test();
		test(const test &copy);
		
		// Destructor
		~test();
		
		// Operators
		test & operator=(const test &assign);
		
	private:
		
};

#endif