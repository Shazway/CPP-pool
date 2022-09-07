/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 01:29:46 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 17:49:18 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("bobby"),_grade(150){
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (grade >= 1 && grade <= 150)
		_grade = grade;
	return ;
}

Bureaucrat::~Bureaucrat(){
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy)
{
	*(this) = copy;
	return ;
}

Bureaucrat const& Bureaucrat::operator=(Bureaucrat const& assign)
{
	_grade = assign._grade;
	return (*this);
}

std::string Bureaucrat::getName() const{
	return (_name);
}
int		Bureaucrat::getGrade() const{
	return (_grade);
}

void	Bureaucrat::upGrade()
{
	if (_grade <= 1)
		throw(Bureaucrat::GradeTooHighException());
	_grade--;
	return ;
}

void	Bureaucrat::downGrade()
{
	if (_grade >= 150)
		throw(Bureaucrat::GradeTooLowException());
	_grade++;
	return ;
}
std::ostream&	operator<<(std::ostream& os, Bureaucrat const& a)
{
	os << YELLOW << a.getName() << ", bureaucrat grade: " << a.getGrade() << END;
	return (os);
}