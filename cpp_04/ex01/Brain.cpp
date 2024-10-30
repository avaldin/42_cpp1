#include "Brain.hpp"

#include <iostream>
#include <ostream>
#include <sstream>

Brain::Brain()
{
	std::ostringstream 	number;
	std::cout << "constructor Brain called" << std::endl;
	for (int i = 0; i < 100; ++i)
	{
		number << i;
		ideas[i] = "idea n." + number.str();
	}
}

Brain::Brain(Brain const &copy)
{
	int	i = 0;

	std::cout << "copy constructor brain called" << std::endl;
	while (i  < 100)
	{
		this->ideas[i] = copy.ideas[i];
		i++;
	}
}

Brain	&Brain::operator=(const Brain &copy)
{
	int	i = 0;

	std::cout << "copy assignement operator brain called" << std::endl;
	while (i  < 100)
	{
		this->ideas[i] = copy.ideas[i];
		i++;
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "brain destructor called" << std::endl;
}
