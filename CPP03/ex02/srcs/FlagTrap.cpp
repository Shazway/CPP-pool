/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:24:39 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/03 22:28:33 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(): ClapTrap("Unknown guardian foe")
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "An unknown guardian foe just spawned" << std::endl;
}

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "\e[1;32mGuardian of the name " << name << " created" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &copy): ClapTrap(copy.getName())
{
	_HitPoints = copy.getHitPoints();
	_EnergyPoints = copy.getEnergyPoints();
	_AttackDamage = copy.getAttackDamage();
	std::cout << "\e[1;32mGuardian clone created from " << this->_Name <<"\e[0m" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "\e[1;32m"<< this->_Name << " isn't feeling well, his end is near. . .\e[0m" << std::endl;
}

void	FlagTrap::attack(std::string const& target)
{
	if (this->_HitPoints == 0)
		std::cout << this->_Name << " is dead... can't strike " << target << std::endl;
	else if (this->_EnergyPoints == 0)
		std::cout << "\e[1;33m" << this->_Name << " is exhausted, can't strike " << target << "\e[0m" << std::endl;
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "\e[1;31m"<< this->_Name << " strikes " << target << " for "
				<< this->_AttackDamage << " attack damage\e[0m" << std::endl;
		this->_EnergyPoints--;
		if (this->_EnergyPoints == 0)
			std::cout << "\e[1;33m" << this->_Name << " won't be able to strike next time, they should rest\e[0m" << std::endl;
	}
}

void	FlagTrap::highFivesGuys()
{
	std::cout << "\e[1:36m" << this->_Name << " raises their hand for a high fives\e|0m" << std::endl;
}