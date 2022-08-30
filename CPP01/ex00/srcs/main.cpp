/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:34:37 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/30 21:59:59 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie patrick("patrick");
	Zombie *terence;

	patrick.announce();
	terence = newZombie("terence");
	randomChump("Dr.Mundo");
	delete terence;
	return (0);
}