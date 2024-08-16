
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap created" << std::endl;
	hitPoint = 100;
	energyPoint = 100;
	attackDommage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroyed" << std::endl;
}

void FragTrap::HighFiveGuys()
{
	std::cout << name << " HightFive " << std::endl;
}
