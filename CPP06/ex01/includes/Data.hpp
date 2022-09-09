/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 19:06:11 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/09 20:24:44 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
public:
	Data();
	Data(int const& nb);
	Data(Data const& copy);
	virtual ~Data();
	Data& operator=(Data const& assign);
	int	getNb(void) const;
private:
	int	_nb;
};


#endif