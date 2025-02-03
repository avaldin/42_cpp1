#include <iostream>
#include "PmergeMe.hpp"

int	main(int argc, char **argv) {
	PmergeMe me = PmergeMe();

	try
	{
		me.parser(argc, argv);
		me.sorting();
		me.printResult();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return(1);
}