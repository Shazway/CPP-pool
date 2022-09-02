/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:58:11 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/02 23:38:24 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("giga club");
	bob.attack();
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("goblin club");
	jim.attack();
	Weapon dagger = Weapon("silver dagger");
	jim.setWeapon(dagger);
	jim.attack();
	bob.setWeapon(dagger);
	dagger.setType("poison dagger");
	bob.attack();
	return (0);
}