#include <iostream>
#include "PmergeMe.hpp"

int	main(int argc, char **argv) {
	PmergeMe me = PmergeMe();

	if (argc < 2)
		return (1);
	try
	{
		me.sorting(argc, argv);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return(1);
}