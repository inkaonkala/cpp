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

#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"
#include <cstdlib>
#include <ctime>

Base * generate(void)
{
	int i = rand() % 3;

	if (i == 0)
		return new A();
	if (i == 1)
		return new B();
	else
		return new C();
}


//	Identify the type pointed to by p using a pointer

void identify(Base* p)
{
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl; 
	}
}

/* 
	Identify the type of object referenced by p using a reference
	Try to cast the refrence to A, B and C and return the one that works

*/

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast&) {}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast&) {}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast&) {}
	
}

int main()
{
	srand(time(0)); //seed for random

	std::cout << "I will crete an Base pointer and set it randomly as A, B or C" << std::endl; 
	Base* basePtr = generate();

	std::cout << "Pointer Based Indenty: " << std::endl;
	identify(basePtr);

	std::cout << "Reference Based Indety: " << std::endl;
	identify(*basePtr);
	
	delete basePtr;

	return (0);
}