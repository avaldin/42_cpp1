#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T	min(T &a, T &b)
{
	if (b > a)
		return (a);
	return (b);
}

template<typename T>
T	max(T &a, T &b)
{
	if (b < a)
		return (a);
	return (b);
}
#endif
