#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

std::string	Weapon::getType()
{
	std::string	&ref = type;

	return (ref);
}

void		Weapon::setType(std::string newType)
{
	type = newType;
}
