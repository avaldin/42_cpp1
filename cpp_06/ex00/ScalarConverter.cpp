#include "ScalarConverter.hpp"
#include <string>
#include <sstream>
#include <iostream>
#include <limits>

void	toPrint(char c, int i, float f, double d)
{
	if (static_cast<float>(c) != f)
		std::cout << "char : impossible" << std::endl;
	else if (c < 32 || c == 127)
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : '" << c << "'" << std::endl;
	if (static_cast<float>(i) == f)
		std::cout << "int : " << i << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
	if (f == static_cast<float>(i))
		std::cout << "float : " << f << ".0f" << std::endl;
	else if (f == static_cast<float>(d))
		std::cout << "float : " << f << "f" << std::endl;
	else
		std::cout << "float : "<< f << std::endl;
	if (d == static_cast<double>(i))
		std::cout << "double : " << d << ".0" << std::endl;
	else
		std::cout << "double : " << d << std::endl;
}

bool toChar(const std::string &toConvert)
{
	if (toConvert.length() > 1 || isdigit(toConvert[0]))
		return (false);
	toPrint(toConvert[0],
			static_cast<int>(toConvert[0]),
			static_cast<float>(toConvert[0]),
			static_cast<double>(toConvert[0]));
	return (true);
}

bool toInt(const std::string &toConvert)
{
	char	c;
	std::stringstream	ss(toConvert);
	int 				i;

	ss >> i;
	if (ss.fail() || ss >> c)
		return(false);
	toPrint(static_cast<char>(i), i, static_cast<float>(i), static_cast<double>(i));
	return (true);
}

bool toFloat(const std::string& toConvert)
{
	std::stringstream ss(toConvert.substr(0, toConvert.length() - 1));
	float	f;
	char	c;
	std::string	str;

	if (toConvert[toConvert.length() - 1] != 'f')
		return (false);
	ss >> f;
	if (ss.fail() || ss >> c)
		return (false);
	toPrint(static_cast<char>(f), static_cast<int>(f), f, static_cast<double>(f));
	return (true);
}

bool toDouble(const std::string& toConvert)
{
	std::stringstream ss(toConvert);
	double	d;
	char	c;

	ss >> d;
	if (ss.fail() || ss >> c)
		return (false);
	toPrint(static_cast<char>(d), static_cast<int>(d), static_cast<float>(d), d);
	return (true);
}

void ScalarConverter::convert(const std::string& toConvert)
{
	if (toConvert.empty())
		return ;
	if (toChar(toConvert) || toInt(toConvert) || toFloat(toConvert) || toDouble(toConvert))
		return ;
	else if (toConvert == "nan" || toConvert == "nanf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
	}
	else if (toConvert == "+inf" )
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << std::numeric_limits<float>::infinity() << std::endl;
		std::cout << "double : " << std::numeric_limits<double>::infinity() << std::endl;
	}
	else if (toConvert == "-inf" )
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << -std::numeric_limits<float>::infinity() << std::endl;
		std::cout << "double : " << -std::numeric_limits<double>::infinity() << std::endl;
	}
	else
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
	}
}



