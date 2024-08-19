#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain
{
public:

	//constructor, destructor and operator
	
	Brain();
	Brain(Brain const &copy);
	Brain	&operator=(const Brain &copy);
	~Brain();
	
	//methods

	//getteur and setter

protected:

	std::string	ideas[100];
};

#endif
