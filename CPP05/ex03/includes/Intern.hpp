/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:08:40 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/08 03:27:06 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
private:
	int	findType(std::string const& type) const;
public:
	Intern();
	Intern(Intern const& Intern);
	Intern const& operator=(Intern const& intern);
	virtual ~Intern();
	AForm* makeForm(std::string const & type, std::string const& name) const;
};
#endif