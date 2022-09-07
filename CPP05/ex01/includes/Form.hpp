/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:07:40 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 20:53:46 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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
	std::string const	_name;
	bool				_is_signed;
	int	const			_to_sign;
	int	const			_to_exec;
public:
	Form();
	Form(std::string const name, int to_exec, int to_sign);
	Form(Form const& form);
	virtual ~Form();

	std::string const	getName() const;
	int					getToSign() const;
	int					getToExec() const;
	bool				getIsSigned() const;
	void				beSigned(Bureaucrat const& employee);
	Form const&	operator=(Form const& assign);
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& a);

#endif