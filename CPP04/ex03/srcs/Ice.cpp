/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:51:20 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 22:15:50 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const &ice): AMateria("ice"){
	(void)ice;
	return ;
}

Ice::~Ice(){
	return ;
}

Ice&	Ice::operator=(Ice const &assign){
	(void) assign;
	return *this;
}

AMateria*	Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "\e[1;36m* shoots an icebolt at " << target.getName() << " *\e[1;0m" << std::endl;
}