#include "Zombie.hpp"

Zombie::Zombie(const std::string& name) : name(name)
{
	std::cout << this->name << " created" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " destroyed" << std::endl;
}
