#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <stdexcept>

template<typename Tab>
class Array
{
private:
	Tab* data;
	size_t length;

public:
	Array() : data(NULL), length(0) {}
	Array(size_t n) : data(new Tab[n]), length(n) {}
	Array(const Array<Tab>& C) : length(C.length)
	{
		data = new Tab[length];
		for (size_t i = 0; i < length; ++i)
		{
			data[i] = C.data[i];
		}
	}
	~Array()
	{
		delete[] data;
	}
	Array<Tab>& operator=(const Array<Tab>& C)
	{
		if (this != &C)
		{
			delete[] data;
			length = C.length;
			data = new Tab[length];
			for (size_t i = 0; i < length; ++i)
			{
				data[i] = C.data[i];
			}
		}
		return *this;
	}
	Tab& operator[](size_t index)
	{
		if (index >= length)
			throw std::out_of_range("Index out of range");
		return data[index];
	}
	size_t size() const
	{
		return length;
	}
};

#endif
