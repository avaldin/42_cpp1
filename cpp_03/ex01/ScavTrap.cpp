//
// Created by avaldin on 16/08/24.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap created" << std::endl;
	hitPoint = 100;
	energyPoint = 50;
	attackDommage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroyed" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (energyPoint >= 1)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDommage << " points of damage!" << std::endl;
		energyPoint--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << name << " is in guardGate" << std::endl;
}

