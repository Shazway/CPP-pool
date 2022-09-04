/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:21:35 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/04 18:33:11 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP
# include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
	public:
	FlagTrap();
	FlagTrap(std::string name);
	FlagTrap(FlagTrap const &copy);
	FlagTrap(std:: string name, int hitpoints, int energypoints, int attackdamage);
	~FlagTrap();
	FlagTrap & operator=(const FlagTrap &assign);
	void	attack(std::string const& target);
	void	highFivesGuys(void);
};
#endif