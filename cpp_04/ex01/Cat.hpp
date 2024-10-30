#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"


class Cat : public Animal
{
public:

	//constructor, destructor and operator
	
	Cat();
	Cat(Cat const &copy);
	Cat	&operator=(const Cat &copy);
	~Cat();
	
	//methods
	void	makeSound() const;
private:
	Brain	*brain;
};

#endif
