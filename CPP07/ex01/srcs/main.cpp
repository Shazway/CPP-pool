/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:38:20 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/10 19:35:20 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include "Colors.hpp"

void	appendElem_non(std::string& a){
	a += " non";
}

void	appendElem_oui(std::string& a){
	a += " oui";
}

void	displayElem(std::string& str)
{
	std::cout << RED << "[" << str << "]" << END << std::endl;
}

void	incremElem(int &i){
	i++;
}

int	main(void)
{
	std::cout << GREEN << "Append tests and display" << END << std::endl;
	{
		std::string tab[4] = {"Yes", "No", "Yes", "No"};

		iter(tab, 4, displayElem);
		iter(tab, 4, appendElem_oui);
		iter(tab, 4, displayElem);
		iter(tab, 4, appendElem_non);
		iter(tab, 4, displayElem);
	}
	std::cout << GREEN << "Increment tests" << END << std::endl;
	{
		int	tab[4] = {1, 2, 3, 4};

		for (int i = 0; i < 4; i++)
			std::cout << BLUE << "[" << tab[i] << "]" << END;
		std::cout << std::endl;
		iter(tab, 4, incremElem);
		for (int i = 0; i < 4; i++)
			std::cout << BLUE << "[" << tab[i] << "]" << END;
		std::cout << std::endl;
	}
}