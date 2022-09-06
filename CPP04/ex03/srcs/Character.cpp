/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:08:28 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 22:54:49 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Colors.hpp"

Character::Character(): _inventory()
{
	_nbMateria = 0;
	_name = "Unknown protagonist";
}

Character::Character(std::string const& name): _inventory()
{
	_nbMateria = 0;
	_name = name;
}

Character::Character(Character const & character)
{
	*(this) = character;
	return ;
}

Character::~Character()
{
	if (_nbMateria > 0)
	{
		for (int i = 0; i < 4; i++)
			delete _inventory[i];
	}
}

std::string	const&	Character::getName() const
{
	return (_name);
}

Character& Character::operator=(Character const &character)
{
//Delete inventory before copy
	if (_nbMateria > 0)
	{
		for (int i = 0; _nbMateria && i < 4; i++)
			delete _inventory[i];
	}
//Copy Name
	_name = character._name;
//Clone inventory (/!\ deep copy)
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = character._inventory[i]->clone();
//Copy number of Materias
	_nbMateria = character._nbMateria;
	return (*this);
}

void	Character::equip(AMateria *materia)
{
	if (_nbMateria == 4)
	{
		std::cout << RED
		<< "Too many objects in " << _name << "'s inventory..."
		<< END << std::endl;
		delete materia;
		return ;
	}
	if (materia == NULL)
		std::cout << RED << "Materia doesn't exist.. can't equip" << END << std::endl;
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i] == NULL)
			{
				_inventory[i] = materia;
				std::cout << BLUE
				<< "Successfully added " << materia->getType() << " to " << _name << "'s inventory"
				<< END << std::endl;
				_nbMateria++;
				break ;
			}
		}
	}
	return ;
}

void	Character::unequip(int index)
{
	if (index >= 0 && index <= 3 && _nbMateria > 0)
	{
		std::cout << BLUE
		<< "Successfully unequipped " << _inventory[index]->getType()
		<< " from " << index << " inventory slot" << END << std::endl;
		_inventory[index] = NULL;
		_nbMateria--;
	}
	else if (index < 0 || index > 3)
		std::cout << RED << "Index outside of inventory size, cannot unequip" << END << std::endl;
	else if (_nbMateria <= 0)
		std::cout << RED << "No materias to unequip" << END << std::endl;
	return ;
}

void	Character::use(int index, ICharacter& target)
{
	if (index < 0 || index > 4 || _inventory[index] == NULL)
		std::cout << RED << "Index outside of inventory size, cannot use" << END << std::endl;
	else
		_inventory[index]->use(target);
	return ;
}