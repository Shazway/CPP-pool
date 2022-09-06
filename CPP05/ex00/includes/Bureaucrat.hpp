/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 01:29:36 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 01:29:44 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	std::string const	name;
	int	grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(Bureaucrat const& copy);
	~Bureaucrat();
	Bureaucrat const& operator=(Bureaucrat const& assign);
	int	getGrade() const;
	void	upGrade();
	void	deGrade();
	std::string	getName() const;
};

std::ostream&	operator<<(std::ostream os, Bureaucrat const& a);

#endif