#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

template<typename T>
void	Swap(T a, T b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

class Whatever
{
public:

	//constructor, destructor and operator

	Whatever();

	Whatever(Whatever const &copy);

	Whatever &operator=(const Whatever &copy);

	~Whatever();

	//methods

	//getteur and setter

protected:

};

#endif
