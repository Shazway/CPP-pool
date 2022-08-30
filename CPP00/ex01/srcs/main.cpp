/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:34:37 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/30 18:47:55 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook book;
	std::string line;

	std::cout << "Type either ADD, SEARCH or EXIT" << std::endl << "> ";
	while (std::getline(std::cin, line))
	{
		if (line == "ADD")
			book.add_contact();
		if (line == "SEARCH")
			book.search_contact();
		std::cout << "Type either ADD, SEARCH or EXIT" << std::endl << "> ";
		if (line == "EXIT")
		{
			std::cout << "Exited Phonebook" << std::endl;
			return (0);
		}
	}
	return (0);
}