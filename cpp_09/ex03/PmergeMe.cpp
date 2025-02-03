#include <sstream>
#include <iostream>
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &copy) { (void)copy;}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy) {
	(void)copy;
	return (*this);
}

PmergeMe::~PmergeMe() {}

void PmergeMe::parser(int argc, char **argv) {
	unsigned int		num;

	for (int i = 1; i < argc; ++i) {
		std::stringstream	ss(argv[i]);
		ss >> num;
		if (ss.fail() || findVect(num) != parsed.end())
			throw BadInputException();
		parsed.push_back(num);
	}
}

void	PmergeMe::sorting() {
	mergeInsertion(parsed);
}

void PmergeMe::mergeInsertion(std::vector<unsigned int> lower) {
	std::vector<unsigned int>	upper;
	std::vector<unsigned int>::iterator it1 = lower.begin();
	std::vector<unsigned int>::iterator it2 = lower.begin();

	if (lower.size() == 1) {
		finalVect.insert(finalVect.begin(), *lower.begin());
		return ;
	}
	it2++;
	for (std::vector<unsigned int>::iterator it ;it1 != lower.end() && it2 != lower.end();) {
		it = it2;
		if (*it1 > *it2)
			it = it1;
		it1 += 2;
		if (it1 != lower.end())
			it2 += 2;
		upper.push_back(*it);
		lower.erase(it);
	}
	mergeInsertion(upper);
	while (!lower.empty()) {
		it1 = dichotomy(*lower.begin(), 0, finalVect.size() - 1);
		finalVect.insert(it1, *lower.begin());
		lower.erase(lower.begin());
	}
}

std::vector<unsigned int>::iterator PmergeMe::dichotomy(unsigned int num, int start, int end) {
	std::vector<unsigned int>::iterator it = finalVect.begin() + start;
	int size = end - start + 1;
	int indice = start + size / 2;

	if (size < 1 || start > end)
		return (it);
	if (finalVect[indice] > num)
		return (dichotomy(num, start, --indice));
	else if (finalVect[indice] < num)
		return (dichotomy(num, ++indice, end));
	else
		throw BadInputException();
}

std::vector<unsigned int>::iterator PmergeMe::findVect(unsigned int i)
{
	for (std::vector<unsigned int>::iterator it = parsed.begin(); it != parsed.end() ; ++it) {
		if (*it == i)
			return (it);
	}
	return (parsed.end());
}

void PmergeMe::printResult() {
	for (std::vector<unsigned int>::iterator it = finalVect.begin(); it != finalVect.end() ; ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
