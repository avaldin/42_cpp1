#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>
#include <string>

Bureaucrat::Bureaucrat() : name("unknow"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : name(copy.getName()), grade(150)
{
	setGrade(copy.getGrade());
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this == &copy)
		return (*this);
	setGrade(copy.getGrade());
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (o);
}


Bureaucrat::~Bureaucrat()
{

}

void Bureaucrat::incrementGrade(int count)
{
	setGrade(this->grade - count);
}

void Bureaucrat::decrementGrade(int count)
{
	setGrade(this->grade + count);
}

void Bureaucrat::signForm(AForm& form)
{
	form.beSigned(*this);
	std::cout << this->getName() << " signed " << form.getName() << std::endl;
}

const char *Bureaucrat::GradeTooHightExeption::what() const throw()
{
	return ("grade to hight");
}

const char *Bureaucrat::GradeTooLowExeption::what() const throw()
{
	return ("grade to low");
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::setGrade(int newGrade)
{
	if (newGrade < 1)
		throw Bureaucrat::GradeTooHightExeption();
	else if (newGrade > 150)
		throw Bureaucrat::GradeTooLowExeption();
	else
		this->grade = newGrade;
}

void Bureaucrat::executeForm(AForm &form) const
{
	form.execute(*this);
}
