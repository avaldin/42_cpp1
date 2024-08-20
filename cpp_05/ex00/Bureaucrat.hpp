#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>

class Bureaucrat : std::exception
{
public:

	//constructor, destructor and operator
	
	Bureaucrat();
	~Bureaucrat();
	
	//methods
	void	incrementGrade(int	count);
	void	derementGrade(int	count);
	//exeption
	GradeTooHightExeption();
	//getteur and setter
	std::string	getName() const;
	int			getGrade() const;

protected:

	const std::string	name;
	int					grade;
};

#endif
