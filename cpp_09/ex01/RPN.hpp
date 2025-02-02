#ifndef CPP_09_RPN_HPP
#define CPP_09_RPN_HPP

#include <stack>
#include <string>

class RPN
{
public:

	//constructor, destructor and operator

	RPN();

	RPN(RPN const &copy);

	RPN &operator=(const RPN &copy);

	~RPN();

	void	exec(std::stringstream &inputLine);
private:
	std::stack<int>		stack;

	class EmptyInputException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("the input is empty");
		}
	};

	class BadInputException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Error: bad input");
		}
	};

	class ZeroDivException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Error: Division by zero");
		}
	};
};

#endif
