
#pragma once

template <typename T>
Array<T>::Array() : array(nullptr), len(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : len(n)
{
	array = new T[len]();
}

template <typename T>
Array<T>::Array(const Array<T>& other) : len(other.len)
{
	array = new T[len];
	for (unsigned int i = 0; i < len; ++i)
	{
		array[i] = other.array[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
	{
		delete[] array;
		len = other.len;
		array = new T[len];
		for (unsigned int i = 0; i < len; ++i)
		{
			array[i] = other.array[i];
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
		delete[] array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= len)
	{
		throw std::out_of_range("Out of bounds index"); // std::exeption
	}
	return array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= len)
	{
		throw std::out_of_range("Index is out of bounds");
	}
	return array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (len);
}