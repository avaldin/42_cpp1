#include <iostream>

#include "Bureaucrat.hpp"


int	main()
{
	try
	{
		Bureaucrat diego("diego", 5);
		Bureaucrat jason("jason", 150);
		Bureaucrat pedro("pedro", 1);
		pedro.incrementGrade(2);
	}
	catch (Bureaucrat::GradeTooHightExeption &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << diego << std::endl;
	try
	{
		jason = pedro;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << jason << std::endl;
	jason = diego;
	std::cout << jason << std::endl;
	return (0);
}