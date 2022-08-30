/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:34:37 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/30 13:44:54 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::add_contact(void)
{
	int i = 0;
	std::string	input;

	std::cout << fields[i] << std::flush;
	while (i < 5 && std::getline(std::cin, input))
	{
		this->contacts[index].entries[i] = input;
		i++;
	}
	if (this->index == 8)
		this->index = 0;
	this->index++;
}

int	main()
{
	PhoneBook book;
	std::string line;

	std::cout << "> " << std::flush;
	while (std::getline(std::cin, line))
	{
		if (line == "ADD")
			book.add_contact();
		std::cout << "> " << std::flush;
		if (line == "EXIT")
		{
			std::cout << "Exited Phonebook" << std::endl;
			return (0);
		}
	}
}