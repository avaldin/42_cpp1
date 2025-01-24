#include <iostream>

#include "Bureaucrat.hpp"


int	main()
{
	try
	{
		Bureaucrat diego("diego", 5);
		Bureaucrat jason("jason", 150);
		Bureaucrat pedro("pedro", 1);
		pedro.decrementGrade(2);
		std::cout << pedro << std::endl;
		std::cout << "all good" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	try
	{
		Bureaucrat diego("diego", 5);
		Bureaucrat jason("jason", 160);
		Bureaucrat pedro("pedro", 1);
		pedro.incrementGrade(2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat diego("diego", 0);
		Bureaucrat jason("jason", 150);
		Bureaucrat pedro("pedro", 1);
		pedro.incrementGrade(2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat diego("diego", 5);
		Bureaucrat jason("jason", 150);
		Bureaucrat pedro("pedro", 1);
		pedro.incrementGrade(2);
		std::cout << pedro << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}