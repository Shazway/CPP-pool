#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <cstdlib>
# define INDEX "     Index|"
# define FIRST_NAME "First name|"
# define LAST_NAME " Last name|"
# define NICKNAME "  Nickname|"
class PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();
	void	search_contact(void);
	void	add_contact(void);
	void	display_contact(void);
	void	display_phonebook(void);
	private:
	Contact contacts[8];
	int			index;
	int			nb_contacts;
	std::string fields[5];
};
#endif