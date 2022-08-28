/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:07:53 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/28 21:26:12 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	str_arr_print_maj(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av && av[i])
	{
		j = 0;
		while (av && av[i][j])
		{
			if (std::islower(av[i][j]))
			{
				av[i][j] -= 32;
				std::cout << av[i][j];
			}
			else
				std::cout << av[i][j];
			j++;
		}
		i++;
		if (av[i])
			std::cout << ' ';
	}
	std::cout << std::endl;
	return (0);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
		return(str_arr_print_maj(av));
}