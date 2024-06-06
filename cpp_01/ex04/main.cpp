#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ofstream	file;
	std::string 	s1;
	std::string 	s2;

	if (argc != 4)
		return (1);
	file.open(argv[1]);
	s1 = std::string(argv[2]);
	s2 = std::string(argv[3]);


}