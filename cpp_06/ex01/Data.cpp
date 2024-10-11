#include "Data.hpp"

Data::Data() : i(0) {}

Data::Data(Data const &copy) : i(copy.getI()) {}

Data &Data::operator=(const Data &copy)
{
	if (this != &copy)
		this->i = copy.getI();
	return (*this);
}

Data::~Data() {};

Data::Data(int i) : i(i) {}

int Data::getI() const
{
	return i;
}

void Data::setI(int set)
{
	this->i = set;
}
