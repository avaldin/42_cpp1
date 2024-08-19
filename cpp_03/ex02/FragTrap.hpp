
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(const std::string &name);
	FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap	&operator=(const FragTrap &copy);
	~FragTrap();

	void HighFiveGuys();
};



#endif //FRAGTRAP_HPP
