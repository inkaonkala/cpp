/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:55:02 by iniska            #+#    #+#             */
/*   Updated: 2024/12/28 19:50:17 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal() : type("Animal")
{
	std::cout << "There's an animal!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "It is now gone." << std::endl;
}

void Animal::makeSound() const 
{
	std::cout << "There's a sound you did not thought it would make" << std::endl;
}
