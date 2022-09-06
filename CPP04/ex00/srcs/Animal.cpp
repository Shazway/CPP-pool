/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:30:48 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 14:57:23 by tmoragli         ###   ########.fr       */
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
	std::cout << "\e[1;32mAnimal clone created\e[0m" << std::endl;
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
std::string	Animal::getIdea(int index) const
{
	(void)index;
	std::cout << "Animal can't get ideas" << std::endl;
	return ("*whoosh nothing to be found here*");
}
void	Animal::setIdea(int index, std::string idea)
{
	(void)index;
	(void)idea;
	std::cout << "Animal can't set ideas" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "\e[1;33m*weird screeches*\e[0m" << std::endl;
	return ;
}
