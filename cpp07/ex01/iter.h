#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T>
void iter(T *array, size_t len, void (*f)(T &))
{
	if(!array || !f)
		return ;

	for (size_t i = 0; i < len; i++)
    {
		f(array[i]);
	}
}

#endif