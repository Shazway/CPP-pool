/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:42:40 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 22:49:49 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
#include "Colors.hpp"

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(PresidentialPardonForm const& presidential);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm& operator=(PresidentialPardonForm const& presidential);
		void	execute(Bureaucrat const& bureaucrat) const;
	private:
		PresidentialPardonForm();
};
#endif