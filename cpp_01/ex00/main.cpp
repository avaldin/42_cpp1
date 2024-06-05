#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombiePtr;

	zombiePtr = newZombie("jose");
	zombiePtr->announce();
	randomChump("diego");
	delete zombiePtr;
}