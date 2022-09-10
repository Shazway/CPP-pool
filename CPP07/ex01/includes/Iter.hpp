/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:29:01 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/10 18:56:59 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include "Colors.hpp"
template <typename T>
void	iter(T* array, size_t const& len, void (&ft)(T&))
{
	for (size_t i = 0; i < len; i++)
		ft(array[i]);
}
template <typename T>
void	iter(T* array, size_t const& len, void (&ft)(T const&))
{
	for (size_t i = 0; i < len; i++)
		ft(array[i]);
}
template<typename T>
void	memset(T& t, size_t set){
	t = set;
}
#endif