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

	//getteur and setter

private:

	std::set<int>	span;

	unsigned int	size;
	unsigned int	sizeMax;
	unsigned int	shortest;
	unsigned int	longest;


	void 			setShortestSpan(int num);
	void 			setLongestSpan(int num);

	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	void			addSpanByIterato()

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
