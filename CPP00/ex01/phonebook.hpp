#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class Contact
{
	private:
	std::string first_name;
	std::string nickname;
	std::string	phone_number;
	std::string darkest_secret;
};

class Phonebook
{
	private:
	int		index;
	Contact contacts[8];
};
#endif