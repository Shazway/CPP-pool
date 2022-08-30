#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>

class Contact
{
	public:
	Contact(){};
	~Contact(){};
	std::string entries[4];
};

class PhoneBook
{
	public:
	PhoneBook()
	{
		fields[0] = "First name: ";
		fields[1] = "Last name: ";
		fields[2] = "Nickname: ";
		fields[3] = "Phone number: ";
		fields[4] = "Darkest secret: ";
	};
	~PhoneBook(){};
	std::string fields[4];
	Contact contacts[8];
	int		index;
	void	search_contact(void);
	void	add_contact(void);
};
#endif