/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:39:15 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 17:48:08 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(std::string type);
	Ice(Ice const & ice);
	virtual ~Ice();
	Ice& operator=(Ice const& assign);
	virtual AMateria*	clone(void) const;
	virtual void use(ICharacter& target);
};
#endif