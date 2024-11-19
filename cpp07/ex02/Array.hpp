#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T *_arr;
		unsigned int _len;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const &src);
		~Array();

		int size() const;

		Array &operator=(Array const &src);
		T &operator[](int i);

		class IndexOutOfBoundsException : public std::exception
        {
			virtual const char* what() const throw();
		};
};

template <typename T>
Array<T>::Array() : _len(0)
{
	_arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n) : _len(n)
{
	_arr = new T[n];
}

template <typename T>
Array<T>::Array(Array const &src) : _len(src._len)
{
	_arr = new T[src._len];
	for (unsigned int i = 0; i < src._len; i++)
    {
		_arr[i] = src._arr[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete [] _arr;
}


template <typename T>
int Array<T>::size() const
{
	return _len;
}


template <typename T>
Array<T> &Array<T>::operator=(Array const &src)
{
	_arr = new T[src._len];
	for (unsigned int i = 0; i < src._len; i++)
    {
		_arr[i] = src._arr[i];
	}
}

template <typename T>
T &Array<T>::operator[](int i)
{
	if (i >= (int)_len || i < 0)
		throw IndexOutOfBoundsException();
	return _arr[i];
}

template <typename T>
const char *Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return "Index out of bounds!";
}

#endif