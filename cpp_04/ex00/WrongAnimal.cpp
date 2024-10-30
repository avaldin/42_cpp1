
#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	type = "none";
	std::cout << "constructor Animal called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	this->type = copy.type;
	std::cout << "copy constructor Animal called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.type;
	std::cout << "copy assignement operator Animal called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destructror Animal called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "give a tye to make a sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}


