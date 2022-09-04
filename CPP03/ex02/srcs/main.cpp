/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 00:12:39 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/04 19:29:14 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FlagTrap.hpp"

void	print_separator(void)
{
	std::cout << "\e[1;37m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\e[0m" << std::endl;
}

int	main(void)
{
	ClapTrap	Arisu("Arisu", 100, 100, 10);
	ScavTrap	Karube("Karube", 100, 50, 50);
	FlagTrap	Chota("Chota");
	ScavTrap	Villain;

	print_separator();
	std::cout << "\e[1;34m" << Arisu.getName() << " joins " << Karube.getName() << " for a drink\e[0m" << std::endl;
	std::cout << "\e[1;34m" << "As they get together they spot a man going into a SUPER SECRET DOOR\e[0m" << std::endl;
	std::cout << "\e[1;34m" << "They want to see what's up so " 
	<< Karube.getName() << " wants to get guard the door while " << Arisu.getName() << " lockpicks the door\e[0m" << std::endl;
	print_separator();
	Karube.guardGate();
	print_separator();
	Arisu.attack("SUPER SECRET DOOR");
	std::cout << "\e[1;37m*Door opens*\e[0m" << std::endl;
	Villain.guardGate();
	print_separator();
	std::cout << "\e[1;34m" << Chota.getName()
	<< " is seen attached to a chair in the middle of the room" << std::endl;
	print_separator();
	Villain.attack("Arisu");
	Arisu.takeDamage(Villain.getAttackDamage());
	Karube.attack(Villain.getName());
	Villain.takeDamage(Karube.getAttackDamage());
	Karube.attack(Villain.getName());
	Villain.takeDamage(Karube.getAttackDamage());
	Karube.attack(Villain.getName());
	Villain.takeDamage(Karube.getAttackDamage());
	print_separator();
	std::cout << "\e[1;34m" << Karube.getName() << " that's enough ! Said " << Arisu.getName() << "\e[0m" << std::endl;
	std::cout << "\e[1;34mThey then detach Chota from the chair\e[0m" <<std::endl;
	std::cout << "\e[1;34mTHANK YOU SO MUCH ! Screams " << Chota.getName() << "\e[0m" << std::endl;
	print_separator();
	Chota.highFivesGuys();
}