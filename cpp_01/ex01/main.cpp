#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int	i = -1;

	horde = zombieHorde(10, "jose");
	while (++i < 10)
		horde[i].announce();
	delete[] horde;
}