#ifndef CPP_07_ITER_HPP
#define CPP_07_ITER_HPP

template<typename T, typename U>

void	iter(T *array, U len, void (*f)(T &))
{
	for (U i = 0; i < len ; ++i) {
		f(array[i]);
	}
}


#endif //CPP_07_ITER_HPP
