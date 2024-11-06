#ifndef CAT_HPP
#define CAT_HPP
#include <string>

#include "Animal.hpp"

class Cat : public Animal
{
public:
	// constructor, destructor and operator

	Cat();
	Cat(Cat const &copy);
	Cat &operator=(Cat copy);
	~Cat();

	// methode
	void afficher() const;
	void makeSound() const;
};

#endif