
#include "ClapTrap.hpp"

int	main()
{
	ClapTrap joey("joey");
	ClapTrap diego("diego");

	diego.attack("joey");
	joey.takeDamage(0);
	joey.takeDamage(5);
	joey.beRepaired(3);
	return (0);
}