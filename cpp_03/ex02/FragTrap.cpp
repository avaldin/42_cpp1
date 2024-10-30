
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap created" << std::endl;
	hitPoint = 100;
	energyPoint = 100;
	attackDommage = 30;
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "default Fragtrap created" << std::endl;
	hitPoint = 100;
	energyPoint = 100;
	attackDommage = 30;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap copy assignment constructor called" << std::endl;
	if (this == &copy)
		return (*this);
	this->hitPoint = copy.getHitPoint();
	this->energyPoint = copy.getEnergyPoint();
	this->attackDommage = copy.getAttackDommage();
	this->name = copy.getName();
	return (*this);
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	this->hitPoint = copy.getHitPoint();
	this->energyPoint = copy.getEnergyPoint();
	this->attackDommage = copy.getAttackDommage();
	this->name = copy.getName();
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroyed" << std::endl;
}

void FragTrap::HighFiveGuys()
{
	std::cout << name << " HightFive " << std::endl;
}
