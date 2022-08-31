/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:40:14 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/31 14:45:17 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string weapon)
{
	this->type = weapon;
}

Weapon::Weapon(std::string weapon_type)
{
	this->type = weapon_type;
	return ;
}

Weapon::~Weapon(){
	return ;
}