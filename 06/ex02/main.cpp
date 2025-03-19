/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 07:06:52 by iniska            #+#    #+#             */
/*   Updated: 2025/01/26 08:08:10 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	So we want to create a pointer to a class
	
	We send this pointer to the Base
	Base will init the pointer randomly to A, B or C

	Then we want to identify the class. 
	Use dynamic_cast (used with classes when casting "on the go")

*/

#include "Base.hpp"
#include "Identify.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>


int main()
{
	srand(time(0)); //seed for random

	std::cout << "I will crete an Base pointer and set it randomly as A, B or C" << std::endl; 
	Base* basePtr = generate();

	std::cout << "Pointer Based Id: " << std::endl;
	identify(basePtr);

	std::cout << "Reference Based Id: " << std::endl;
	identify(*basePtr);
	
	delete basePtr;

	return (0);
}