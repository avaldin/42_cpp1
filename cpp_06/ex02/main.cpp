#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
	int		i;

	srand(time(0));
	i = rand() % 3;
	if (i == 0)
	{
		std::cout << "generated A" << std::endl;
		return (new A);
	}
	else if (i == 1)
	{
		std::cout << "generated B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "generated C" << std::endl;
		return (new C);
	}
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
	C		*cPtr = &c;
	Base	base;

	identify(&a);
	identify(&b);
	identify(&c);
	identify(a);
	identify(b);
	identify(c);
	identify(cPtr);
	identify(generate());
	return (0);
}