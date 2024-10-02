#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:

	//constructor, destructor and operator

	RobotomyRequestForm(const std::string& target);

	RobotomyRequestForm(RobotomyRequestForm const &copy);

	RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

	~RobotomyRequestForm();

	//methods

	void execute(const Bureaucrat &executor) const;

	//getteur and setter

private:

	std::string	target;
};

#endif
