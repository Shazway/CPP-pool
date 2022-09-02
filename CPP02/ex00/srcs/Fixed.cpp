#include "Fixed.hpp"

const int Fixed::fixedBits = 8;

Fixed::Fixed()
{
	rawBits = 0;
	std::cout << "Fixed constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	rawBits = copy.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int i)
{
	rawBits = i;
	std::cout << "Setter constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called of Fixed" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &assign)
{
	rawBits = assign.getRawBits();
	std::cout << "Operator copy called" << std::endl;
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits called" << std::endl;
	return (rawBits);
}
void Fixed::setRawBits(int i)
{
	std::cout << "setRawBits called" << std::endl;
	rawBits = i;
}
