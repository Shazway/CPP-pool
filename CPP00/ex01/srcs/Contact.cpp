/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:39:10 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/30 18:39:10 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::fill_contact(int index, std::string input)
{
	entries[index] = input;
}

std::string	Contact::get_entry(int index)
{
	return (entries[index]);
}
Contact::Contact(void){
		return;
};
Contact::~Contact(void){
	return ;
};