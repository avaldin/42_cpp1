#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:

	//constructor, destructor and operator

	Intern();
	Intern(Intern const &copy);
	Intern &operator=(const Intern &copy);
	~Intern();

	//methods

	AForm	*makeForm(const std::string& name, const std::string& target) const;

	//getteur and setter

protected:

};

#endif
