/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:44:10 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/31 15:25:23 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
public:
	void	attack();
	Weapon	*getWeapon();
	void	setWeapon(Weapon &h_weapon);
	HumanA(std::string first_name, Weapon &first_weapon);
	~HumanA();
private:
	Weapon		*weapon;
	std::string	name;
};

#endif