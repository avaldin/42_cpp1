#include "Span.hpp"
#include <climits>
#include <cstdlib>
#include <ctime>
#include <iostream>

Span::Span(unsigned int N) : size(0), sizeMax(N) { }

Span::Span(Span const &copy) { *this = copy; }

Span &Span::operator=(const Span &copy) {
	if (this != &copy) {
		span = copy.span;
		size = copy.size;
		sizeMax = copy.sizeMax;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int num) {
	if (size >= sizeMax)
		throw sizeMaxException();
	if (span.find(num) != span.end())
		throw duplicateNumberException();
	span.insert(num);
	size = span.size();
}

unsigned int	Span::shortestSpan() {
	unsigned int shortest = UINT_MAX;

	if (size <= 1)
		throw sizeToLowException();
	std::set<int>::iterator first = span.begin() ,second = span.begin()++;
	second++;
	while (second != span.end())
	{
		if ((unsigned int)(*second - *first) < shortest)
			shortest = (unsigned int)(*second - *first);
		first++;
		second++;
	}
	return (shortest);
}

unsigned int	Span::longestSpan() {
	if (size <= 1)
		throw sizeToLowException();
	std::set<int>::iterator first = span.begin() ,last = span.begin();
	for (unsigned int i = 0; i < size - 1; ++i)
		last++;
	return ((unsigned int)(*last - *first));
}

void	Span::addSpanByIterator(std::set<int>::iterator it1, std::set<int>::iterator it2) {
	while(it1 != it2 && size < sizeMax) {
		addNumber(*it1);
		it1++;
	}
}

void	Span::addRandomNumbers(int count) {
	srand(std::time(NULL));
	int rand;
	for (int i = 0; i < count; ++i) {
		while (span.find(rand = std::rand()) != span.end());
		addNumber(rand);
	}
}
