/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:49:25 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/09 19:00:30 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"
#include "Colors.hpp"

int	convertScalar(std::string str)
{
	if (str.empty() == true || (std::isspace(str.at(0)) && str.size() > 1))
		return (0);
	if (isChar(str))
		return (printChar(static_cast<int>(str.at(0))));
	else if (isInt(str))
		return (printInt(static_cast<int>(strtol(str.c_str(), NULL, 10))));
	else if (isFloat(str))
		return (printFloat(strtof(str.c_str(), NULL)));
	else if (isDouble(str))
		return (printDouble(strtod(str.c_str(), NULL)));
	return (1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << RED << "Wrong number of arguments" << END << std::endl;
		return (1);
	}
	if (convertScalar(av[1]))
		std::cerr << RED << "Bad argument" << END << std::endl;
	return (0);
}