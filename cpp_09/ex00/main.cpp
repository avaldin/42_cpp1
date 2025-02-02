#include <iostream>
#include "BitcoinExchange.hpp"

int	main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}
	(void) argv;
	try {
		BitcoinExchange ex = BitcoinExchange();

		ex.parsCSV();
		ex.trade(argv[1]);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}