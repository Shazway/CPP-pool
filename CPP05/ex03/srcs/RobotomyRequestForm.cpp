/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:29:03 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/08 00:23:20 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name): AForm(name, 72, 45){
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& form)
: AForm(form.getName(), form.getToSign(), form.getToExec()){
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& robotomy){
	(void)robotomy;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& bureaucrat) const
{
	static bool	Rand = true;

	this->canExecute(bureaucrat);
	if (Rand == true)
	{
		std::cout << RED << "*bzzzzzzzzzzzzzzz*\n" << END 
		<< YELLOW << bureaucrat.getName() << " has been robotomized successfully"
		<< END << std::endl;
	}
	else
	{
		std::cout << RED 
		<< bureaucrat.getName() << " failed to robotomize..., better luck next time"
		<< END << std::endl;
	}
	Rand = !Rand;
}