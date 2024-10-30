#include "Cat.hpp"

#include <iostream>

Cat::Cat()
{
	std::cout << "constructor Cat called" << std::endl;
	this->type = "cat";
	this->brain = new Brain;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "copy constructor Cat called" << std::endl;
	this->brain = new Brain(*copy.brain);
	this->type = copy.type;
}

Cat	&Cat::operator=(const Cat &copy)
{
	std::cout << "copy assignement operator Cat called" << std::endl;
	this->type = copy.type;
	this->brain = copy.brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "destructor Cat called" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}
