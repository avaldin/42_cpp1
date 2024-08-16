
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string& name) : hitPoint(10), energyPoint(10), attackDommage(0)
{
	this->name = name;
	std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (energyPoint >= 1)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDommage << " points of damage!" << std::endl;
		energyPoint--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " loose " << amount << " hit point!" << std::endl;
	if (hitPoint <= amount)
		hitPoint = 0;
	else
		hitPoint =- amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!energyPoint)
		return ;
	std::cout << name << " recovered " << amount << " hit point!" << std::endl;
	hitPoint =+ amount;
	energyPoint--;
}
