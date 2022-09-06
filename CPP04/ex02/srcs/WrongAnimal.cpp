/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:08:02 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 14:58:35 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	_type = "Random WrongAnimal";
	std::cout << "\e[1;32mWrongAnimal created\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	_type = copy.getType();
	std::cout << "\e[1;32mWrongAnimal clone created\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
{
	_type = name;
	std::cout << "\e[1;32mCustom WrongAnimal created\e[0m" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[1;32mWrongAnimal died\e[0m" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	_type = assign.getType();
	return *this;
}

std::string WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "\e[1;33m*weird screeches*\e[0m" << std::endl;
	return ;
}
