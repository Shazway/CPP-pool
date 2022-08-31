/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:52:31 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/31 15:27:49 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (weapon == NULL)
		std::cout << name << " tries to attack, but has no weapon " << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

Weapon	*HumanB::getWeapon()
{
	return (weapon);
}

void	HumanB::setWeapon(Weapon &h_weapon)
{
	this->weapon = &h_weapon;
}

HumanB::HumanB(std::string human_name)
{
	weapon = NULL;
	this->name = human_name;
	return ;
}

HumanB::~HumanB(){
	return ;
}