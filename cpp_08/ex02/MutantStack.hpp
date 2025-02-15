#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <stack>

template<typename T>


class MutantStack : public std::stack<T>
{
public:

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	MutantStack() {};
	iterator begin() {return this->c.begin();}
	iterator end() {return this->c.end();}

	const_iterator begin() const {return this->c.begin();}
	const_iterator end() const {return this->c.end();}

};

#endif
