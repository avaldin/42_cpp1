#ifndef AFORM_HPP
#define AFORM_HPP
#include <string>

#include "Bureaucrat.hpp"

class AForm
{
public:

	//constructor, destructor and operator
	
	AForm();
	AForm(std::string name, int signed_require, int execute_require);
	AForm(AForm const &copy);
	AForm	&operator=(const AForm &copy);
	~AForm();
	
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

std::ostream &operator<<(std::ostream &o, AForm &f);

#endif
