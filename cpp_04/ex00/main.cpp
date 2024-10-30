

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wCat = new WrongCat();

	std::cout << dog->getType() << " have to be dog " << std::endl;
	std::cout << cat->getType() << " have to be cat " << std::endl;
	std::cout << wCat->getType() << " have to be cat " << std::endl;
	dog->makeSound(); //will output the cat sound!
	cat->makeSound();
	meta->makeSound();
	wCat->makeSound();

	delete meta;
	delete dog;
	delete cat;
	delete wCat;
	return 0;
}
