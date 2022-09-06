/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:05:10 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 22:04:48 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	return ;
}

AMateria::AMateria(std::string const& type): _type(type)
{
	return ;
}

AMateria::AMateria(AMateria const& copy)
{
	*this = copy;
	return ;
}

AMateria::~AMateria(){
	return ;
}

AMateria&	AMateria::operator=(AMateria const& assign)
{
	(void)assign;
	return (*this);
}

std::string	const& AMateria::getType() const
{
	return (_type);
}
void	AMateria::use(ICharacter& target)
{
	(void)target;
	return ;
}