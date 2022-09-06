/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:40:20 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 22:17:43 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const& copy): AMateria("cure")
{
	(void)copy;
	return ;
}

Cure::~Cure()
{
	return ;
}

Cure& Cure::operator=(Cure const & assign){
	(void)assign;
	return *this;
}

AMateria*	Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "\e[1;35m* heals " << target.getName() << "'s wounds *\e[1;0m" << std::endl;
}
