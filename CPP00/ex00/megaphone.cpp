/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:07:53 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/29 01:33:10 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	str_arr_print_maj(char **av, int ac)
{
	std::string arg;

	for (int i = 1; i < ac; i++)
	{
		arg = av[i];
		for (size_t j = 0; j < arg.size(); j++)
			arg[j] = std::toupper(arg[j]);
		std::cout << arg;
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
		return(str_arr_print_maj(av, ac));
}