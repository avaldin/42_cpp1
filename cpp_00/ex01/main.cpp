#include "main.hpp"

void	addContact(PhoneBook phoneBook)
{
	Contact		newContact;
	std::string	input;

	std::cout << "firstname contact : " << std::endl;
	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "failure, information can't stay null" << std::endl;
		return ;
	}
	newContact.setFirstName(input);
	std::cout << "lastname contact : " << std::endl;
	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "failure, information can't stay null" << std::endl;
		return ;
	}
	newContact.setLastName(input);
	std::cout << "nickname contact : " << std::endl;
	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "failure, information can't stay null" << std::endl;
		return ;
	}
	newContact.setNickName(input);
	std::cout << "phone number contact : " << std::endl;
	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "failure, information can't stay null" << std::endl;
		return ;
	}
	newContact.setPhoneNumber(input);
	std::cout << "darkest secret contact : " << std::endl;
	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "failure, information can't stay null" << std::endl;
		return ;
	}
	newContact.setDarkestSecret(input);
	phoneBook.setNextContact(newContact);
}

void	searchContact(PhoneBook phoneBook)
{
	int		i = 0;
	Contact	contact;

	if (phoneBook.getContactIndex() == -1)
	{
		std::cout << "no contact" << std::endl;
		return ;
	}
	contact = phoneBook.getContact(0);
	while (i < phoneBook.getContactIndex())
	{
		contact = phoneBook.getContact(i);
		printIndex();
		std::cout << "|"
		printFirstName();
		std::cout << "|"
		printLastName();
		std::cout << "|"
	}
}

std::cout << "         " << i + 1 << "|" <<

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input = NULL;

	std::cout << "program started\n";
	while (42)
	{
		std::cout << "enter one of three commands :" << std::endl;
		std::cout << "ADD: save a new contact" << std::endl;
		std::cout << "SEARCH: display a specific contact" << std::endl;
		std::cout << "EXIT> " << std::endl;
		std::cin >> input;
		if (input == "ADD")
			addContact(phonebook);
		if (input == "SEARCH")
			searchContact(phonebook);
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "wrong entry, retry" << std::endl;
	}
}