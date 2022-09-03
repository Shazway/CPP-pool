/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:03:14 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/03 20:46:08 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
