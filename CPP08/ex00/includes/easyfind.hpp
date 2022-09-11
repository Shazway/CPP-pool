/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:58:25 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/11 18:51:28 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
template <typename T>
int	easyfind(T tab, int val)
{
	;
	for (typename T::iterator i = tab.begin(); i != tab.end(); i++)
		if (*i == val)
			return (*i);
	return (-1);
}

#endif