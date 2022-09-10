/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 21:31:24 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/09 22:04:37 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Colors.hpp"
#include "unistd.h"
Base*	generate(void)
{
	srand(time(NULL));
	int	random = rand() % 100 + 1;

	if (random <= 33)
		return (new A);
	if (random > 33 && random <= 66)
		return (new B);
	if (random > 66)
		return (new C);
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != 0)
		std::cout << GREEN << "The type is A!" << END << std::endl;
	if (dynamic_cast<B*>(p) != 0)
		std::cout << RED << "The type is B!" << END << std::endl;
	if (dynamic_cast<C*>(p) != 0)
		std::cout << BLUE << "The type is C!" << END << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << GREEN << "The type is A!" << END << std::endl;
		return ;
	}
	catch(std::exception &e){
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << RED << "The type is B!" << END << std::endl;
		return ;
	}
	catch(std::exception &e){
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << BLUE << "The type is C!" << END << std::endl;
	}
	catch(std::exception &e){
	}
}

int	main()
{
	Base*	base;

	base = generate();
	identify(base);
	delete base;
	//----Uncomment for un maximum de fun----//
	/*for (int i = 0; i < 20; i++)
	{
		base = generate();
		identify(base);
		delete base;
		sleep(1);
	}*/
	return (0);
}