/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:21:35 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/03 22:24:36 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP
# include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
	FmagTrap();
	FmagTrap(std::string name);
	FmagTrap(FmagTrap const &copy);
	FmagTrap(std:: string name, int hitpoints, int energypoints, int attackdamage);
	~FmagTrap();
	FmagTrap & operator=(const FmagTrap &assign);
	void	attack(std::string const& target);
	void	highFivesGuys(void);
};