/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:13:30 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/30 22:59:00 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string z_name)
{
	Zombie	*horde;

	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(z_name);
		horde->announce();
	}
	return (horde);
}
