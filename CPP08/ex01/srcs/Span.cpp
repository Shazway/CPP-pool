/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:06:15 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/11 20:05:40 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "Colors.hpp"
#include <algorithm>

Span::Span(): _max_size(0), _tab(){
	return ;
}

Span::Span(unsigned int N): _max_size(N), _tab(){
	return ;
}

Span::Span(Span const& copy): _max_size(copy._max_size){
	*this = copy;
}

Span::~Span(){
	return ;
}

Span	&Span::operator=(Span const& copy)
{
	for (std::vector<int>::const_iterator i = copy._tab.begin(); i < copy._tab.end(); i++)
		addNumber(*i);
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (_tab.size() == _max_size)
		throw(TooManyElementsException());
	_tab.push_back(nb);
}

void	Span::addNumber(std::vector<int>::iterator i, std::vector<int>::iterator j)
{
	for (; i != j; i++)
		addNumber(*i);
}

int	Span::shortestSpan()
{
	int	last = -1;
	int	shortest = -1;

	if (_tab.size() < 2)
		throw(NotEnoughElementsException());
	std::sort(_tab.begin(), _tab.end());
	for (std::vector<int>::const_iterator i = _tab.begin(); i < _tab.end(); i++)
	{
		if (last != -1 && *i != last
		&& (*i - last < shortest || shortest == -1))
			shortest = *i - last;
		last = *i;
	}
	return (shortest);
}
int	Span::longestSpan()
{
	if (_tab.size() < 2)
		throw(NotEnoughElementsException());
	std::sort(_tab.begin(), _tab.end());
	return (_tab[_tab.size() - 1] - _tab[0]);
}

void Span::printArray() const
{
	for(std::vector<int>::const_iterator i = _tab.begin(); i < _tab.end(); i++)
		std::cout << BLUE << "[" << *i << "]" << END << std::endl;
}