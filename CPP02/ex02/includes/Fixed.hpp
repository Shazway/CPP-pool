/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:04:00 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/03 17:04:01 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
#include <cmath>

class Fixed
{
public:
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed &copy);
	Fixed(void);
	~Fixed(void);
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits() const;
	void	setRawBits(int i);
	//--Calculations--//
	Fixed	operator+(Fixed const& fixed) const;
	Fixed	operator-(Fixed const& fixed) const;
	Fixed	operator*(Fixed const& fixed) const;
	Fixed	operator/(Fixed const& fixed) const;
	Fixed	operator++(int);
	Fixed&	operator++(void);
	Fixed	operator--(int);
	Fixed&	operator--(void);
	Fixed & operator=(const Fixed &assign);
	//--Comparison operators--//
	bool	operator>(Fixed const& fixed) const;
	bool	operator>=(Fixed const& fixed) const;
	bool	operator<(Fixed const& fixed) const;
	bool	operator<=(Fixed const& fixed) const;
	bool	operator==(Fixed const& fixed) const;
	bool	operator!=(Fixed const& fixed) const;
	static Fixed const&	min(Fixed const& f1, Fixed const& f2);
	static Fixed const&	max(Fixed const& f1, Fixed const& f2);
	static Fixed&	min(Fixed& f1, Fixed& f2);
	static Fixed&	max(Fixed& f1, Fixed& f2);
private:
	int rawBits;
	static int const fixedBits;
};

std::ostream&	operator<<(std::ostream& os, Fixed const & fixed);
#endif