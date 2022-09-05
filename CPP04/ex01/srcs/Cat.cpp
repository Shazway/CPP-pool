/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:35:10 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/05 18:06:39 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_catBrain = new Brain();
	std::cout << "\e[1;32mA cat has just spawned\e[0m" << std::endl;
	return ;
}

Cat::Cat(const Cat &copy)
{
	_type = copy.getType();
	*(this->_catBrain) = *(copy._catBrain);
	std::cout << "\e[1;32mA cat clone has just spawned\e[0m" << std::endl;
	return ;
}

Cat::~Cat()
{
	delete this->_catBrain;
	std::cout << "\e[1;32mCat despawned\e[0m" << std::endl;
}

Cat&	Cat::operator=(Cat const& cat)
{
	this->_type = cat._type;
	*(this->_catBrain) = *(cat._catBrain);
	return *this;
}

Brain* Cat::getBrain() const
{
	return (this->_catBrain);
}

void Cat::setIdea(int index, std::string idea)
{
	this->_catBrain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	return (this->_catBrain->getIdea(index));
}


void Cat::makeSound() const
{
	std::cout << "\e[1;33mMeow !\e[0m" << std::endl;
}
