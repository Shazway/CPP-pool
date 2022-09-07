/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:18:40 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 19:31:21 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Colors.hpp"

AForm::AForm(): _name("random sheet"), _is_signed(0), _to_sign(150), _to_exec(150){
	return ;
}

AForm::AForm(std::string const name, int to_exec, int to_sign)
: _name(name), _is_signed(0), _to_sign(to_sign), _to_exec(to_exec)
{
	if (to_sign > 150 || to_exec > 150)
		throw(AForm::GradeTooLowException());
	if (to_sign < 1 || to_exec < 1)
		throw(AForm::GradeTooHighException());
}

AForm::~AForm(){
	return ;
}

AForm::AForm(AForm const& copy): _to_sign(copy.getToSign()), _to_exec(copy.getToExec())
{
	return ;
}

AForm const& AForm::operator=(AForm const& assign)
{
	(void)assign;
	return (*this);
}

std::string const	AForm::getName() const{
	return (_name);
}

int	AForm::getToSign() const{
	return (_to_sign);
}

int	AForm::getToExec() const{
	return (_to_exec);
}

bool	AForm::getIsSigned() const{
	return (_is_signed);
}

void	AForm::beSigned(Bureaucrat const& employee)
{
	if (_to_sign < employee.getGrade())
		throw(AForm::GradeTooLowException());
	if (_is_signed)
		throw(FormAlreadySignedException());
	_is_signed = 1;
}

void	AForm::canExecute(Bureaucrat const& bureaucrat) const
{
	if (_is_signed == false)
		throw(AForm::ErrorExecutingFormUnsigned());
	if (this->getToExec() < bureaucrat.getGrade())
		throw(AForm::GradeTooLowException());
	std::cout << YELLOW
	<< bureaucrat.getName() << " executed " << this->getName()
	<< END << std::endl;
}

std::ostream& operator<<(std::ostream& os, AForm const& form)
{
	os << MAGENTA
	<< "Form name: " << form.getName()
	<< "| Signed status: " << form.getIsSigned()
	<< "| Grade required to sign: " << form.getToSign()
	<< "| Grade required to execute: " << form.getToExec()
	<< END << std::endl;
	return (os);
}