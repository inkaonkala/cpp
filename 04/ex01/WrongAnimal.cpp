/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:39:55 by iniska            #+#    #+#             */
/*   Updated: 2025/01/02 12:27:19 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "Made the Wrong" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "Copied Wrong" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destroyed Wrong" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound: #@%!@^&$^@!#" << std::endl;
}

std::string WrongAnimal::getType() const 
{
	return type;
}

