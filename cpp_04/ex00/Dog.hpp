#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:

	//constructor, destructor and operator
	
	Dog();
	Dog(Dog const &copy);
	Dog	&operator=(const Dog &copy);
	~Dog();
	
	//methods

	void	makeSound() const;
};

#endif