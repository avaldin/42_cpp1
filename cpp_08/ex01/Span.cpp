#include "Span.hpp"
#include <climits>

Span::Span(unsigned int N) : size(0), sizeMax(N), shortest(UINT_MAX), longest(0) { }

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
	if (size == sizeMax)
		throw sizeMaxException();
	if (span.find(num) != span.end())
		throw duplicateNumberException();
	span.insert(num);
	size = span.size();
	setShortestSpan(num);
	setLongestSpan(num);
}

void	Span::setShortestSpan(int num) {
	if (size <= 1)
		return ;
	std::set<int>::iterator first = span.begin() ,second = span.begin()++;
	while (second != span.find(num)) {
		first++;
		second++;
	}
	if ((unsigned int)(*second - *first) < shortest)
		shortest = (unsigned int)(*second - *first);
	first++;
	second++;
	if ((unsigned int)(*second - *first) < shortest)
		shortest = (unsigned int)(*second - *first);
}

void	Span::setLongestSpan() {
	if (size <= 1)
		return ;

	std::set<int>::iterator first = span.begin() ,last = span.begin();
	for (unsigned int i = 0; i < size; ++i)
		last++;
	longest = (unsigned int)(*last - *first);
}

unsigned int Span::longestSpan() {
	if (size <= 1)
		throw sizeToLowException();
	return (longest);
}

unsigned int Span::shortestSpan() {
	if (size <= 1)
		throw sizeToLowException();
	return (shortest);
}
