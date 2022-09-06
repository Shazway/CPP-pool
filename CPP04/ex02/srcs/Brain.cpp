/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:40:47 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/05 18:07:37 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "\e[1;35meat\e[0m";
	std::cout << "\e[1;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy.getIdea(i);
	std::cout << "\e[1;33mCopy Constructor called of Brain\e[0m" << std::endl;
}

Brain::~Brain()
{
	std::cout << "\e[1;31mDestructor called of Brain\e[0m" << std::endl;
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 0 && index <= 100)
		return (this->_ideas[index]);
	else
		std::cout << "Cat brainfry. . ." << std::endl;
	return ("*wooosh* no ideas here");
}

void Brain::setIdea(int index, std::string idea)
{
	if (index >= 0 && index <= 100)
		this->_ideas[index] = idea;
	else
		std::cout << "Cat brainfry. . ." << std::endl;
}

Brain & Brain::operator=(const Brain &assign)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = assign.getIdea(i);
	return *this;
}
