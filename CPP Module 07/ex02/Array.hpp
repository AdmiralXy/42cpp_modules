#ifndef INC_42CPP_MODULES_WHATEVER_H
#define INC_42CPP_MODULES_WHATEVER_H

#include <iostream>

template <typename T>
class Array
{
private:
	T *storage;
	unsigned int length;
public:
	Array<T>()
	{
		storage = 0;
		length = 0;
	}

	Array<T>(unsigned int n)
	{
		storage = new T[n];
		length = n;
	}

	Array<T>(const Array &array)
	{
		storage = 0;
		length = 0;
		*this = array;
	}

	~Array<T>()
	{
		delete[] storage;
	}

	Array<T> &operator=(const Array &array)
	{
		if (storage)
			delete[] storage;
		storage = new T[array.size()];
		length = array.size();
		for (unsigned int i = 0; i < array.size(); ++i)
			storage[i] = array[i];
		return *this;
	}

	T &operator[](unsigned int index) const
	{
		if (index >= length)
			throw std::exception();
		return storage[index];
	}

	unsigned int size() const
	{
		return length;
	}

	void print() const
	{
		for (unsigned int i = 0; i < length; ++i)
			std::cout << storage[i] << " ";
		std::cout << std::endl;
	}
};

#endif
