#include <string>
#include <fstream>
#include <sstream>

std::string	replacing(std::string &s1, std::string &s2, std::ifstream &infile)
{
	std::string			new_str;
	std::stringstream	buffer;
	unsigned long 		i = 0;
	unsigned long		j = 0;

	buffer << infile.rdbuf();
	while (i + 1 != 0)
	{
		i = buffer.str().find(s1, j);
		if (i != -1)
		{
			new_str += buffer.str().substr(j, i - j);
			new_str += s2;
			i += s1.length();
			j = i;
		}
	}
	new_str += buffer.str().substr(j);
	return (new_str);
}

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string 	s1;
	std::string 	s2;

	if (argc != 4 || !argv[2][0])
		return (1);
	infile.open(std::string(argv[1]));
	if (!infile.is_open())
		return (2);
	s1 = std::string(argv[2]);
	s2 = std::string(argv[3]);
	outfile.open(std::string(argv[1]) + ".replace");
	if (!outfile.is_open())
		return (infile.close(), 2);
	outfile << replacing(s1, s2, infile);
	infile.close();
	outfile.close();
	return (0);
}