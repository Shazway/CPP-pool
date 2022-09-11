/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:41:06 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/11 21:51:11 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "Colors.hpp"

void	print_separator(void)
{
	std::cout << WHITE << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << END << std::endl;
}

void exceptionsTests()
{
	Span n(100000);
	Span small(2);

	std::cout << RED << "Trying to find in empty span" << END << std::endl;
	try
	{
		int longestSpan = n.longestSpan();
		std::cout << GREEN << "Longest Span is " << longestSpan << END << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	try
	{
		int shortestSpan = n.shortestSpan();
		std::cout << GREEN << "Shortest Span is " << shortestSpan << END << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	std::cout << RED << "Trying to add too many nb" << END << std::endl;
	try
	{
		small.addNumber(42);
		small.addNumber(42);
		small.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
}

void basicTest()
{
	int		size = 10000;
	Span n(size);
	std::vector<int> test;

	test.push_back(42);
	test.push_back(4242);
	test.push_back(424242);
	test.push_back(42424242);
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		try
		{
			n.addNumber(rand() % (size));
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	n.addNumber(test.begin(), test.end());
	n.printArray();
	std::cout << GREEN << "Longest Span is " << n.longestSpan() << END << std::endl;
	std::cout << GREEN << "Shortest Span is " << n.shortestSpan() << END << std::endl;
}

void SubjectTest()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int		main(void)
{
	print_separator();
	std::cout << BLUE << "Exception throws" << END << std::endl;
	exceptionsTests();
	print_separator();
	std::cout << BLUE << "Basic tests" << END << std::endl;
	basicTest();
	print_separator();
	std::cout << BLUE << "Subject tests" << END << std::endl;
	SubjectTest();
	print_separator();
	return (0);
}