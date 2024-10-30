
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main_ex01()
{

	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl << std::endl;
	return (0);
}

int	array_test()
{
	Animal *array[20];
	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
			array[i] = new Dog();
		else
			array[i] = new Cat();
		std::cout << std::endl;
	}
	for (int i = 0; i < 20; i++)
		array[i]->makeSound();
	std::cout << std::endl << std::endl;

	for (size_t i = 0; i < 20; i++)
		delete array[i];
	std::cout << std::endl << std::endl;

	return (0);
}

int	copy_test()
{
	Dog	*dog = new Dog();
	Cat	*cat = new Cat();
	std::cout << std::endl << std::endl;

	Dog	*dog_copy = new Dog(*dog);
	Cat	*cat_copy = new Cat(*cat);
	std::cout << std::endl << std::endl;

	delete dog;
	delete cat;
	delete dog_copy;
	delete cat_copy;
	std::cout << std::endl << std::endl;

	return (0);
}

int main()
{
	main_ex01();
	array_test();
	copy_test();

	return (0);
}