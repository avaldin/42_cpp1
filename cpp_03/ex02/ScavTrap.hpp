#include <iostream>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP



class ScavTrap : public ClapTrap
{
public:

	ScavTrap(const std::string& name);
	ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap	&operator=(const ScavTrap &copy);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};



#endif //SCAVTRAP_HPP
