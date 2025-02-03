#ifndef CPP_09_PMERGEME_HPP
#define CPP_09_PMERGEME_HPP

#include <vector>

class PmergeMe
{
public:

	//constructor, destructor and operator

	PmergeMe();

	PmergeMe(PmergeMe const &copy);

	PmergeMe &operator=(const PmergeMe &copy);

	~PmergeMe();

	//methods

	void	parser(int argc, char **argv);
	void	mergeInsertion(std::vector<unsigned int> lower);
	void	sorting();
	void	printResult();

	//getteur and setter

private:

	std::vector<unsigned int> parsed;
	std::vector<unsigned int> finalVect;


	std::vector<unsigned int>::iterator dichotomy(unsigned int num, int start, int end);
	std::vector<unsigned int>::iterator	findVect(unsigned int i);



	class BadInputException : public std::exception {
	public:
		virtual const char * what() const throw() {
			return ("bad input");
		}
	};

};

#endif
