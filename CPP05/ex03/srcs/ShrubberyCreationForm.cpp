/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:46:22 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/08 00:23:16 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name): AForm(name, 145, 137){
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& form)
: AForm(form.getName(), form.getToSign(), form.getToExec())
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& shrubbery)
{
	(void)shrubbery;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& bureaucrat) const
{
	this->canExecute(bureaucrat);
	std::ofstream	os((bureaucrat.getName() + "_shrubbery").c_str(), std::ofstream::app);
	if (!os.is_open())
		throw( ShrubberyCreationForm::ErrorOpeningFile());
	os << TREE;
	os.close();
	std::cout << GREEN
	<< "Tree has been planted *radio feedback noise*" << END << std::endl;
	return ;
}