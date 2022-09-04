/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:16:13 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/04 19:41:51 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Name("Unknown foe")
{
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	std::cout << "\e[1;32mClapTrap created\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _Name(name)
{
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	std::cout << "\e[1;32mClapTrap: "<< this->_Name << " created\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): _Name(copy.getName())
{
	_EnergyPoints = copy.getEnergyPoints();
	_AttackDamage = copy.getAttackDamage();
	std::cout << "\e[1;32mClapTrap clone created from " << this->_Name <<"\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string Name, int HitPoints, int EnergyPoints, int AttackDamage): _Name(Name)
{
	_HitPoints = HitPoints;
	_EnergyPoints = EnergyPoints;
	_AttackDamage = AttackDamage;
	std::cout << "\e[1;32mCustom ClapTrap created: " << this->_Name <<"\e[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[1;32m"<< this->_Name << " dissapeared in thin air...\e[0m" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_HitPoints = assign.getHitPoints();
	_EnergyPoints = assign.getEnergyPoints();
	_AttackDamage = assign.getAttackDamage();
	return (*this);
}

std::string ClapTrap::getName() const
{
	return (_Name);
}

int ClapTrap::getHitPoints() const
{
	return (_HitPoints);
}

int ClapTrap::getEnergyPoints() const
{
	return (_EnergyPoints);
}

int ClapTrap::getAttackDamage() const
{
	return (_AttackDamage);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_HitPoints -= amount;
	if (this->_HitPoints <= 0)
	{
		std::cout << "\e[1;33m" << this->_Name << " is dead (their health points wont go lower)\e[0m" << std::endl;
		this->_HitPoints = 0;
	}
	else
		std::cout << "\e[1;37m" << this->_Name << " just took " << amount << " damage, " << this->_HitPoints
					<< " HP left\e[0m" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HitPoints == 0)
		std::cout << "\e[1;31m" << this->_Name << " is dead, can't repair\e[0m" << std::endl;
	else if (this->_EnergyPoints == 0)
		std::cout << "\e[1;33mNo energy left for " << this->_Name << " can't repair \e[0m" << std::endl;
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		this->_EnergyPoints--;
		this->_HitPoints += amount;
		std::cout << "\e[1;33m" << this->_Name << " is repairing . . . Done! + " << amount << " HP\e[0m" << std::endl;
		if (this->_EnergyPoints == 0)
			std::cout << this->_Name << " just used their last energy point to repair" << std::endl;
	}
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_HitPoints == 0)
		std::cout << this->_Name << " is dead... can't attack " << target << std::endl;
	else if (this->_EnergyPoints == 0)
		std::cout << "\e[1;33m" << this->_Name << " has no energy to attack " << target << "\e[0m" << std::endl;
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		std::cout << "\e[1;31m"<< this->_Name << " attacks " << target << " for " 
				<< this->_AttackDamage << " attack damage\e[0m" << std::endl;
		this->_EnergyPoints--;
		if (this->_EnergyPoints == 0)
			std::cout << "\e[1;33m" << this->_Name << " won't be able to attack next time, they should rest\e[0m" << std::endl;
	}
	return ;
}