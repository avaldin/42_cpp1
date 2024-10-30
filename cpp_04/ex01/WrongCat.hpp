#ifndef CPP_04_WRONGCAT_HPP
#define CPP_04_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:

	//constructor, destructor and operator

	WrongCat();
	WrongCat(WrongCat const &copy);
	WrongCat	&operator=(const WrongCat &copy);
	~WrongCat();

	//methods

	void	makeSound() const;
};

#endif
