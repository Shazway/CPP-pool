/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:58:22 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 23:58:01 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Colors.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

//--------TOO HIGH----------//

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high! Cannot assign");
}
const char *AForm::GradeTooHighException::what() const throw(){
	return ("/!\\ Grade too high /!\\");
}

//-------TOO LOW-----------//

const char *AForm::ErrorExecutingFormTooLow::what() const throw(){
	return ("/!\\ Grade too low, can't execute form /!\\");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low ! Cannot assign");
}
const char *AForm::GradeTooLowException::what() const throw(){
	return ("/!\\ Grade too low /!\\");
}
//------UNSIGNED----------//
const char *AForm::ErrorExecutingFormUnsigned::what() const throw(){
	return ("/!\\ Form unsigned, can't execute /!\\");
}
//------ALREADY SIGNED---//
const char *AForm::FormAlreadySignedException::what() const throw(){
	return ("/!\\ Form is already signed... can't sign twice /!\\");
}
//-----OPEN-----//
const char *ShrubberyCreationForm::ErrorOpeningFile::what() const throw(){
	return ("/!\\ Coudln't open file... /!\\");
}

