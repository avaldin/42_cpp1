#include "Cat.hpp"

#include <iostream>

Cat::Cat()
{
	std::cout << "constructor Cat called" << std::endl;
	this->type = "cat";
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "copy constructor Cat called" << std::endl;
	this->type = copy.type;
}

Cat &Cat::operator=(Cat copy)
{
	std::cout << "copy assignement operator Cat called" << std::endl;
	this->type = copy.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "destructor Cat called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}
