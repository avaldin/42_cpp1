
#include "Dog.hpp"
#include <iostream>
#include "Animal.hpp"

Dog::Dog()
{
	this->type = "dog";
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	this->type = copy.type;
}

Dog	&Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	return (*this);
}

Dog::~Dog()
{

}

void Dog::makeSound() const
{
	std::cout << "bark" << std::endl;
}
