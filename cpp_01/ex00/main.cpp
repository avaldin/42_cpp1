#include "Zombie.hpp"

int	main()
{
	Zombie	*zombiePtr;

	zombiePtr = newZombie("jose");
	zombiePtr->announce();
	randomChump("diego");
	delete zombiePtr;
}