# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Array.tpp                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/20 13:21:53 by iniska            #+#    #+#              #
#    Updated: 2025/03/20 13:21:56 by iniska           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "Array.hpp"

Array::Array() : array(nullptr), len(0) {}

Array::Array(unsigned int n) : len(n)
{
	array = new T[n]();
}

Array::Array(const Array& other) : len(other.len)
{
	array = new T(len);
	for (unsigned int i = 0; i < len; ++i)
	{
		array[i] = other.array[i];
	}
}

Array& Array::operator=(const Array& other)
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