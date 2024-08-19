
#include <iostream>
#include "ClapTrap.hpp"


int	main()
{
	ClapTrap	joey("joey");
	ClapTrap	diego("diego");
	ClapTrap	diegobis(diego);
	ClapTrap	joeybis;

	diego.attack("joey");
	std::cout << "joey have " << joey.getHitPoint() << " hitpoint" << std::endl;
	joey.takeDamage(0);
	std::cout << "joey have " << joey.getHitPoint() << " hitpoint" << std::endl;
	joey.takeDamage(5);
	joey.beRepaired(3);
	std::cout << "joey have " << joey.getHitPoint() << " hitpoint" << std::endl;
	joeybis = joey;
	std::cout << "joeybis have " << joeybis.getHitPoint() << " hitpoint" << std::endl;
	return (0);
}