/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:30:55 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 17:52:35 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat douchebag("Douchebag", 41);
		Bureaucrat	bob("Bob", 42);

		std::cout << bob << std::endl;
		std::cout << douchebag << std::endl;
		std::cout << BLUE << "Bob i'll downgrade you cause i feel like it"
		<< END << std::endl;
		std::cout << BLUE << "*Accidentally upgrades him twice...*"
		<< END << std::endl;
		bob.upGrade();
		bob.upGrade();
		std::cout << bob << std::endl;
		std::cout << RED << "Bob sees this as an opportunity for vengeance!"
		<< END << std::endl;
		while (douchebag.getGrade() < 150)
			douchebag.downGrade();
		std::cout << douchebag << std::endl;
		std::cout << RED << "As Bob was just about to downgrade him even more! Beyond possible grades !"
		<< END << std::endl;
		douchebag.downGrade(); // Comment to see the next display
		std::cout << YELLOW << "----------TEST-------------" << END << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << GREEN << e.what() << END << std::endl;
	}
	try
	{
		Bureaucrat	bob("Bob", 42);
		std::cout << GREEN << "Some divinity is about to upgrade bob to the highest tier and BEYOND !"
		<< END << std::endl;
		while (bob.getGrade() > 1)
			bob.upGrade();
		std::cout << bob << std::endl;
		bob.upGrade(); // Comment to see the next display
		std::cout << YELLOW << "----------TEST-------------" << END << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << GREEN << e.what() << END << std::endl;
	}
	try
	{
		Bureaucrat trash("trash", 1500); // Comment to see the next display
		Bureaucrat trash2("trash2", 15);
		std::cout << RED << trash2 << END << std::endl;
		std::cout << YELLOW << "----------TEST-------------" << END << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << GREEN << e.what() << END << std::endl;
	}
}