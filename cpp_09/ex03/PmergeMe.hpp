#ifndef CPP_09_PMERGEME_HPP
#define CPP_09_PMERGEME_HPP

#include <vector>
#include <deque>

class PmergeMe
{
public:

	//constructor, destructor and operator

	PmergeMe();

	PmergeMe(PmergeMe const &copy);

	PmergeMe &operator=(const PmergeMe &copy);

	~PmergeMe();

	//methods

	void	sorting(int argc, char** argv);

	//getteur and setter

private:

	std::vector<unsigned int> parsedVect;
	std::vector<unsigned int> finalVect;

	std::deque<unsigned int> parsedDeque;
	std::deque<unsigned int> finalDeque;

	void	parserVect(int argc, char **argv);
	void	parserDeque(int argc, char **argv);
	void	mergeInsertionVect(std::vector<unsigned int> lower);
	void 	mergeInsertionDeque(std::deque<unsigned int> lower);


	std::vector<unsigned int>::iterator dichotomyVect(unsigned int num, int start, int end);
	std::vector<unsigned int>::iterator	findVect(unsigned int i);

	std::deque<unsigned int>::iterator dichotomyDeque(unsigned int num, int start, int end);
	std::deque<unsigned int>::iterator	findDeque(unsigned int i);



	class BadInputException : public std::exception {
	public:
		virtual const char * what() const throw() {
			return ("bad input");
		}
	};

};

#endif
