/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:52:29 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/04 23:01:00 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	print_separator(void)
{
	std::cout << "\e[1;37m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\e[0m" << std::endl;
}

int	main(void)
{
	Cat cat;
	Dog	dog;
	Dog	cats(dog);
	Cat	dogs(cat);
	Animal Test;

	print_separator();
	Test.makeSound();
	dog.makeSound();
	dogs.makeSound();
	cat.makeSound();
	cats.makeSound();
	print_separator();

	const Animal *animals;
	animals = new Animal[8];
	for (int i = 0; i < 8; i++)
		animals[i].makeSound();
	delete[] animals;

	print_separator();

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "\e[1;34m" << j->getType() << " \e[0m" << std::endl;
	std::cout << "\e[1;34m" << i->getType() << " \e[0m" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete	j;
	delete	i;
	delete	meta;
	return 0;
}
/*
int main()
{

}*/