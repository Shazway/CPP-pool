#include "Fixed.hpp"

const int Fixed::fixedBits = 8;

Fixed::Fixed(const int n): rawBits(n << fixedBits){
	return ;
}

Fixed::Fixed(const float n)
{
	rawBits = roundf(n * (1 << fixedBits));
	return ;
}

Fixed::Fixed()
{
	rawBits = 0;
	return ;
}

Fixed::Fixed(const Fixed &copy)
{
	rawBits = copy.getRawBits();
	return ;
}

Fixed::~Fixed(){
	return ;
}

Fixed & Fixed::operator=(const Fixed &assign)
{
	rawBits = assign.getRawBits();
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
	return (rawBits);
}

void Fixed::setRawBits(int i)
{
	rawBits = i;
}

std::ostream&	operator<<(std::ostream& os, Fixed const & fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool	Fixed::operator<(Fixed const& fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>(Fixed const& fixed) const
{
	return (this->getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<=(Fixed const& fixed) const
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool	Fixed::operator>=(Fixed const& fixed) const
{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool	Fixed::operator==(Fixed const& fixed) const
{
	return (this->getRawBits() == fixed.getRawBits());
}

bool	Fixed::operator!=(Fixed const& fixed) const
{
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed	Fixed::operator+(Fixed const& fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator*(Fixed const& fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(Fixed const& fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator-(Fixed const& fixed) const
{
	return (this->getRawBits() - fixed.getRawBits());
}

Fixed Fixed::operator++(int)
{
	Fixed	temp;

	temp.rawBits = this->rawBits++;
	return (temp);
}

Fixed&	Fixed::operator++(void)
{
	this->rawBits++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp;

	temp.rawBits = this->rawBits--;
	return (temp);
}

Fixed& Fixed::operator--(void)
{
	this->rawBits--;
	return (*this);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed const& Fixed::min(Fixed const& f1, Fixed const& f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed const& Fixed::max(Fixed const& f1, Fixed const& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	return (f2);
}
