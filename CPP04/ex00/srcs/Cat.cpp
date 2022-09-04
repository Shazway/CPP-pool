/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:35:10 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/04 22:49:01 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "\e[1;32mA cat has just spawned\e[0m" << std::endl;
	return ;
}

Cat::Cat(const Cat &copy)
{
	_type = copy.getType();
	std::cout << "\e[1;32mA cat clone has just spawned\e[0m" << std::endl;
	return ;
}

Cat::~Cat()
{
	std::cout << "\e[1;32mCat despawned\e[0m" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "\e[1;33mMeow !\e[0m" << std::endl;
}
