#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:

	PhoneBook();

	void	setNextContact(Contact &contact);
	Contact	getContact(int i);

private:

	Contact contacts[8];
	int		contactCount;
	int		lastContact;
};


#endif
