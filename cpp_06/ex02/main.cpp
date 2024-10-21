#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
	int		i;

	i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "this class is A type" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "this class is B type" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "this class is C type" << std::endl;
	else
		std::cout << "We don't know this class" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "this class is A type" << std::endl;
	}
	catch (...)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "this class is B type" << std::endl;
		}
		catch (...)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "this class is C type" << std::endl;
			}
			catch (...)
			{
				std::cout << "We don't know this class" << std::endl;
			}
		}
	}
}

int	main()
{
	A		a;
	B		b;
	C		c;
	Base	base;

	identify(&a);
	identify(&b);
	identify(&c);
	identify(a);
	identify(b);
	identify(a);
	identify(c);
	identify(base);
	identify(&base);
	return (0);
}