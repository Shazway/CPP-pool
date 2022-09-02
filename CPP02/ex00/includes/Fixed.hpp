#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed(int i);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int i);
	Fixed & operator=(const Fixed &assign);
private:
		int rawBits;
		static const int fixedBits;
};

#endif