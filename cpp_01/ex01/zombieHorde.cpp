#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];
	int 	i = -1;

	if (N < 1)
		return (NULL);
	while (++i < N)
		horde[i] = Zombie(name);
	return (horde);
}