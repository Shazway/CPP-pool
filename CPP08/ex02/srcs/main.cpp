/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 22:26:21 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/11 22:52:44 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "MutantStack.hpp"
#include <list>

void	print_separator(void)
{
	std::cout << WHITE << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << END << std::endl;
}

void iteratorsTests(MutantStack<int> &mstack, std::list<int> &lst)
{
	std::cout << GREEN << "Normal iterators test: " << END << std::endl;
	std::cout << GREEN << "Mutant stack iteration: " << END << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin() ; it != mstack.end() ; it++)
		std::cout << BLUE << "[" << *it << "]" << " ";
	std::cout << END << std::endl;
	print_separator();
	std::cout << YELLOW << "List iterators test: " << END << std::endl;
	for (std::list<int>::iterator it = lst.begin() ; it != lst.end() ; it++)
		std::cout << BLUE << "[" << *it << "]" << " ";
	std::cout << END << std::endl;
	print_separator();
	std::cout << MAGENTA << "Reverse iterators test: " << END << std::endl;
	std::cout << GREEN << "Mutant stack iteration: " << END << std::endl;
	for (MutantStack<int>::reverse_iterator it = mstack.rbegin() ; it != mstack.rend() ; it++)
		std::cout << BLUE << "[" << *it << "]" << " ";
	std::cout << END << std::endl;
	print_separator();
	std::cout << YELLOW << "List iterators test: " << END << std::endl;
	for (std::list<int>::reverse_iterator it = lst.rbegin() ; it != lst.rend() ; it++)
		std::cout << BLUE << "[" << *it << "]" << " ";
	std::cout << END << std::endl;
	print_separator();
}

int	main()
{
	MutantStack<int>	stack;

	print_separator();
	std::cout << GREEN << "Adding elements to the stack" << END << std::endl;
	for (int index = 0; index < 10; index++)
		stack.push(index);
	std::cout << BLUE << "Top of stack is: " << stack.top() << END << std::endl;
	print_separator();
	std::cout << RED << "Size before pop: " << stack.size() << END << std::endl;
	print_separator();
	stack.pop();
	std::cout << RED << "Size after pop: " << stack.size() << END << std::endl;
	print_separator();

	std::list<int>	lst;
	std::cout << GREEN << "Adding elements to the list" << END << std::endl;
	for (int index = 0; index < 10; index++)
		lst.push_back(index);
	std::cout << RED << "Size before pop: " << lst.size() << END << std::endl;
	print_separator();
	lst.pop_back();
	std::cout << RED << "Size after pop: " << lst.size() << END << std::endl;
	print_separator();
	iteratorsTests(stack, lst);
}