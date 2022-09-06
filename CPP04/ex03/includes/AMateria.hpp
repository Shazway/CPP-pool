/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:36:00 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 20:19:32 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria();
	AMateria(AMateria const & copy);
	virtual ~AMateria();
	AMateria(std::string const & type);
	std::string	const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	AMateria&	operator=(AMateria const& materia);
};

#endif