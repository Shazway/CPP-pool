/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:52:29 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 15:13:16 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

void	print_separator(void)
{
	std::cout << "\e[1;37m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\e[0m" << std::endl;
}

void	wrong_animals(void)
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongDog();
	const WrongAnimal* i = new WrongCat();

	print_separator();
	std::cout << "\e[1;34m" << j->getType() << " \e[0m" << std::endl;
	std::cout << "\e[1;34m" << i->getType() << " \e[0m" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	print_separator();
	delete	j;
	delete	i;
	delete	meta;
	print_separator();
}

int	main(void)
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();


	print_separator();
	std::cout << "\e[1;34m" << j->getType() << " \e[0m" << std::endl;
	std::cout << "\e[1;34m" << i->getType() << " \e[0m" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	print_separator();
	delete	j;
	delete	i;
	delete	meta;
	print_separator();
	wrong_animals();
	return 0;
}