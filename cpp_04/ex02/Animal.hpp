#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
public:

	Animal();
	Animal(Animal const &copy);
	Animal	&operator=(const Animal &copy);
	virtual	~Animal();


	virtual void	makeSound() const = 0;
	std::string		getType() const;

protected:
	std::string	type;
};


#endif

