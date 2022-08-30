/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:38:12 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/30 18:32:17 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
class Contact
{
	public:
	Contact();
	~Contact();
	void fill_contact(int index, std::string input);
	std::string get_entry(int index);
	private:
	std::string entries[5];
};
#endif