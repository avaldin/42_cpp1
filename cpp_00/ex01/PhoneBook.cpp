#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	lastContact = 0;
	contactIndex = -1;
}

void	PhoneBook::setNextContact(Contact &contact)
{
	if (lastContact > 7)
		lastContact = 0;
	if (contactIndex < 7)
		contactIndex++;
	contacts[lastContact++] = contact;
}

Contact	PhoneBook::getContact(int i)
{
	return (contacts[i]);
}

int	PhoneBook::getContactIndex()
{
	return(contactIndex);
}