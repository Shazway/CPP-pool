/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 01:29:36 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 20:53:57 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Colors.hpp"
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	class GradeTooHighException: public std::exception{
		private:
			virtual const char * what() const throw();
	};
	class GradeTooLowException: public std::exception{
		private:
			virtual const char * what() const throw();
	};
	std::string	const	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& copy);
	virtual ~Bureaucrat();

	int			getGrade() const;
	std::string	getName() const;
	void		upGrade();
	void		downGrade();
	void		signForm(Form& form);
	Bureaucrat const& operator=(Bureaucrat const& assign);
	
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& a);

#endif