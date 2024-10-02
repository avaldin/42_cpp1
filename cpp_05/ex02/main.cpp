#include <iostream>

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat diego("diego", 5);
	Bureaucrat jason("jason", 150);
	Bureaucrat pedro("pedro", 26);

	/////////////    Shrubbery test      /////////

	try //jason can't sign
	{
		ShrubberyCreationForm form_s("Home");
		jason.signForm(form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego sign but jason can't execute
	{
		ShrubberyCreationForm form_s("Home");
		diego.signForm(form_s);
		jason.executeForm(form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego try execute but not signed
	{
		ShrubberyCreationForm form_s("Home");
		diego.executeForm(form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego execute tow times
	{
		ShrubberyCreationForm form_s("home");
		diego.signForm(form_s);
		diego.executeForm(form_s);
		diego.executeForm(form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	/////////////    Robotomy test      /////////


	try //jason can't sign
	{
		RobotomyRequestForm form_s("Home");
		jason.signForm(form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego sign but jason can't execute
	{
		RobotomyRequestForm form_s("Home");
		diego.signForm(form_s);
		jason.executeForm(form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego try execute but not signed
	{
		RobotomyRequestForm form_s("Home");
		diego.executeForm(form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego execute tow times
	{
		RobotomyRequestForm form_s("Home");
		diego.signForm(form_s);
		diego.executeForm(form_s);
		diego.executeForm(form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	/////////////    presidential test      /////////



	try //jason can't sign
	{
		PresidentialPardonForm form_s("Home");
		jason.signForm(form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego sign but jason can't execute
	{
		PresidentialPardonForm form_s("Home");
		diego.signForm(form_s);
		jason.executeForm(form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego try execute but not signed
	{
		PresidentialPardonForm form_s("Home");
		diego.executeForm(form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego execute tow times
	{
		PresidentialPardonForm form_s("Home");
		diego.signForm(form_s);
		diego.executeForm(form_s);
		diego.executeForm(form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
