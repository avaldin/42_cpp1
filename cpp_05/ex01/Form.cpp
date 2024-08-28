#include "Form.hpp"

#include <iostream>
#include <ostream>

Form::Form() : name("unknow"), isSigned(false), signed_required(150), execute_required(150)
{
	
}

Form::Form(std::string name, int signed_require, int execute_require) : name(name),
			isSigned(false), signed_required(setSigned_required(signed_require)), execute_required(execute_require)
{

}

Form::Form(Form const &copy) : name(copy.getName()),  isSigned(false),
			signed_required(copy.getSigned_required()), execute_required(copy.getExecute_required())
{

}

Form	&Form::operator=(const Form &copy)
{
	if (this != &copy)
		this->isSigned = copy.isSigned;
	return (*this);
}

Form::~Form()
{

}

void		Form::beSigned(const Bureaucrat& signer)
{
	if (this->signed_required < signer.getGrade())
		throw GradeTooLowExeption();
	this->isSigned = true;
}

const		std::string Form::getName() const
{
	return (this->name);
}

bool		Form::getIsSigned() const
{
	return (this->isSigned);
}

int	Form::getSigned_required() const
{
	return (this->signed_required);
}

int	Form::getExecute_required() const
{
	return (this->execute_required);
}

const char *Form::GradeTooHightExeption::what() const throw()
{
	return ("grade to hight");
}

const char *Form::GradeTooLowExeption::what() const throw()
{
	return ("grade to low");
}

int			Form::setSigned_required(int require)
{
	if (require < 1)
		throw GradeTooHightExeption();
	if (require > 150)
		throw GradeTooLowExeption();
	return(require);
}
int			Form::setExecute_require(int require)
{
	if (require < 1)
		throw GradeTooHightExeption();
	if (require > 150)
		throw GradeTooLowExeption();
	return(require);
}
std::ostream &operator<<(std::ostream &o, Form &f)
{
	o << "Form " << f.getName() << " signed boolean is " << f.getIsSigned() << ", signed_required is " << f.getSigned_required() << ", execute_required is " << f.getExecute_required() << std::endl;
	return (o);
}
