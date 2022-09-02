#include "Fixed.hpp"

const int Fixed::fixedBits = 8;

Fixed::Fixed(const int n): rawBits(n << fixedBits)
{
	std::cout << "Fixed int constructor called" << std::endl;
	return ;
}
Fixed::Fixed(const float n)
{
	rawBits = roundf(n * (1 << fixedBits));
	std::cout << "Fixed float constructor called" << std::endl;
	return ;
}

Fixed::Fixed()
{
	rawBits = 0;
	std::cout << "Fixed constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	rawBits = copy.getRawBits();
	std::cout << "Fixed copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Fixed destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &assign)
{
	rawBits = assign.getRawBits();
	std::cout << "Fixed copy operator called" << std::endl;
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->rawBits / (float)(1 << fixedBits));
}

int	Fixed::toInt(void) const
{
	return (this->rawBits >> fixedBits);
}

int Fixed::getRawBits() const
{
	std::cout << "Fixed getRawBits called" << std::endl;
	return (rawBits);
}

void Fixed::setRawBits(int i)
{
	std::cout << "Fixed setRawBits called" << std::endl;
	rawBits = i;
}

std::ostream&	operator<<(std::ostream& os, Fixed const & fixed)
{
	os << fixed.toFloat();
	return (os);
}
