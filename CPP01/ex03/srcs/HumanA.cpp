/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:46:43 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/31 15:25:21 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

Weapon	*HumanA::getWeapon()
{
	return (this->weapon);
}

void	HumanA::setWeapon(Weapon &h_weapon)
{
	this->weapon = &h_weapon;
}

HumanA::HumanA(std::string first_name, Weapon &first_weapon) : weapon(&first_weapon)
{
	this->name = first_name;
	return ;
}

HumanA::~HumanA(){
	return ;
}
