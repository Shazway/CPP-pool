/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:35:10 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/04 22:49:11 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "\e[1;32mA Dog has just spawned\e[0m" << std::endl;
	return ;
}

Dog::Dog(const Dog &copy)
{
	_type = copy.getType();
	std::cout << "\e[1;32mA Dog clone has just spawned\e[0m" << std::endl;
	return ;
}

Dog::~Dog()
{
	std::cout << "\e[1;32mDog despawned\e[0m" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "\e[1;33mWoof !\e[0m" << std::endl;
}
