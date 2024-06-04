#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactIndex(0), lastContact(0) {}

void	PhoneBook::setNextContact(Contact &contact)
{
	if (lastContact > 7)
		lastContact = 0;
	if (contactIndex < 8)
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