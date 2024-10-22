#include "Zombie.hpp"

Zombie::Zombie() : name() {
	std::cout << "random zombie created" << std::endl;
}
Zombie::Zombie(std::string name) : name(name) {
	std::cout << this->name << " created" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
