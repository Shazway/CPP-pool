/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printTypes.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:11:48 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/09 19:03:47 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include "Colors.hpp"

void	print_separator(void)
{
	std::cout << "\e[1;37m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\e[0m" << std::endl;
}

int	printChar(char nb)
{
	print_separator();
	std::cout << GREEN;
	if (std::isprint(static_cast<int>(nb)) == false)
			std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << "float " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double " << static_cast<double>(nb) <<  std::endl;
	std::cout << END;
	print_separator();
	return (0);
}

int	printInt(int nb)
{
	print_separator();
	std::cout << GREEN;
	if (nb <= std::numeric_limits<char>::max() && nb >= std::numeric_limits<char>::min())
	{
		if (std::isprint(static_cast<int>(nb)) == false)
			std::cout << END << RED << "char: non displayable" << END << std::endl << GREEN;
		else
			std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	}
	else
		std::cout << END << RED << "char: impossible" << END << GREEN << std::endl;
	std::cout << "int: " << nb << std::endl;
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << END << std::endl;
	print_separator();
	return (0);
}

int	printFloat(float nb)
{
	print_separator();
	std::cout << GREEN;
	if (nb <= std::numeric_limits<char>::max() && nb >= std::numeric_limits<char>::min())
	{
		if (std::isprint(static_cast<int>(nb)) == false)
			std::cout << END << RED << "char: non displayable" << END << std::endl << GREEN;
		else
			std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	}
	else
		std::cout << END << RED << "char: impossible" << END << GREEN << std::endl;
	if (nb <= static_cast<float>(std::numeric_limits<int>::max())
		&& nb >= static_cast<float>(std::numeric_limits<int>::min()))
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	else
		std::cout << END << RED << "int: impossible" << END << GREEN << std::endl;
	std::cout << "float: " << nb << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << END << std::endl;
	print_separator();
	return (0);
}

int	printDouble(double nb)
{
	print_separator();
	std::cout << GREEN;
	if (nb <= std::numeric_limits<char>::max() && nb >= std::numeric_limits<char>::min())
	{
		if (std::isprint(static_cast<int>(nb)) == false)
			std::cout << END << RED << "char: non displayable" << END << std::endl << GREEN;
		else
			std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	}
	else
		std::cout << END << RED << "char: impossible" << END << GREEN << std::endl;
	if (nb <= static_cast<double>(std::numeric_limits<int>::max())
		&& nb >= static_cast<double>(std::numeric_limits<int>::min()))
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	else
		std::cout << END << RED << "int: impossible" << END << GREEN << std::endl;
	if (std::isfinite(nb)
		&& (nb > static_cast<double>(std::numeric_limits<float>::max())
		|| nb < static_cast<double>(std::numeric_limits<float>::min())))
		std::cout << END << RED << "float: impossible" << END << GREEN << std::endl;
	else
		std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << nb << END << std::endl;
	print_separator();
	return (0);
}
