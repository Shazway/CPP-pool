/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:30:48 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 15:18:34 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Random animal";
	std::cout << "\e[1;32mAnimal created\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	_type = copy.getType();
	std::cout << "\e[1;32mCopy of Animal created\e[0m" << std::endl;
}

Animal::Animal(std::string name)
{
	_type = name;
	std::cout << "\e[1;32mCustom Animal created\e[0m" << std::endl;
}

Animal::~Animal()
{
	std::cout << "\e[1;32mAnimal died\e[0m" << std::endl;
}

Animal & Animal::operator=(const Animal &assign)
{
	_type = assign.getType();
	return *this;
}

std::string Animal::getType() const
{
	return _type;
}

void Animal::setIdea(int index, std::string idea)
{
	std::cout << "\e[1;33mAnimals can't set an idea\e[0m" << std::endl;
	(void)index;
	(void)idea;
}
std::string Animal::getIdea(int index) const
{
	(void)index;
	std::cout << "\e[1;33mNo ideas for Animal\e[0m" << std::endl;
	return " ";
}

void Animal::makeSound() const
{
	std::cout << "\e[1;33m*weird screeches*\e[0m" << std::endl;
	return ;
}
