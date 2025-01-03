/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:40:08 by iniska            #+#    #+#             */
/*   Updated: 2025/01/02 12:11:42 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "Wrong is born" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "Copy of wrong has been made" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	std::cout << "Wrong assigned" << std::endl;
	return *this;
}

WrongCat::~WrongCat() 
{
	std::cout << "Wrong destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}