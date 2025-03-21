/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:48:57 by iniska            #+#    #+#             */
/*   Updated: 2025/01/27 21:41:51 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
	try
	{
		// int test
		Array<int> arr1(5);
		for (unsigned int i = 0; i < arr1.size(); ++i)
		{
			arr1[i] = i + 2;
		}
		std::cout << "Array 1: ";
		for (unsigned int i = 0; i < arr1.size(); ++i)
		{
			std::cout << arr1[i] << " ";
		}
		std::cout << std::endl;

	// copy const test
		Array<int> arr2(arr1);
		std::cout << "Array 2 (copy!): ";
		for (unsigned int i = 0; i < arr2.size(); ++i)
		{
			std::cout << arr2[i] << " ";
		}
		std::cout << std::endl;

	// assignment test

		Array<int> arr3 = arr2;
		std::cout << "Arrey 3 (assigned as array 2): ";
		{
			for (unsigned int i = 0; i < arr3.size(); ++i)
			{
				std::cout << arr3[i] << " ";
			}
			std::cout << std::endl;
		}

		//test out of bounds
		try
		{
			std::cout << arr1[10] << std::endl;
		}
		catch (const std::out_of_range& e)
		{
			std::cout << "Exeption!! : " << e.what() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
	
}