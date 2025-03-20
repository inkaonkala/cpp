/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:58:03 by iniska            #+#    #+#             */
/*   Updated: 2025/01/27 21:31:13 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		T* array;
		unsigned int len;

	public:

		// emty array
		Array();

		//unsigned int as paramenter
		Array(unsigned int n);

		//copy constructor
		Array(const Array& other);

		//assignment operator
		Array& operator=(const Array& other);

		~Array();

		// operator with bound check
		T& operator[](unsigned int index)
		{
			if (index >= len)
			{
				throw std::out_of_range("Out of bounds index"); // std::exeption
			}
			return array[index];
		}

		// const operator check, read only access
		const T& operator[](unsigned int index) const
		{
			if (index >= len)
			{
				throw std::out_of_range("Index is out of bounds");
			}
			return array[index];
		}

		unsigned int size() const
		{
			return (len);
		}	
};

#endif