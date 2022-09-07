/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:30:55 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 21:04:20 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Colors.hpp"

void	print_separator(void)
{
	std::cout << "\e[1;37m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\e[0m" << std::endl;
}

int main()
{
	print_separator();
	try
	{
		Bureaucrat	oui("oui", 12);
		Bureaucrat	non("non", 13);
		Form		form("oui", 150, 12);

		form.beSigned(oui);
		form.beSigned(non);
	}
	catch(const std::exception& e)
		{std::cerr << GREEN << e.what() << END << std::endl;}
	print_separator();
	try
	{
		Bureaucrat	oui("oui", 11);
		Form		form("random sheet", 1, 11);
	
		oui.signForm(form);
		oui.signForm(form);
	}
	catch(const std::exception& e)
		{std::cerr << GREEN << e.what() << END << std::endl;}
	print_separator();
	try
	{
		Form	form("Too high", 0, 0);
	}
	catch(const std::exception& e)
		{std::cerr << GREEN << e.what() << END << std::endl;}
	print_separator();
	try
	{
		Form	form("Too low", 151, 151);
	}
	catch(const std::exception& e)
		{std::cerr << GREEN << e.what() << END << std::endl;}
	print_separator();
}