/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:03:07 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/03 20:46:02 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		static const int fixedBits = 8;
};

#endif