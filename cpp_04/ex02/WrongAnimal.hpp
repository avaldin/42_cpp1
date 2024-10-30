#ifndef CPP_04_WRONGANIMAL_HPP
#define CPP_04_WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
public:

	WrongAnimal();
	WrongAnimal(WrongAnimal const &copy);
	WrongAnimal	&operator=(const WrongAnimal &copy);
	~WrongAnimal();

	void			makeSound() const;
	std::string		getType() const;

protected:
	std::string	type;
};

#endif
