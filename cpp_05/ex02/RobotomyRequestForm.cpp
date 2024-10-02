#include <iostream>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : AForm(copy), target(copy.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->target = copy.target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw AForm::NotSignedExeption();
	if (executor.getGrade() > 45)
		throw AForm::GradeTooLowExeption();
	std::cout << "bzzzzz bzzzzzz bzzzz" << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "the robotomy failed" << std::endl;
}


