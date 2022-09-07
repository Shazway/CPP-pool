/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:07:40 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/07 23:56:41 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
protected:
	AForm();
	class GradeTooHighException: public std::exception{
		private:
			virtual const char * what() const throw();
	};
	class GradeTooLowException: public std::exception{
		private:
			virtual const char * what() const throw();
	};
	class FormAlreadySignedException: public std::exception{
		private:
			virtual const char *what() const throw();
	};
	class FormNotSignedException: public std::exception{
		private:
			virtual const char *what() const throw();
	};
	class	ErrorExecutingFormTooLow: public std::exception{
		private:
			virtual const char* what() const throw();
	};
	class	ErrorExecutingFormUnsigned: public std::exception{
		private:
			virtual const char* what() const throw();
	};
public:
	AForm(std::string const name, int to_exec, int to_sign);
	AForm(AForm const& form);
	virtual ~AForm();

	virtual void execute(Bureaucrat const& executor) const = 0;
	std::string const	getName() const;
	int					getToSign() const;
	int					getToExec() const;
	bool				getIsSigned() const;
	void				beSigned(Bureaucrat const& employee);
	void				canExecute(Bureaucrat const& bureaucrat) const;
private:
	AForm const&	operator=(AForm const& assign);
	std::string const	_name;
	bool				_is_signed;
	int	const			_to_sign;
	int	const			_to_exec;
};

std::ostream&	operator<<(std::ostream& os, AForm const& aform);

#endif