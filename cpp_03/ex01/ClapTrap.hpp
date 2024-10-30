
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>


class ClapTrap
{
public:

	ClapTrap(const std::string& name);
	ClapTrap();
	ClapTrap(const ClapTrap &copy);
	ClapTrap	&operator=(const ClapTrap &copy);
	~ClapTrap();

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	unsigned int    getHitPoint() const;
	unsigned int    getEnergyPoint() const;
	unsigned int    getAttackDommage() const;
	std::string             getName() const;

protected:

	std::string		name;
	unsigned int	hitPoint;
	unsigned int	energyPoint;
	unsigned int	attackDommage;
};



#endif //CLAPTRAP_HPP
