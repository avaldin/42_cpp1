#include <sstream>
#include <iostream>
#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &copy) {
	stack = copy.stack;
}

RPN &RPN::operator=(const RPN &copy) {
	stack = copy.stack;
	return (*this);
}

RPN::~RPN() {}

void RPN::exec(std::stringstream &inputLine) {
	std::string	input;
	int	a;

	if (inputLine.str().empty())
		throw EmptyInputException();
	while (std::getline(inputLine, input, ' ')) {
		if (input.length() != 1)
			throw BadInputException();
		else if (input <= "9" && input >= "0")
			stack.push(input.at(0) - 48);
		else if (stack.size() < 2)
			throw BadInputException();
		else if (input == "+") {
			a = stack.top();
			stack.pop();
			stack.top() += a;
		}
		else if (input == "-") {
			a = stack.top();
			stack.pop();
			stack.top() -= a;
		}
		else if (input == "/") {
			if (stack.top() == 0)
				throw ZeroDivException();
			a = stack.top();
			stack.pop();
			stack.top() /= a;
		}
		else if (input == "*") {
			a = stack.top();
			stack.pop();
			stack.top() *= a;
		}
		else
			throw BadInputException();
	}
	if (stack.size() != 1)
		throw BadInputException();
	std::cout << stack.top() << std::endl;

}
