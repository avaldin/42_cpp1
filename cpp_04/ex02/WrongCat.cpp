#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "constructor WrongCat called" << std::endl;
	this->type = "Wrongcat";
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
	std::cout << "copy constructor WrongCat called" << std::endl;
	this->type = copy.type;
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "copy assignement operator WrongCat called" << std::endl;
	this->type = copy.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "destructor WrongCat called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}
