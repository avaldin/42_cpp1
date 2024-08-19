
#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	type = "none";
	std::cout << "constructor Animal called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	this->type = copy.type;
	std::cout << "copy constructor Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	this->type = copy.type;
	std::cout << "copy assignement operator Animal called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "destructror Animal called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "give a tye to make a sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}


