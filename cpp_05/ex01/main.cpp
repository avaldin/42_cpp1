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
		Form	form_d("c", 150, 50);
		Form	form_db(form_d);
		diego.signForm(form_d);
		jason.signForm(form_d);
		pedro.signForm(form_d);
		diego.signForm(form_db);
		jason.signForm(form_db);
		pedro.signForm(form_db);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form	form_a("a", 200, 50);
		Form	form_ab(form_a);
		diego.signForm(form_a);
		jason.signForm(form_a);
		pedro.signForm(form_a);
		diego.signForm(form_ab);
		jason.signForm(form_ab);
		pedro.signForm(form_ab);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form	form_b("b", 100, 50);
		Form	form_bb = form_b;
		diego.signForm(form_b);
		diego.signForm(form_bb);
		jason.signForm(form_b);
		pedro.signForm(form_b);
		jason.signForm(form_bb);
		pedro.signForm(form_bb);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}



	try
	{
		Form	form_c("c", 1, 50);
		Form	form_cb(form_c);
		pedro.signForm(form_c);
		pedro.signForm(form_cb);
		diego.signForm(form_c);
		jason.signForm(form_c);
		diego.signForm(form_cb);
		jason.signForm(form_cb);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
