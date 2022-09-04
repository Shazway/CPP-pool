/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:24:39 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/04 19:10:16 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(): ClapTrap("Unknown guardian foe")
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "An uknown flag foe just spawned" << std::endl;
}

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "\e[1;32mFlag of the name " << name << " created" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &copy): ClapTrap(copy.getName())
{
	_HitPoints = copy.getHitPoints();
	_EnergyPoints = copy.getEnergyPoints();
	_AttackDamage = copy.getAttackDamage();
	std::cout << "\e[1;32mFlag clone created from " << this->_Name <<"\e[0m" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "\e[1;32m"<< this->_Name << " has been flagged for destruction. . .\e[0m" << std::endl;
}

void	FlagTrap::attack(std::string const& target)
{
	if (this->_HitPoints == 0)
		std::cout << this->_Name << " is dead... can't flag " << target << std::endl;
	else if (this->_EnergyPoints == 0)
		std::cout << "\e[1;33m" << this->_Name << " is exhausted, can't flag " << target << "\e[0m" << std::endl;
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "\e[1;31m"<< this->_Name << " flags " << target << " for "
				<< this->_AttackDamage << " attack damage\e[0m" << std::endl;
		this->_EnergyPoints--;
		if (this->_EnergyPoints == 0)
			std::cout << "\e[1;33m" << this->_Name << " won't be able to flag next time, they should rest\e[0m" << std::endl;
	}
}

void	FlagTrap::highFivesGuys()
{
	std::cout << "\e[1;36m" << this->_Name << " raises their hand for a high fives\e[0m" << std::endl;
}