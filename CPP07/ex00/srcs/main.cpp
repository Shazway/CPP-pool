/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:09:41 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/10 18:46:54 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"
#include "Colors.hpp"

void	print_separator(void)
{
	std::cout << WHITE << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << END << std::endl;
}

int	main(void)
{
	int	n1 = 42;
	int n2 = -42;

	print_separator();
	std::cout << BLUE << "n1 = " << n1 << " n2 = " << n2 << END << std::endl;
	::swap(n1, n2);
	std::cout << BLUE << "n1 = " << n1 << " n2 = " << n2 << END << std::endl;
	print_separator();
	std::cout << RED << "The smallest of n1(" << n1 << ")" << " and n2(" << n2 << ")"
	<< " is: " << ::min(n1, n2) << END << std::endl;
	print_separator();
	std::cout << GREEN << "The biggest of n1(" << n1 << ")" << " and n2(" << n2 << ")"
	<< " is: " << ::max(n1, n2) << END << std::endl;
	print_separator();

	std::string a = "I am a";
	std::string b = "I am b";

	std::cout << BLUE << "a = " << a << " b = " << b << END << std::endl;
	::swap(a, b);
	std::cout << BLUE << "a = " << a << " b = " << b << END << std::endl;
	print_separator();
	std::cout << RED << "The smallest of a(" << a << ")" << " and b(" << b << ")"
	<< " is: " << ::min(a, b) << END << std::endl;
	print_separator();
	std::cout << GREEN << "The biggest of a(" << a << ")" << " and b(" << b << ")"
	<< " is: " << ::max(a, b) << END << std::endl;
	print_separator();

	char c = 42;
	char d = 52;

	std::cout << BLUE << "c = " << c << " d = " << d << END << std::endl;
	::swap(c, d);
	std::cout << BLUE << "c = " << c << " d = " << d << END << std::endl;
	print_separator();
	std::cout << RED << "The smallest of c(" << c << ")" << " and d(" << d << ")"
	<< " is: " << ::min(c, d) << END << std::endl;
	print_separator();
	std::cout << GREEN << "The biggest of c(" << c << ")" << " and d(" << d << ")"
	<< " is: " << ::max(c, d) << END << std::endl;
	print_separator();

	
	return (0);
}