#include <iostream>
#include <sstream>
#include "BitcoinExchange.hpp"
#include <limits.h>

BitcoinExchange::BitcoinExchange() {

}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy) {
	if (this != &copy)
		*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {
	CSV = copy.CSV;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {

}

void BitcoinExchange::parsCsvLine(std::string& line) {
	std::stringstream	ss(line);
	t_date date;
	char dash1, dash2, comma;
	float price;

	ss >> date.year >> dash1 >> date.month >> dash2 >> date.day >> comma >> price;
	if (ss.fail() || dash1 != '-' || dash2 != '-' || comma != ',' ||
		date.year < 2000 || date.year > 2025 ||
		date.month < 1 || date.month > 12 ||
		date.day < 1 || date.day > 31 ||
		price < 0) {
		throw BadCSVException();
	}
	CSV[date] = price;
}

void BitcoinExchange::parsCSV() {
	std::string	line;
	std::ifstream file("data.csv");

	if (!file.is_open())
		throw OpenException();
	if (!std::getline(file, line) || line != "date,exchange_rate")
		throw BadCSVException();
	while (std::getline(file, line))
		parsCsvLine(line);
	file.close();
}

void BitcoinExchange::trade(const std::string &input) {
	std::ifstream	file(input.c_str());
	std::string		line;

	if (!file.is_open()){
		std::cout << "uu" << std::endl;
		throw OpenException();
	}
	if (!std::getline(file, line) || line != "date | value")
		throw HeaderException();
	while (std::getline(file, line))
		parsInputLine(line);
}

void BitcoinExchange::parsInputLine(std::string &line) {
	std::stringstream	ss(line);
	t_date				date;
	char				dash1, dash2, pipe;
	float				value;

	ss >> date.year >> dash1 >> date.month >> dash2 >> date.day >> pipe >> value;
	if (ss.fail() || dash1 != '-' || dash2 != '-' || pipe != '|' ||
			date.year < 2000 || date.year > 2050 ||
			date.month < 1 || date.month > 12 ||
			date.day < 1 || date.day > 31) {
		std::cout << "Error: bad input => " << line << std::endl;
	}
	else if (value < 0)
		std::cout << "Error: not a positive value" << std::endl;
	else if (value > 1000)
		std::cout << "Error: too large number" << std::endl;
	else{
		std::map<t_date,float>::iterator it = CSV.begin();
		while (it != CSV.end() && it->first < date)
			it++;
		if (it != CSV.begin() && date != it->first)
			it--;
		std::cout << date.year << "-" << date.month << "-" << date.day
		<< " => " << value << " = " << value * it->second << std::endl;
	}
}

