/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:07:53 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/28 22:48:39 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	str_arr_print_maj(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av && av[++i])
		for (j = 0; av && av[i][j];)
			std::cout << (char)std::toupper(av[i][j++]);
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