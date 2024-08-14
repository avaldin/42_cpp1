#include "main.hpp"

void	addContact(PhoneBook *phoneBook)
{
	Contact		newContact;
	std::string	input;

	std::cout << "firstname contact : " << std::endl << "> ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << "failure, information can't stay null" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		return ;
	}
	newContact.setFirstName(input);
	std::cout << "lastname contact : " << std::endl << "> ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << "failure, information can't stay null" << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		return ;
	}
	newContact.setLastName(input);
	std::cout << "nickname contact : " << std::endl << "> ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << "failure, information can't stay null" << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		return ;
	}
	newContact.setNickName(input);
	std::cout << "phone number contact : " << std::endl << "> ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << "failure, information can't stay null" << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		return ;
	}
	newContact.setPhoneNumber(input);
	std::cout << "darkest secret contact : " << std::endl << "> ";
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << "failure, information can't stay null" << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		return ;
	}
	newContact.setDarkestSecret(input);
	phoneBook->setNextContact(newContact);
}



int	main(void)
{
	PhoneBook	*phonebook;
	std::string	input;

	phonebook = new PhoneBook();
	std::cout << "program started\n";
	while (42)
	{
		if (std::cin.eof())
		{
			delete phonebook;
			return (0);
		}
		std::cout << "enter one of three commands :" << std::endl;
		std::cout << "ADD: save a new contact" << std::endl;
		std::cout << "SEARCH: display a specific contact" << std::endl;
		std::cout << "EXIT" << std::endl << "> ";
		std::getline(std::cin, input);
		if (input == "EXIT" || std::cin.eof())
		{
			delete phonebook;
			return (0);
		}
		if (input == "ADD")
			addContact(phonebook);
		else if (input == "SEARCH")
			searchContact(phonebook);
		else
			std::cout << "wrong entry, retry" << std::endl;
	}
}