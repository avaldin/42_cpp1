#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat	diego("diego", 5);
	Bureaucrat	jason("jason", 150);
	Bureaucrat	pedro("pedro", 26);
	Intern		john;
	/////////////    Shrubbery test      /////////

	try //jason can't sign
	{
		AForm *form_s = john.makeForm("shrubbery creation", "Home");
		jason.signForm(*form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego sign but jason can't execute
	{
		AForm *form_s = john.makeForm("shrubbery creation", "Home");
		diego.signForm(*form_s);
		jason.executeForm(*form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego try execute but not signed
	{
		AForm *form_s = john.makeForm("shrubbery creation", "Home");
		diego.executeForm(*form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego execute tow times
	{
		AForm *form_s = john.makeForm("shrubbery creation", "Home");
		diego.signForm(*form_s);
		diego.executeForm(*form_s);
		diego.executeForm(*form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	/////////////    Robotomy test      /////////


	try //jason can't sign
	{
		AForm *form_s = john.makeForm("robotomy request", "Home");
		jason.signForm(*form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego sign but jason can't execute
	{
		AForm *form_s = john.makeForm("robotomy request", "Home");
		diego.signForm(*form_s);
		jason.executeForm(*form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego try execute but not signed
	{
		AForm *form_s = john.makeForm("robotomy request", "Home");
		diego.executeForm(*form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego execute tow times
	{
		AForm *form_s = john.makeForm("robotomy request", "Home");
		diego.signForm(*form_s);
		diego.executeForm(*form_s);
		diego.executeForm(*form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	/////////////    presidential test      /////////



	try //jason can't sign
	{
		AForm *form_s = john.makeForm("presidential pardon", "Home");
		jason.signForm(*form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego sign but jason can't execute
	{
		AForm *form_s = john.makeForm("presidential pardon", "Home");
		diego.signForm(*form_s);
		jason.executeForm(*form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego try execute but not signed
	{
		AForm *form_s = john.makeForm("presidential pardon", "Home");
		diego.executeForm(*form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try // diego execute tow times
	{
		AForm *form_s = john.makeForm("presidential pardon", "Home");
		diego.signForm(*form_s);
		diego.executeForm(*form_s);
		diego.executeForm(*form_s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
