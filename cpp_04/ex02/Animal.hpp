#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
public:

	virtual ~Animal();

	virtual void	makeSound() const;
	std::string	getType() const;
protected:

	Animal();
	Animal(Animal const &copy);
	Animal	&operator=(const Animal &copy);
	std::string	type;
};


#endif
