/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:57:24 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/11 20:01:49 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <cstdlib>
#include <vector>

class Span
{
private:
	unsigned int		_max_size;
	std::vector<int>	_tab;
public:
	Span();
	Span(unsigned int N);
	Span(Span const& copy);
	~Span();
	Span& operator=(Span const& assign);

	void	addNumber(int nb);
	void	addNumber(std::vector<int>::iterator i, std::vector<int>::iterator j);
	int		shortestSpan(void);
	int		longestSpan(void);
	void	printArray(void) const;
	class	TooManyElementsException : public std::exception{
		virtual const char*	what() const throw();
	};
	class	NotEnoughElementsException : public std::exception{
		virtual const char*	what() const throw();
	};
};

#endif