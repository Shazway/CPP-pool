/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:05:54 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/30 23:46:01 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int	main()
{
	std::string	array = "HI THIS IS BRAIN";
	std::string	&stringREF = array;
	std::string	*stringPTR;
	stringPTR = &array;
	std::cout	<< stringREF << std::endl;
	std::cout	<< &stringREF << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringPTR << std::endl;
}