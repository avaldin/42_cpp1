//
// Created by avaldin on 16/08/24.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>


class ClapTrap
{
public:

	ClapTrap(const std::string& name);
	ClapTrap();
	ClapTrap(ClapTrap const &copy);
	ClapTrap	&operator=(const ClapTrap &copy);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	unsigned int	getHitPoint() const;
	unsigned int	getEnergyPoint() const;
	unsigned int	getAttackDommage() const;
	std::string		getName() const;

private:

	std::string	name;
	unsigned int	hitPoint;
	unsigned int	energyPoint;
	unsigned int	attackDommage;
};



#endif //CLAPTRAP_HPP
