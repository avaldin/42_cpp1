#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "value of a is : "<< a << std::endl;
	std::cout << "preincrementation : " << ++a << std::endl;

	std::cout << "value of a is : "<< a << std::endl;
	std::cout << "incrementation : " << a++ << std::endl;

	std::cout << "value of a is : "<< a << std::endl;

	std::cout << "value of b is : "<< b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	std::cout << "a > b = " << (a > b) << std::endl;
	std::cout << "a >= b = " << (a >= b) << std::endl;
	std::cout << "a < b = " << (a < b) << std::endl;
	std::cout << "a <= b = " << (a <= b) << std::endl;
	std::cout << "a == b = " << (a == b) << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;

	return 0;
}