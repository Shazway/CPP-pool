/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:48:29 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 23:22:39 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	int			_nbMateria;
	AMateria*	_inventory[4];
public:
	Character();
	Character(std::string const& name);
	Character(Character const & character);
	virtual ~Character();
	Character& operator=(Character const & character);
	std::string	const &getName() const;
	void		equip(AMateria *materia);
	void		unequip(int index);
	void		use(int index, ICharacter& target);
};
#endif