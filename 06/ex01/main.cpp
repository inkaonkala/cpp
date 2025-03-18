/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 06:17:26 by iniska            #+#    #+#             */
/*   Updated: 2025/01/26 06:47:40 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	- Input is the pointer to the info in "Data"
	- We turn the pointer address in to a integer to store -> uintptr_t
	- then we unserialize the address back to an readable form

	Why? This allowes us to use the address in different parts of the program
*/

#include <iostream>
#include <string>
#include "Serializer.h"
#include "Data.h"

int main()
{
	Data data("This is a test");

	uintptr_t serializedData = Serializer::serialize(&data);

	Data* deserData = Serializer::deserializer(serializedData);

	if (&data == deserData)
	{
		std::cout << "Serialization and deserialization complited!" << std::endl;
	}
	else 
	{
		std::cout << "It has failed" << std::endl;
	}
	return (0);
}

