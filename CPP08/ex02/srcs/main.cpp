/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:32:27 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/10 20:46:21 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	try
	{
		Array<char> a;
		std::cout << GREEN << a[0] << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << RED << e.what() << END << '\n';
	}
	try
	{
		Array<int>	a(10);
		a[0] = 42;
		Array<int>	b(a);
	
		std::cout << BLUE << a.getSize() << END << std::endl;
		std::cout << BLUE << b.getSize() << END << std::endl;
		std::cout << GREEN << a[0] << END << std::endl;
		std::cout << GREEN << b[0] << END << std::endl;
		a[-1];
	}
	catch(const std::exception& e){
		std::cerr << RED << e.what() << END << '\n';
	}
	try
	{
		Array<float>	a(10);
		a[1] = 42.42f;
		a[2] = 1.42f;
		Array<float>	b(a);
	
		std::cout << BLUE << a.getSize() << END << std::endl;
		std::cout << BLUE << b.getSize() << END << std::endl;
		std::cout << GREEN << a[1] << END << std::endl;
		std::cout << GREEN << b[1] << END << std::endl;
		std::cout << GREEN << a[2] << END << std::endl;
		std::cout << GREEN << b[2] << END << std::endl;
		a[-1];
	}
	catch(const std::exception& e){
		std::cerr << RED << e.what() << END << '\n';
	}
	return (0);
}