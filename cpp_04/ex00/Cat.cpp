#include "Cat.hpp"

#include <iostream>

Cat::Cat()
{
	this->type = "cat";
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	this->type = copy.type;
}

Cat	&Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	return (*this);
}

Cat::~Cat()
{

}

void Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}
