
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	joey("joey");
	ClapTrap	diego("diego");
	ScavTrap	didier("didier");
	FragTrap	moussa("moussa");

	diego.attack("joey");
	joey.takeDamage(0);
	joey.takeDamage(5);
	moussa.HighFiveGuys();
	didier.attack("jerome");
	moussa.attack("joey");
	didier.guardGate();
	didier.takeDamage(20);
	joey.beRepaired(3);
	return (0);
}
