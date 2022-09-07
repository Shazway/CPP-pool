/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:18:40 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 19:31:21 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Colors.hpp"

Form::Form(): _name("random sheet"), _is_signed(0), _to_sign(150), _to_exec(150){
	return ;
}

Form::Form(std::string const name, int to_exec, int to_sign): _name(name), _is_signed(0), _to_sign(to_sign), _to_exec(to_exec)
{
	if (to_sign > 150)
		throw(Form::GradeTooLowException());
	if (to_sign < 1)
		throw(Form::GradeTooHighException());
	if (to_exec > 150)
		throw(Form::GradeTooLowException());
	if (to_exec < 1)
		throw(Form::GradeTooHighException());
}

Form::~Form(){
	return ;
}

Form::Form(Form const& copy): _to_sign(copy.getToSign()), _to_exec(copy.getToExec())
{
	return ;
}

Form const& Form::operator=(Form const& assign)
{
	return (assign);
}

std::string const	Form::getName() const{
	return (_name);
}

int	Form::getToSign() const{
	return (_to_sign);
}

int	Form::getToExec() const{
	return (_to_exec);
}

bool	Form::getIsSigned() const{
	return (_is_signed);
}

void	Form::beSigned(Bureaucrat const& employee)
{
	if (_to_sign < employee.getGrade())
		throw(Form::GradeTooLowException());
	if (_is_signed)
	{
		std::cout << RED
		<< employee.getName() << " can't sign " << _name << ", form already signed"
		<< END << std::endl;
	}
	else if (_to_sign >= employee.getGrade())
	{
		std::cout << BLUE
		<< employee.getName() << " successfully signed " << _name
		<< END << std::endl;
		_is_signed = 1;
	}
}
