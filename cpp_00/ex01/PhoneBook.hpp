#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:

	PhoneBook();

	void	setNextContact(Contact &contact);
	Contact	getContact(int i);
	int		getContactIndex();

private:

	Contact contacts[8];
	int		contactIndex;
	int		lastContact;
};


#endif
