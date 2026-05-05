#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T, typename Y>
void	iter(T *array, const size_t len, Y fn)
{
	for (size_t i = 0; i < len; i ++)
		fn(array[i]);
}

template <typename T, typename Y>
void	iter(const T *array, const size_t len, Y fn)
{
	for (size_t i = 0; i < len; i ++)
		fn(array[i]);
}

#endif