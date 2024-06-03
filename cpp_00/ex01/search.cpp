#include "main.hpp"

static void printLastName(std::string lastName)
{
	int i;

	if (lastName.length() > 9)
		std::cout << lastName.substr(0, 9) << ".";
	else
	{
		i = 10 - lastName.length();
		while (i-- > 0)
			std::cout << ' ';
		std::cout << lastName;
	}
}

static void printNickName(std::string nickName)
{
	int i;

	if (nickName.length() > 9)
	{
		std::cout << nickName.substr(0, 9) << ".";
	}
	else
	{
		i = 10 - nickName.length();
		while (i-- > 0)
			std::cout << ' ';
		std::cout << nickName;
	}
}

static void printFirstName(std::string firstName)
{
	int i;

	if (firstName.length() > 9)
		std::cout << firstName.substr(0, 9) << ".";
	else
	{
		i = 10 - firstName.length();
		while (i-- > 0)
			std::cout << ' ';
		std::cout << firstName;
	}
}

void	displayContact(Contact contact)
{
	std::cout << "Firstname : " << contact.getFirstName() << std::endl;
	std::cout << "Lastname : " << contact.getLastName() << std::endl;
	std::cout << "Nickname : " << contact.getNickName() << std::endl;
	std::cout << "PhoneNumber : " << contact.getPhoneNumber() << std::endl;
	std::cout << "DarkestSecret : " << contact.getDarkestSecret() << std::endl;
}

void	searchContact(PhoneBook *phoneBook)
{
	int		i = 0;
	Contact	contact;

	if (phoneBook->getContactIndex() < 0)
	{
		std::cout << "no contact" << std::endl;
		return ;
	}
	contact = phoneBook->getContact(0);
	while (i < phoneBook->getContactIndex())
	{
		contact = phoneBook->getContact(i);
		std::cout << "         " << i + 1 << "|";
		printFirstName(contact.getFirstName());
		std::cout << "|";
		printLastName(contact.getLastName());
		std::cout << "|";
		printNickName(contact.getNickName());
		i++;
		std::cout << std::endl;
	}
	std::cout << "give index contact : " << std::endl;
	std::cin >> i;
	if (i - 48 < 0 || i - 48 > phoneBook->getContactIndex())
	{
		std::cout << "bad index." << std::endl;
		return ;
	}
	displayContact(contact);
}