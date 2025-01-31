#ifndef CPP_08_SPAN_HPP
#define CPP_08_SPAN_HPP

#include <set>
#include <exception>

class Span
{
public:

	//constructor, destructor and operator

	Span(unsigned int N);
	Span(Span const &copy);
	Span &operator=(const Span &copy);
	~Span();

	//methods

	void	addNumber(int num);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	void			addSpanByIterator(std::set<int>::iterator it1, std::set<int>::iterator it2);
	void 			addRandomNumbers(int count);
	//getteur and setter

private:

	std::set<int>	span;

	unsigned int	size;
	unsigned int	sizeMax;


	class sizeMaxException : public std::exception
	{
	public:
		virtual const char * what() const throw() {
			return ("the Span is full");
		}
	};

	class sizeToLowException : public std::exception
	{
	public:
		virtual const char * what() const throw() {
			return ("the size of the list is to low to have a span");
		}
	};

	class duplicateNumberException : public std::exception
	{
	public:
		virtual const char * what() const throw() {
			return ("this number is already in the Span");
		}
	};

};

#endif
