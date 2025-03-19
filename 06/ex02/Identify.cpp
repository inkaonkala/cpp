/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:03:13 by iniska            #+#    #+#             */
/*   Updated: 2025/03/19 10:03:14 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Identify.hpp"

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