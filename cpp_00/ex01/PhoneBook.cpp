#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	lastContact = 0;
	contactCount = 0;
}

void	PhoneBook::setNextContact(Contact &contact)
{
	if (lastContact > 7)
		lastContact = 0;
	contacts[lastContact++] = contact;
}

Contact	PhoneBook::getContact(int i)
{
	return (contacts[i]);
}