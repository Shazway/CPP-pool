/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:55:36 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/30 22:59:26 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string z_name)
{
	this->name = z_name;
}

Zombie::Zombie()
{
	std::cout << "A zombie just spawned" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " died" << std::endl;
	return ;
}