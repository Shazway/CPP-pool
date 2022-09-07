/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:30:55 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/08 00:25:52 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Colors.hpp"

void	print_separator(void)
{
	std::cout << "\e[1;37m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\e[0m" << std::endl;
}

int	main() {
// ShrubberyCreationForm
	std::cout << std::endl << "----- Tests ShrubberyCreationForm : -----" << std::endl << std::endl;
	try {
		Bureaucrat	b1("toto", 137);
		Bureaucrat	b2(b1);
		std::cout << "Create b2 by copy with b1" << std::endl;
  		ShrubberyCreationForm	form1("formOne");
		std::cout << form1 << std::endl;
		std::cout << "b1 = " << b1 << std::endl;
		std::cout << "b2 = " << b2 << std::endl;
		b1.executeForm(form1);
		b1.signForm(form1);
		b1.executeForm(form1);
		b1.signForm(form1);
		std::cout << "b1 downgrade" << std::endl;
		b1.downGrade();
		std::cout << "b1 = " << b1 << std::endl;
		std::cout << "b2 = " << b2 << std::endl;
		b2 = b1;
		std::cout << "b2 = b1" << std::endl;
		std::cout << "b1 = " << b1 << std::endl;
		std::cout << "b2 = " << b2 << std::endl;
		b1.executeForm(form1);
		form1.execute(b1);
	}
	catch (std::exception& e) {
		std::cerr << "Exception catch in main : " << e.what();
	}
// RobotomyRequestForm
	std::cout << std::endl << "----- Tests RobotomyRequestForm : -----" << std::endl << std::endl;
	try {
		Bureaucrat	b1("toto", 45);
		Bureaucrat	b2(b1);
		std::cout << "Create b2 by copy with b1" << std::endl;
		RobotomyRequestForm	form1("formOne");
		std::cout << form1 << std::endl;
		std::cout << "b1 = " << b1 << std::endl;
		std::cout << "b2 = " << b2 << std::endl;
		b1.executeForm(form1);
		b1.signForm(form1);
		b1.executeForm(form1);
		b1.executeForm(form1);
		b1.executeForm(form1);
		b1.executeForm(form1);
		b1.signForm(form1);
		std::cout << "b1 downgrade" << std::endl;
		b1.downGrade();
		std::cout << "b1 = " << b1 << std::endl;
		std::cout << "b2 = " << b2 << std::endl;
		b2 = b1;
		std::cout << "b2 = b1" << std::endl;
		std::cout << "b1 = " << b1 << std::endl;
		std::cout << "b2 = " << b2 << std::endl;
		b1.executeForm(form1);
		form1.execute(b1);
	}
	catch (std::exception& e) {
		std::cerr << "Exception catch in main : " << e.what();
	}
// PresidentialPardonForm
	std::cout << std::endl << "----- Tests PresidentialPardonForm : -----" << std::endl << std::endl;
	try {
		Bureaucrat	b1("toto", 5);
		Bureaucrat	b2(b1);
		std::cout << "Create b2 by copy with b1" << std::endl;
		PresidentialPardonForm	form1("formOne");
		std::cout << form1 << std::endl;
		std::cout << "b1 = " << b1 << std::endl;
		std::cout << "b2 = " << b2 << std::endl;
		b1.executeForm(form1);
		b1.signForm(form1);
		b1.executeForm(form1);
		b1.signForm(form1);
		std::cout << "b1 downgrade" << std::endl;
		b1.downGrade();
		std::cout << "b1 = " << b1 << std::endl;
		std::cout << "b2 = " << b2 << std::endl;
		b2 = b1;
		std::cout << "b2 = b1" << std::endl;
		std::cout << "b1 = " << b1 << std::endl;
		std::cout << "b2 = " << b2 << std::endl;
		b1.executeForm(form1);
		b2.executeForm(form1);
		form1.execute(b1);
		form1.execute(b2);
	}
	catch (std::exception& e) {
		std::cerr << "Exception catch in main : " << e.what();
	}
	return (0);
}