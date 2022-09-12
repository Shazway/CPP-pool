/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:58:25 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/12 15:09:59 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
class	ElementNotFoundException : public std::exception{
	virtual const char*	what() const throw();
};
const char* ElementNotFoundException::what() const throw(){
	return ("/!\\ Couldn't find the value researched /!\\");
}
template <typename T>
int	easyfind(T tab, int val)
{
	for (typename T::iterator i = tab.begin(); i != tab.end(); i++)
		if (*i == val)
			return (*i);
	throw(ElementNotFoundException());
}
#define BLACK "\e[1;30m"
#define RED "\e[1;31m"
#define GREEN "\e[1;32m"
#define YELLOW "\e[1;33m"
#define BLUE "\e[1;34m"
#define MAGENTA "\e[1;35m"
#define CYAN "\e[1;36m"
#define WHITE "\e[1;37m"
#define END "\e[0m"

#endif