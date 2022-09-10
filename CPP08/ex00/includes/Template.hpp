/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:00:11 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/10 18:18:22 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template<typename T>
void	swap(T& a, T& b)
{
	T	tmp = a;
	a = b;
	b = tmp;
}
template<typename T>
T const&	min(T const& n1, T const& n2){
	return (n1 < n2 ? n1 : n2);
}
template<typename T>
T const&	max(T const& n1, T const& n2){
	return (n1 > n2 ? n1 : n2);
}
#endif