/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 00:12:39 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/03 01:45:01 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	print_separator(void)
{
	std::cout << "\e[1;37m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\e[0m" << std::endl;
}

int	main(void)
{
	ClapTrap	Rogue("Rogue", 50, 3, 20);
	ClapTrap	Ninja("Ninja", 50, 2, 20);
	ClapTrap	Unknown;
	ClapTrap	Giant_Spider("Spider lvl 999", 100, 1, 999);
	ClapTrap	kid("kiddo");
	ClapTrap	Test(kid);

	std::cout << "\e[1;34mAs the " << Rogue.getName() << " and the " << Ninja.getName()
			<< " roamed around exhausted, they stumbled across a " << Giant_Spider.getName()
			<< " but wait ! There is a " << kid.getName() << " held hostage" << std::endl;
	std::cout << "They should go and save them !\e[0m" << std::endl;
	print_separator();
	Ninja.attack(Giant_Spider.getName());
	Giant_Spider.takeDamage(Ninja.getAttackDamage());
	Rogue.attack(Giant_Spider.getName());
	Giant_Spider.takeDamage(Rogue.getAttackDamage());
	Ninja.attack(Giant_Spider.getName());
	Giant_Spider.takeDamage(Ninja.getAttackDamage());
	Rogue.attack(Giant_Spider.getName());
	Giant_Spider.takeDamage(Rogue.getAttackDamage());
	print_separator();
	std::cout << "\e[1;34mThe " << Rogue.getName() << " and the " << Ninja.getName()
			<< " just did a perfect double slash combo !" 
			<< " The spider seems like it's taking big hits..." << std::endl;
	std::cout << "But, as the Ninja is about to attack...\e[0m" << std::endl;
	print_separator();
	Ninja.attack(Giant_Spider.getName());
	Giant_Spider.attack("Ninja");
	Ninja.takeDamage(Giant_Spider.getAttackDamage());
	print_separator();
	std::cout << "\e[1;34mNOOOOO !"
		<< "\nScreams the Rogue, furious, he deals the final blow and saves the kiddo\e[0m" << std::endl;
	print_separator();
	Rogue.attack(Giant_Spider.getName());
	Giant_Spider.takeDamage(Rogue.getAttackDamage());
	print_separator();
	std::cout << "\e[1;34mBUT, right before untangling the " << kid.getName() << " from the cobwebs "
			 << " an " << Unknown.getName() << " kidnaps them...\n" << "To be continued...\e[0m" << std::endl;
	print_separator();
}