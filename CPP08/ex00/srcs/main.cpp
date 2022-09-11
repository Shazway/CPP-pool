/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:33:27 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/11 18:55:41 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>
#include <list>
#include "Colors.hpp"
#include "easyfind.hpp"

void	print_separator(void)
{
	std::cout << WHITE << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << END << std::endl;
}

int main()
{
	print_separator();
	std::cout << GREEN << "Creation of vector" << END << std::endl;
	std::vector<int>	v;

	for (int i = 0; i < 10; i++)
		v.push_back(i + 42);
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
		std::cout << BLUE << "[" << *i << "]" << END << std::endl;
	std::cout << GREEN << "Easy find tries to find 42: "
	<< easyfind(v, 42) << std::endl;
	std::cout << "Easy find tries to find 47: "
	<< easyfind(v, 47) << END << std::endl;
	std::cout << GREEN << "Easy find tries to find 7: " << END << std::endl;
	if (easyfind(v, 7) == -1)
		std::cout << RED << "Element not found in vector" << END << std::endl;
	else
		std::cout << RED << "Element found in vector" << END << std::endl;
	print_separator();

	std::cout << GREEN << "Creation of list" << END << std::endl;
	std::list<int>	l;

	for (int i = 0; i < 10; i++)
		l.push_back(42 + i);
	for (std::list<int>::iterator i = l.begin(); i != l.end(); i++)
		std::cout << BLUE << "[" << *i << "]" << END << std::endl;
	std::cout << GREEN << "Easy find tries to find 42: "
	<< easyfind(l, 42) << std::endl;
	std::cout << "Easy find tries to find 47: "
	<< easyfind(l, 47) << END << std::endl;
	std::cout << GREEN << "Easy find tries to find 7: " << END << std::endl;
	if (easyfind(l, 7) == -1)
		std::cout << RED << "Element not found in list" << END << std::endl;
	else
		std::cout << RED << "Element found in list" << END << std::endl;
	print_separator();
	return (0);
}