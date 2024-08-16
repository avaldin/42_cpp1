#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int intValue)
{
	value = intValue << fractionalBits;
	std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed(float floatValue)
{
	float	temp;
	temp = floatValue * ( 1 << fractionalBits);
	if (temp >= 0) {
		value = static_cast<int>(temp + 0.5f);
	} else {
		value = static_cast<int>(temp - 0.5f);
	}
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &fixed)
		return (*this);
	this->value = fixed.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(value) / static_cast<float>(1 << fractionalBits));
}

int		Fixed::toInt(void) const
{
	float	temp;
	int		intValue;

	temp = static_cast<float>(value) / static_cast<float>(1 << fractionalBits);
	intValue =  static_cast<int>(temp);
	if ((static_cast<float>(static_cast<int>(temp))) + 0.5 < temp)
		intValue++;
	return (intValue);
}

std::ostream	&operator<<(std::ostream& os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool	Fixed::operator>(Fixed fixed) const
{
	return (toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(Fixed fixed) const
{
	return (toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(Fixed fixed) const
{
	return (toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(Fixed fixed) const
{
	return (toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(Fixed fixed) const
{
	return (toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed fixed) const
{
	return (toFloat() != fixed.toFloat());
}

float	Fixed::operator+(Fixed fixed) const
{
	return (toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
	return (toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
	return (toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
	return (toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator++()
{
	value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	// i = this->_fp_value;
	value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	// i = this->_fp_value;
	value--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() <= b.toFloat())
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}