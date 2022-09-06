/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:14:15 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 14:51:23 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
	this->_type = "WrongDog";
	std::cout << "\e[1;32mA WrongDog has just spawned\e[0m" << std::endl;
	return ;
}

WrongDog::WrongDog(const WrongDog &copy) : WrongAnimal()
{
	_type = copy.getType();
	std::cout << "\e[1;32mA WrongDog clone has just spawned\e[0m" << std::endl;
	return ;
}

WrongDog::~WrongDog()
{
	std::cout << "\e[1;32mWrongDog despawned\e[0m" << std::endl;
}

void WrongDog::makeSound() const
{
	std::cout << "\e[1;33mMeow !\e[0m" << std::endl;
}
