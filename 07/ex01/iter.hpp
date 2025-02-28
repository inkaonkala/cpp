/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:24:01 by iniska            #+#    #+#             */
/*   Updated: 2025/01/27 16:02:44 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>

/*
	-gets pointer to array, lenght and a function
	- loops through the arrey and applies the function to each element
	- notice that the function taken is also a template function!
*/

template <typename T>
void iter(T* array, size_t lenght, void (*function)(T&))
{
	for (size_t i = 0; i < lenght; i++)
	{
		function(array[i]);
	}
}

template <typename T>
void iter(T* array, size_t lenght, void (*function)(const T&))
{
	for (size_t i = 0; i < lenght; i++)
	{
		function(array[i]);
	}
}

#endif
