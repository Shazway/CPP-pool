/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:03:34 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/03 20:48:22 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

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
	Fixed & operator=(const Fixed &assign);
private:
	int rawBits;
	static int const fixedBits;
};
std::ostream&	operator<<(std::ostream& os, Fixed const & fixed);
#endif