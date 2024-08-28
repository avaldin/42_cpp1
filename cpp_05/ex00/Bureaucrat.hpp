#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>

class Bureaucrat
{
public:

	//constructor, destructor and operator

	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat &operator=(const Bureaucrat &copy);
	~Bureaucrat();
	
	//methods

	void	incrementGrade(int	count);
	void	decrementGrade(int	count);

	//exeption

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

	//getteur and setter

	std::string getName() const;
	int			getGrade() const;

protected:
	const std::string	name;
	int					grade;
	void		setGrade(int newGrade);
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &b);

#endif
