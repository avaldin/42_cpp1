
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap joey("joey");
	ClapTrap diego("diego");
	ScavTrap didier("didier");

	diego.attack("joey");
	joey.takeDamage(0);
	joey.takeDamage(5);
	didier.attack("jerome");
	didier.guardGate();
	didier.takeDamage(20);
	joey.beRepaired(3);
	return (0);
}
