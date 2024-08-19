#include "Brain.hpp"

#include <iostream>
#include <ostream>

Brain::Brain()
{
	std::cout << "constructor Brain called" << std::endl;

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
