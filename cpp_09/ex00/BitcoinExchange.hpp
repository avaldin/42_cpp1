#ifndef EX00_BITCOINEXCHANGE_HPP
#define EX00_BITCOINEXCHANGE_HPP

#include <map>

class BitcoinExchange
{
public:

	//constructor, destructor and operator

	BitcoinExchange();

	BitcoinExchange(BitcoinExchange const &copy);

	BitcoinExchange &operator=(const BitcoinExchange &copy);

	~BitcoinExchange();

	//methods

	void	parsCSV();


	//getteur and setter

private:
	std::map<int[3], float> CSV;

	void parsLine(std::string& line);
};

#endif
