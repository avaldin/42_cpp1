#include <iostream>

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP



class ScavTrap
{
public:

	explicit ScavTrap(const std::string& name);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	~ScavTrap();
private:

	std::string	name;
	unsigned int	hitPoint;
	unsigned int	energyPoint;
	unsigned int	attackDommage;
};



#endif //SCAVTRAP_HPP
