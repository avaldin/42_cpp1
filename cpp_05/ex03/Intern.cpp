#include <iostream>
#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &copy)
{
	(void)copy;
}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}

Intern::~Intern() {}



AForm *Intern::makeForm(const std::string& name, const std::string& target) const
{
	unsigned int hash = 0;

	(void)target;
	for (size_t i = 0; i < name.length(); ++i) {
		hash = hash * 31 + name[i];
	}
	switch (hash)
	{
		case 512388267:
		{
			std::cout << "intern create " << name << std::endl;
			return (new ShrubberyCreationForm(target));
		}
		case 2877915424:
		{
			std::cout << "intern create " << name << std::endl;
			return (new RobotomyRequestForm(target));
		}
		case 886341134:
		{
			std::cout << "intern create " << name << std::endl;
			return (new PresidentialPardonForm(target));
		}
		default:
			return(NULL);
	}
}




