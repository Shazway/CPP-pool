/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:15:25 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/08 03:30:30 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	return ;
}

Intern::Intern(Intern const& intern)
{
	*this = intern;
	return ;
}

Intern::~Intern(){
	return ;
}
Intern const& Intern::operator=(Intern const& intern)
{
	(void)intern;
	return (*this);
}

int	Intern::findType(std::string const& type) const
{
	static std::string const requests[3] = {"shrubbery request", "robotomy request", "presidential request"};

	for (int i = 0; i < 3; i++)
		if (type == requests[i])
			return (i);
	return (-1);
}

AForm* Intern::makeForm(std::string const& type, std::string const& name) const
{
	int	form_type = findType(type);

	if (form_type != -1)
	{
		std::cout << BLUE
		<< "Intern creates " << name
		<< END << std::endl;
		switch (form_type)
		{
			case 0: return (new ShrubberyCreationForm(name));
			case 1: return (new RobotomyRequestForm(name));
			case 2: return (new PresidentialPardonForm(name));
		}
	}
	std::cerr << RED
	<< type << " isn't a possible form"
	<< END << std::endl;
	return (NULL);
}