/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:40:04 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/31 01:41:50 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::display_contact()
{
	std::string	line;
	long		index;

	std::cout << "Select an index to see details: ";
	while(std::getline(std::cin, line))
	{
		index = strtol(line.c_str(), NULL, 10);
		if (line.size() > 1 || line.empty()|| (line.size() == 1 && !isdigit(line[0]))
			|| index >= nb_contacts || index < 0)
			std::cout << "Wrong index try a number between " << 0 << " and " << nb_contacts - 1 << "\nSelect an index to see details: ";
		else
			break ;
	}
	line.clear();
	std::cout << line.append(50, '-') << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << fields[i] << contacts[index].get_entry(i) << std::endl;
	std::cout << line << std::endl;
}

void	PhoneBook::display_phonebook()
{
	std::string temp;

	for (int i = 0; i < nb_contacts; i++)
	{
		temp.clear();
		std::cout << temp.insert(0, 9, ' ') << i << '|';
		for (int j = 0; j < 3; j++)
		{
			temp = contacts[i].get_entry(j);
			if (temp.size() > 9)
				std::cout << temp.substr(0, 9) << '.' << '|';
			else
			{
				temp.insert(0, 10 - temp.size(), ' ');
				std::cout << temp << '|';
			}
		}
		if (i < nb_contacts)
			std::cout << std::endl;
	}
	display_contact();
}

void	PhoneBook::search_contact()
{
	if (nb_contacts == 0)
	{
		std::cout << "No contacts to search, try using \"ADD\" to add a new contact" << std::endl;
		return ;
	}
	std::cout << INDEX << FIRST_NAME << LAST_NAME << NICKNAME << std::endl;
	display_phonebook();
}

void	PhoneBook::add_contact()
{
	int i = 0;
	std::string	input;

	std::cout << fields[i] << std::flush;
	while (i < 5 && std::getline(std::cin, input))
	{
		if (input.empty())
		{
			std::cout << "Cannot add empty fields" << std::endl;
			std::cout << fields[i] << std::flush;
			continue ;
		}
		contacts[index].fill_contact(i, input);
		i++;
		std::cout << fields[i] << std::flush;
	}
	if (nb_contacts < 8)
		nb_contacts++;
	index++;
	if (index == 8)
		index = 0;
}

PhoneBook::PhoneBook(void)
{
	fields[0] = "First name: ";
	fields[1] = "Last name: ";
	fields[2] = "Nickname: ";
	fields[3] = "Phone number: ";
	fields[4] = "Darkest secret: ";
	index = 0;
	nb_contacts = 0;
	return ;
}

PhoneBook::~PhoneBook(void){
	return ;
}
