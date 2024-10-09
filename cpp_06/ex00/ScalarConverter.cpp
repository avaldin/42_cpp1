#include "ScalarConverter.hpp"
#include <string>
#include <sstream>
#include <iostream>

void	toPrint(char c, int i, float f, double d)
{
	if (c < 32 || c == 127)
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : '" << c << "'" << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << f << std::endl;
	if (f < -100000000 || f > 100000000)
		std::cout << ".0f" << std::endl;
	std::cout << "double : " << d << std::endl;
	if (d < -100000000 || d > 10000000)
		std::cout << ".0" << std::endl;
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
	std::stringstream ss(toConvert.substr());
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
	else
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
	}
}



