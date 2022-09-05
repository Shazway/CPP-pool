/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:11:39 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/05 15:12:06 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "\e[1;32mA WrongCat has just spawned\e[0m" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	_type = copy.getType();
	std::cout << "\e[1;32mA WrongCat clone has just spawned\e[0m" << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "\e[1;32mWrongCat despawned\e[0m" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "\e[1;33mMeow !\e[0m" << std::endl;
}
