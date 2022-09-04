/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:26:11 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/04 19:31:14 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Unknown guardian foe")
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "An unknown guardian foe just spawned" << std::endl;
}

ScavTrap::ScavTrap(std::string Name, int HitPoints, int EnergyPoints, int AttackDamage)
{
	this->_Name = Name;
	this->_HitPoints = HitPoints;
	this->_EnergyPoints = EnergyPoints;
	this->_AttackDamage = AttackDamage;
	std::cout << "\e[1;32mCustom ScavTrap created: " << this->_Name <<"\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "\e[1;32mGuardian of the name " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy.getName())
{
	_HitPoints = copy.getHitPoints();
	_EnergyPoints = copy.getEnergyPoints();
	_AttackDamage = copy.getAttackDamage();
	std::cout << "\e[1;32mGuardian clone created from " << this->_Name <<"\e[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[1;32m"<< this->_Name << " isn't feeling well, his end is near. . .\e[0m" << std::endl;
}

void	ScavTrap::attack(std::string const& target)
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

void	ScavTrap::guardGate()
{
	std::cout << "\e[1;36m" << this->_Name << " just entered Gate keeper mode" << std::endl;
}