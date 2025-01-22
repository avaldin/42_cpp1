#include <iostream>
#include "iter.hpp"


void fA(int *array) {
	*array = 1;
}

void	fB(char *array) {
	*array = 'a';
}

int	main() {
	char str[11] = "0000000000";
	iter(str, 10, fB);
	std::cout << str << std::endl;

	char array[5];
	iter(array, 5, fA);
}