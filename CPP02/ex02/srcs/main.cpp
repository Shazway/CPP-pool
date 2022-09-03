/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:39:43 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/03 22:00:41 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	if (a < b)
		std::cout << "a: " << a << " is smaller than b: " << b << std::endl;
	else if (a > b)
		std::cout << "a: " << a << "is bigger than b: " << b << std::endl;
	std::cout << "Before increment, a is:	" << a << std::endl;
	a++;
	std::cout << "After increment, a is:	" << a << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
}