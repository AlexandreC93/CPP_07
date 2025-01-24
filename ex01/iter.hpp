#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <sstream>
#include <climits>
#include <limits>
#include <cctype>
#include <cmath>

template<typename T>
void iter(T* array, size_t length, void (*func)(T&))
{
	for (size_t i = 0; i < length; ++i)
		func(array[i]);
}

template<typename T>
void printElement(T& elem)
{
	std::cout << elem << " ";
}

#endif