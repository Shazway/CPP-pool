/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:05:39 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 19:41:12 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include "Form.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high! Cannot assign");
}
const char *Form::GradeTooHighException::what() const throw(){
	return ("/!\\ Grade too high /!\\");
}