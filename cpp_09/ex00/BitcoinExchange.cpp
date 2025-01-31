#include <fstream>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {

}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy) {
	if (this != &copy)
		*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {
	(void) copy;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {

}

void BitcoinExchange::parsLine(std::string& line) {
	std::stringstream	ss;
	int 				date[3];
	float				price;

	if (line.length() < 12 || line[4] != '-' || line[7] != '-' || line[10] != ',')
	{
		std::cout << "bad data.CSV" << std::endl;
		exit(1);
	}
	ss << line;
	ss >> date[0];
	if (ss.fail() || date[0] < 2000 || date[0] > 2025) {
		std::cout << "bad data.CSV" << std::endl;
		exit(1);
	}
	ss.str(ss.str().erase(0, 5));

	ss >> date[1];
	if (ss.fail() || date[1] < 1 || date[1] > 12) {
		std::cout << "bad data.CSV" << std::endl;
		exit(1);
	}
	ss.str(ss.str().erase(0, 3));

	ss >> date[2];
	if (ss.fail() || date[2] < 0 || date[2] > 31) {
		std::cout << "bad data.CSV" << std::endl;
		exit(1);
	}
	ss.str(ss.str().erase(0, 3));

	ss >> price;
	if (ss.fail() || price < 0) {
		std::cout << "bad data.CSV" << std::endl;
		exit(1);
	}

	CSV[date] = price;
}

void BitcoinExchange::parsCSV() {
	std::ifstream file("data.csv");

	if (!file) {
		std::cerr << "data.csv can't be open" << std::endl;
		exit(1);
	}
	std::string	line;
	while (std::getline(file, line))
		parsLine(line);
}
