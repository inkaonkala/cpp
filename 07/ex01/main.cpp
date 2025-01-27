/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:56:11 by iniska            #+#    #+#             */
/*   Updated: 2025/01/27 16:02:53 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void print(T& c) 
{
	std::cout << c << " ";
}


/*
void print(char c)
{
	std::cout << c << " ";
}
*/

int main()
{
	int intArray[] = {1, 2, 3, 4, 5, 6};
	size_t intLen = sizeof(intArray) / sizeof(intArray[0]);
	iter(intArray, intLen, print);

	std::cout << std::endl;

	std::string strArray[] = {"This", "is", "a test", "🐱" };
	size_t strLen = sizeof(strArray) / sizeof(strArray[0]);
	iter(strArray, strLen, print);

	std::cout << std::endl;
}