/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:09:16 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 19:41:44 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low ! Cannot assign");
}
const char *Form::GradeTooLowException::what() const throw(){
	return ("/!\\ Grade too low /!\\");
}