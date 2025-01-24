#ifndef CPP_07_ARRAY_HPP
#define CPP_07_ARRAY_HPP

#include <cstring>
#include <iostream>

template<typename A>

class Array
{
public:

	//constructor, destructor and operator

	Array(): array(new A[0]()), n(0) {}

	Array(unsigned int size): array(new A[size]()), n(size) {}

	Array(Array const &copy): n(copy.n) { *this = copy; }

	Array &operator=(const Array &copy) {
		if (this->array != NULL)
			delete [] array;
		n = copy.n;
		array = new A[n];
		for (unsigned int i = 0; i < n; ++i) {
			array[i] = copy.array[i];
		}
		return (*this);
	}

	A	&operator[](unsigned int i) const {
		if (i >= n || n == 0 || array == NULL)
		{
			throw OutOfRange();
		}
		return (array[i]);
	}

	~Array() { delete[] (this->array); }


	unsigned int	size() { return (n); }

	class OutOfRange : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("index out of range");
		}
	};

private:
	A				*array;
	unsigned int	n;
};



#endif
