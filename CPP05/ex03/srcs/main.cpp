/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:30:55 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/08 03:41:48 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Colors.hpp"
#include "Intern.hpp"

void	print_separator(void)
{
	std::cout << "\e[1;37m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\e[0m" << std::endl;
}

int	main()
{
	Bureaucrat	b("bobby", 1);
	Intern	i;
	AForm*	form;

	std::cout << b << std::endl;
	std::cout << WHITE << std::endl << "Bad form test : " << END << std::endl << std::endl;
	form = i.makeForm("unknown", "test");
	std::cout << WHITE << std::endl << "Shrubbery tests :" << END << std::endl << std::endl ;
	form = i.makeForm("shrubbery request", "shrub");
	b.signForm(*form);
	b.executeForm(*form);
	delete form;
	std::cout << WHITE << std::endl << "Robotomy tests :" << END << std::endl << std::endl ;
	form = i.makeForm("robotomy request", "robot");
	b.signForm(*form);
	b.executeForm(*form);
	b.executeForm(*form);
	delete form;
	std::cout << std::endl << WHITE << "Presidential tests :" << END << std::endl << std::endl ;
	form = i.makeForm("presidential request", "pres");
	b.signForm(*form);
	b.executeForm(*form);
	delete form;
	return (0);
}