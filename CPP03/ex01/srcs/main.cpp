/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 00:12:39 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/03 21:38:31 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void	print_separator(void)
{
	std::cout << "\e[1;37m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\e[0m" << std::endl;
}

int	main(void)
{
	ClapTrap	Chef("Gusto", 200, 50, 30);
	ScavTrap	Rat("Remi");

	Rat.attack(Chef.getName());
	Chef.takeDamage(Rat.getAttackDamage());
	print_separator();
	std::cout << "\e[1;34m" << Chef.getName()
	<< " kicks the rat out of the kitchen and heals their wounds\e[0m" << std::endl;
	print_separator();
	Chef.attack(Rat.getName());
	Rat.takeDamage(Chef.getAttackDamage());
	Chef.beRepaired(Rat.getAttackDamage());
	print_separator();
	std::cout << "\e[1;34m" << Rat.getName()
	<< " decides to guard the door as he waits for " << Chef.getName() << std::endl;
	print_separator();
	Rat.guardGate();
}