/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:55:50 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 20:18:34 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(std::string type);
	Cure(Cure const& copy);
	virtual ~Cure();
	Cure&	operator=(Cure const & assign);
	virtual AMateria*	clone(void) const;
	virtual void use(ICharacter& target);
};
#endif