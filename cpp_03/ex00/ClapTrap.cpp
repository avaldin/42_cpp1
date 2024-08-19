
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string& name) : hitPoint(10), energyPoint(10), attackDommage(0)
{
	this->name = name;
	std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap() : hitPoint(0), energyPoint(0), attackDommage(0)
{
	std::cout << "default claptrap created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->hitPoint = copy.getHitPoint();
	this->energyPoint = copy.getEnergyPoint();
	this->attackDommage = copy.getAttackDommage();
	this->name = copy.getName();
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	this->hitPoint = copy.getHitPoint();
	this->energyPoint = copy.getEnergyPoint();
	this->attackDommage = copy.getAttackDommage();
	this->name = copy.getName();
	std::cout << "ClapTrap copy assignment constructor called" << std::endl;
	return (*this);
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
	std::cout << "ClapTrap " << name << " loose " << amount << " hit point!" << std::endl;
	if (hitPoint <= amount)
		hitPoint = 0;
	else
		hitPoint = hitPoint - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!energyPoint)
		return ;
	std::cout << "ClapTrap " << name << " recovered " << amount << " hit point!" << std::endl;
	if (hitPoint >= 10 - amount)
		hitPoint = 10;
	else
		hitPoint = hitPoint + amount;
	energyPoint--;
}

unsigned int	ClapTrap::getHitPoint() const
{
	return (hitPoint);
}

unsigned int ClapTrap::getAttackDommage() const
{
	return (attackDommage);
}

unsigned int ClapTrap::getEnergyPoint() const
{
	return (energyPoint);
}

std::string	ClapTrap::getName() const
{
	return (name);
}


