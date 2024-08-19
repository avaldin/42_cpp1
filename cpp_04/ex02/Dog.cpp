
#include "Dog.hpp"
#include <iostream>
#include "Animal.hpp"

Dog::Dog()
{
	this->type = "dog";
	std::cout << "constructor Dog called" << std::endl;
	this->brain = new Brain;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	this->type = copy.type;
	std::cout << "copy constructor Dog called" << std::endl;
	this->brain = copy.brain;
}

Dog	&Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	std::cout << "copy assignement operator Dog called" << std::endl;
	this->brain = copy.brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "destructor Dog called" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "bark" << std::endl;
}
