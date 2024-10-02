#include "AForm.hpp"

#include <iostream>
#include <ostream>

AForm::AForm() : name("unknow"), isSigned(false), signed_required(150), execute_required(150)
{
	
}

AForm::AForm(std::string name, int signed_require, int execute_require) : name(name),
			isSigned(false), signed_required(setSigned_required(signed_require)), execute_required(execute_require)
{

}

AForm::AForm(AForm const &copy) : name(copy.getName()),  isSigned(false),
			signed_required(copy.getSigned_required()), execute_required(copy.getExecute_required())
{

}

AForm	&AForm::operator=(const AForm &copy)
{
	if (this != &copy)
		this->isSigned = copy.isSigned;
	return (*this);
}

AForm::~AForm()
{

}

void		AForm::beSigned(const Bureaucrat& signer)
{
	if (this->signed_required < signer.getGrade())
		throw GradeTooLowExeption();
	this->isSigned = true;
}

const		std::string AForm::getName() const
{
	return (this->name);
}

bool		AForm::getIsSigned() const
{
	return (this->isSigned);
}

int	AForm::getSigned_required() const
{
	return (this->signed_required);
}

int	AForm::getExecute_required() const
{
	return (this->execute_required);
}

const char *AForm::GradeTooHightExeption::what() const throw()
{
	return ("grade to hight");
}

const char *AForm::GradeTooLowExeption::what() const throw()
{
	return ("grade to low");
}

int			AForm::setSigned_required(int require)
{
	if (require < 1)
		throw GradeTooHightExeption();
	if (require > 150)
		throw GradeTooLowExeption();
	return(require);
}
int			AForm::setExecute_require(int require)
{
	if (require < 1)
		throw GradeTooHightExeption();
	if (require > 150)
		throw GradeTooLowExeption();
	return(require);
}
std::ostream &operator<<(std::ostream &o, AForm &f)
{
	o << "Form " << f.getName() << " signed boolean is " << f.getIsSigned() << ", signed_required is " << f.getSigned_required() << ", execute_required is " << f.getExecute_required() << std::endl;
	return (o);
}
