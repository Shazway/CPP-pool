/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:08:57 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/09 20:27:59 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): _nb(){
	return ;
}

Data::Data(int const& nb)
{
	_nb = nb;
	return ;
}

Data::Data(Data const& copy)
{
	_nb = copy.getNb();
	return ;
}

Data::~Data(){
	return ;
}

Data&	Data::operator=(Data const& assign)
{
	_nb = assign.getNb();
	return (*this);
}

int	Data::getNb() const{
	return (_nb);
}