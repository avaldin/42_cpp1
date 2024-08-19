
#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	type = "none";
}

Animal::Animal(Animal const &copy)
{
	this->type = copy.type;
}

Animal &Animal::operator=(const Animal &copy)
{
	this->type = copy.type;
	return (*this);
}

Animal::~Animal()
{

}

void Animal::makeSound() const
{
	std::cout << "give a tye to make a sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}


