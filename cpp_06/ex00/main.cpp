#include <iostream>
#include "ScalarConverter.hpp"

int	main(void)
{
	ScalarConverter::convert("0");
	std::cout << "char = non displayable, int = 0, float = 0.0f, double = 0.0" << std::endl;
	std::cout << std::endl;
	ScalarConverter::convert("1");
	std::cout << "char = non displayable, int = 1, float = 1.0f, double = 1.0" << std::endl;
	std::cout << std::endl;
	ScalarConverter::convert("68");
	std::cout << "char = D, int = 68, float = 68.0f, double = 68.0" << std::endl;
	std::cout << std::endl;
	ScalarConverter::convert("a");
	std::cout << "char = a, int = 97, float = 97.0f, double = 97.0" << std::endl;
	std::cout << std::endl;
	ScalarConverter::convert("1.1");
	std::cout << "char = non displayable, int = impossible, float = 1.1f, double = 1.1" << std::endl;
	std::cout << std::endl;
	ScalarConverter::convert("1.1f");
	std::cout << "char = non displayable, int = impossible, float = 1.1f, double = 1.1" << std::endl;
	return (0);
}