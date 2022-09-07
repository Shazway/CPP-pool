/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:45:06 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/08 00:23:24 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name): AForm(name, 25, 5){
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& presidential)
: AForm(presidential.getName(), presidential.getToSign(), presidential.getToExec()){
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& presidential)
{
	(void)presidential;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& bureaucrat) const
{
	this->canExecute(bureaucrat);
	std::cout << MAGENTA
	<< bureaucrat.getName() << " has been pardoned by Zphod BeebleBrox"
	<< END << std::endl;
}
