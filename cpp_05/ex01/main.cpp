#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"


int	main()
{

	Bureaucrat diego("diego", 5);
	Bureaucrat jason("jason", 150);
	Bureaucrat pedro("pedro", 1);

	try
	{
		Form	form("c", 150, 50);

		diego.signForm(form);
		std::cout << form << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form	form("c", 15, 50);

		jason.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


}
