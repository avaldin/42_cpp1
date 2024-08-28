#ifndef FORM_HPP
#define FORM_HPP
#include <string>

#include "Bureaucrat.hpp"

class Form
{
public:

	//constructor, destructor and operator
	
	Form();
	Form(std::string name, int signed_require, int execute_require);
	Form(Form const &copy);
	Form	&operator=(const Form &copy);
	~Form();
	
	//methods

	void	beSigned(const Bureaucrat& signer);

	//getteur and setter

	const std::string	getName() const;
	bool				getIsSigned() const;
	int			getSigned_required() const;
	int			getExecute_required() const;


	class GradeTooHightExeption : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowExeption : public std::exception
	{
	public:
		const char *what() const throw();
	};

private:

	const std::string	name;
	bool				isSigned;
	const int			signed_required;
	const int			execute_required;

	int					setSigned_required(int require);
	int					setExecute_require(int require);
};

std::ostream &operator<<(std::ostream &o, Form &f);

#endif
