/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:16:17 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/04 19:30:27 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(std::string Name, int HitPoints, int EnergyPoints, int AttackDamage);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();
	ScavTrap & operator=(const ScavTrap &assign);
	void	attack(std::string const& target);
	void	guardGate();
};
#endif