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

		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		// operator with bound check
		T& operator[](unsigned int index);

		// const operator check, read only access
		const T& operator[](unsigned int index) const;

		unsigned int size() const;
};

#include "Array.tpp"

#endif