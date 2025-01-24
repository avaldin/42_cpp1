#include "Array.hpp"


int	main() {
	
	try
	{
		Array<int> tab(50);
		Array<int> tab2;

		std::cout << "tab2 size ->" << tab2.size() << std::endl;

		tab[3] = 22;

		std::cout << "tab size: " << tab.size() << " tab[3] = " << tab[3] << std::endl;
		tab[200] = 55;

		tab = tab2;
		std::cout << "tab 2 size: " << tab2.size() << " tab2[3] = " << tab2[3] << std::endl;

	}
	catch (Array<int>::OutOfRange &e)
	{
		std::cout << e.what() << std::endl;
	}
}