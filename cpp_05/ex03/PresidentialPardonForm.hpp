#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:

	//constructor, destructor and operator

	PresidentialPardonForm(const std::string& target);

	PresidentialPardonForm(PresidentialPardonForm const &copy);

	PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);

	~PresidentialPardonForm();

	//methods

	void execute(const Bureaucrat &executor) const;

	//getteur and setter

private:

	std::string	target;
};

#endif
