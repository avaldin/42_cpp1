#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>

class Bureaucrat;

class AForm
{
public:

	//constructor, destructor and operator
	
	AForm();
	AForm(const std::string& name, int signed_require, int execute_require);
	AForm(AForm const &copy);
	AForm	&operator=(const AForm &copy);
	virtual ~AForm() = 0;
	
	//methods

	void			beSigned(Bureaucrat& signer);
	virtual void	execute(Bureaucrat const & executor) const = 0;

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
	class NotSignedExeption : public std::exception
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
