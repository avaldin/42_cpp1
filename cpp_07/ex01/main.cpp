#include <iostream>
#include "iter.hpp"

template <typename W>
void f(W &w) {
	 w = 49;
}

int	main() {
	char str[11] = "0000000000";
	iter(str, 10, &f<char>);
	std::cout << str << std::endl;

	int array[5];
	iter(array, 5, &f<int>);
	std::cout << array[0] << array[1] << array[2] << array[3] << array[4] << std::endl;
}
