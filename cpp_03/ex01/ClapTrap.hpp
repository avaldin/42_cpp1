
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>


class ClapTrap
{
public:

	ClapTrap(const std::string& name);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	~ClapTrap();
private:

	std::string	name;
	unsigned int	hitPoint;
	unsigned int	energyPoint;
	unsigned int	attackDommage;
};



#endif //CLAPTRAP_HPP
