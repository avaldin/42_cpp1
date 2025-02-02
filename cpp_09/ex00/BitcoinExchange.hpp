#ifndef EX00_BITCOINEXCHANGE_HPP
#define EX00_BITCOINEXCHANGE_HPP

#include <map>
#include <fstream>
#include <iostream>

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
	void	trade(std::string const & input);


	//getteur and setter

private:
	typedef struct s_date {
		int year;
		int month;
		int day;

		bool operator<(const s_date &other) const {
			if (year != other.year) return (year < other.year);
			if (month != other.month) return (month < other.month);
			return (day < other.day);
		}

		bool operator!=(const s_date &other) const {
			if (year != other.year || month != other.month || day != other.day)
				return (true);
			return (false);
		}
	} t_date;

	void 	parsCsvLine(std::string& line);
	void 	parsInputLine(std::string& line);

	std::map<t_date, float> CSV;


	class BadCSVException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("bad CSV forat");
		}
	};

	class OpenException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Open failed");
		}
	};

	class HeaderException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Bad header for input");
		}
	};
};

#endif
