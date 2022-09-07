/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:23:50 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 22:28:37 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include "Colors.hpp"

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(RobotomyRequestForm const& robotomy);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm& operator=(RobotomyRequestForm const& robotomy);
		void	execute(Bureaucrat const& bureaucrat) const;
	private:
		RobotomyRequestForm();
};

#endif