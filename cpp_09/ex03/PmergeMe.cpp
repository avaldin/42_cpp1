#include <sstream>
#include <iostream>
#include <sys/time.h>
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &copy) { (void)copy;}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy) {
	(void)copy;
	return (*this);
}

PmergeMe::~PmergeMe() {}


void	PmergeMe::sorting(int argc, char **argv) {
	struct timeval	tv;
	long			usec;
	long			sec;



	gettimeofday(&tv, NULL);
	usec = tv.tv_usec;
	sec = tv.tv_sec;
	parserVect(argc, argv);
	mergeInsertionVect(parsedVect);
	gettimeofday(&tv, NULL);
	usec = tv.tv_usec - usec;
	sec = tv.tv_sec - sec;
	std::cout << "before : ";
	for (std::vector<unsigned int>::iterator it = parsedVect.begin(); it != parsedVect.end(); ++it)
		std::cout << *it << " ";
	if (usec < 0)
		usec = 1000000 + usec;
	std::cout << std::endl << "after :  ";
	for (std::vector<unsigned int>::iterator it = finalVect.begin(); it != finalVect.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : "
		<< sec << " seconde et " << usec << " microseconde" << std::endl;


	gettimeofday(&tv, NULL);
	usec = tv.tv_usec;
	sec = tv.tv_sec;
	parserDeque(argc, argv);
	mergeInsertionDeque(parsedDeque);
	gettimeofday(&tv, NULL);
	usec = tv.tv_usec - usec;
	sec = tv.tv_sec - sec;
	if (usec < 0)
		usec = 1000000 + usec;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : "
			  << sec << " seconde et " << usec << " microseconde" << std::endl;
}




// VECTOR ///


void PmergeMe::parserVect(int argc, char **argv) {
	unsigned int		num;

	for (int i = 1; i < argc; ++i) {
		std::stringstream	ss(argv[i]);
		ss >> num;
		if (ss.fail() || findVect(num) != parsedVect.end())
			throw BadInputException();
		parsedVect.push_back(num);
	}
}

void PmergeMe::mergeInsertionVect(std::vector<unsigned int> lower) {
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
	mergeInsertionVect(upper);
	while (!lower.empty()) {
		it1 = dichotomyVect(*lower.begin(), 0, finalVect.size() - 1);
		finalVect.insert(it1, *lower.begin());
		lower.erase(lower.begin());
	}
}

std::vector<unsigned int>::iterator PmergeMe::dichotomyVect(unsigned int num, int start, int end) {
	std::vector<unsigned int>::iterator it = finalVect.begin() + start;
	int size = end - start + 1;
	int indice = start + size / 2;

	if (size < 1 || start > end)
		return (it);
	if (finalVect[indice] > num)
		return (dichotomyVect(num, start, --indice));
	else if (finalVect[indice] < num)
		return (dichotomyVect(num, ++indice, end));
	else
		throw BadInputException();
}

std::vector<unsigned int>::iterator PmergeMe::findVect(unsigned int i)
{
	for (std::vector<unsigned int>::iterator it = parsedVect.begin(); it != parsedVect.end() ; ++it) {
		if (*it == i)
			return (it);
	}
	return (parsedVect.end());
}



// DEQUE //


void PmergeMe::parserDeque(int argc, char **argv) {
	unsigned int		num;

	for (int i = 1; i < argc; ++i) {
		std::stringstream	ss(argv[i]);
		ss >> num;
		if (ss.fail() || findDeque(num) != parsedDeque.end())
			throw BadInputException();
		parsedDeque.push_back(num);
	}
}

void PmergeMe::mergeInsertionDeque(std::deque<unsigned int> lower) {
	std::deque<unsigned int>	upper;
	std::deque<unsigned int>::iterator it1 = lower.begin();
	std::deque<unsigned int>::iterator it2 = lower.begin();

	if (lower.size() == 1) {
		finalDeque.insert(finalDeque.begin(), *lower.begin());
		return ;
	}
	it2++;
	for (std::deque<unsigned int>::iterator it ;it1 != lower.end() && it2 != lower.end();) {
		it = it2;
		if (*it1 > *it2)
			it = it1;
		it1 += 2;
		if (it1 != lower.end())
			it2 += 2;
		upper.push_back(*it);
		lower.erase(it);
	}
	mergeInsertionDeque(upper);
	while (!lower.empty()) {
		it1 = dichotomyDeque(*lower.begin(), 0, finalDeque.size() - 1);
		finalDeque.insert(it1, *lower.begin());
		lower.erase(lower.begin());
	}
}

std::deque<unsigned int>::iterator PmergeMe::dichotomyDeque(unsigned int num, int start, int end) {
	std::deque<unsigned int>::iterator it = finalDeque.begin() + start;
	int size = end - start + 1;
	int indice = start + size / 2;

	if (size < 1 || start > end)
		return (it);
	if (finalDeque[indice] > num)
		return (dichotomyDeque(num, start, --indice));
	else if (finalDeque[indice] < num)
		return (dichotomyDeque(num, ++indice, end));
	else
		throw BadInputException();
}

std::deque<unsigned int>::iterator PmergeMe::findDeque(unsigned int i)
{
	for (std::deque<unsigned int>::iterator it = parsedDeque.begin(); it != parsedDeque.end() ; ++it) {
		if (*it == i)
			return (it);
	}
	return (parsedDeque.end());
}
