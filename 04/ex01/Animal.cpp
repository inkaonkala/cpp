/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:55:02 by iniska            #+#    #+#             */
/*   Updated: 2025/01/02 11:25:56 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal() : type("Animal")
{
	std::cout << "There's an animal!" << std::endl;
}

Animal::Animal(const Animal& other)
{
//	std::cout << "Copy animal for safety reasons" << std::endl;
	type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
//	std::cout << "Assigned animal" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "It is now gone." << std::endl;
}

void Animal::makeSound() const 
{
	std::cout << "There's a sound you did not thought it would make" << std::endl;
}
