#include <iostream>

static bool	ft_IsLowerCase(char c)
{
	if (c < 123 && c > 96)
		return (true);
	return (false);
}

int	main(int argc, char **args)
{
	int		i = 0;
	int 	j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (++i < argc)
	{
		j = 0;
		while (args[i][j])
		{
			if (ft_IsLowerCase(args[i][j]))
				std::cout << (char )(args[i][j] - 32);
			else
				std::cout << args[i][j];
			j++;
		}
	}
	std::cout << std::endl;
	return (0);
}