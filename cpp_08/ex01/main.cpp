#include <iostream>
#include "Span.hpp"

int main() {
	Span test = Span(50000);

	try {
	test.addRandomNumbers(1000);
	}
	catch (std::exception &e) {
		std::cout << std::endl << "1-- " << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	Span adds = Span(10000);
	try {
		adds.addRandomNumbers(5000);
		std::cout << "longest span : " << adds.longestSpan() << std::endl << " smallest span : " << adds.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << std::endl << "2-- " << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	Span low = Span(5);

	try {
		low.addNumber(5);
		low.addNumber(4);
		low.addNumber(3);
		low.addNumber(55);
		low.addNumber(45);
		low.addNumber(67);
		low.addNumber(599);
		low.addNumber(577);

	}
	catch (std::exception &e) {
		std::cout << std::endl << "3-- " << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl << std::endl << "test from subject :"
				  << std::endl;

		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << std::endl << "4-- " << e.what() << std::endl;
	}
}