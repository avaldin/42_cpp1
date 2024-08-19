#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
public:

	Animal();
	Animal(Animal const &copy);
	Animal	&operator=(const Animal &copy);
	~Animal();

	virtual void	makeSound() const;
	std::string	getType() const;
protected:

	std::string	type;
};


#endif

