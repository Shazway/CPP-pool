/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:52:40 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/31 15:21:52 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
public:
	void	attack();
	void	setWeapon(Weapon &h_weapon);
	Weapon	*getWeapon();
	HumanB(std::string human_name);
	~HumanB();
private:
	std::string	name;
	Weapon		*weapon;
};

#endif