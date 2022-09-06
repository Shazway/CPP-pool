/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:35:10 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 14:41:41 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_dogBrain = new Brain();
	std::cout << "\e[1;32mA Dog has just spawned\e[0m" << std::endl;
	return ;
}

Dog::Dog(const Dog &copy) : Animal()
{
	_type = copy.getType();
	this->_dogBrain = new Brain();
	*(this->_dogBrain) = *(copy._dogBrain);
	std::cout << "\e[1;32mA Dog clone has just spawned\e[0m" << std::endl;
	return ;
}

Dog::~Dog()
{
	delete this->_dogBrain;
	std::cout << "\e[1;32mDog despawned\e[0m" << std::endl;
}

Dog&	Dog::operator=(Dog const& Dog)
{
	this->_type = Dog._type;
	*(this->_dogBrain) = *(Dog._dogBrain);
	return *this;
}

Brain* Dog::getBrain() const
{
	return (this->_dogBrain);
}

void Dog::setIdea(int index, std::string idea)
{
	this->_dogBrain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	return (this->_dogBrain->getIdea(index));
}

void Dog::makeSound() const
{
	std::cout << "\e[1;33mWoof !\e[0m" << std::endl;
}
