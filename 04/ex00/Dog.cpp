/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 21:02:07 by iniska            #+#    #+#             */
/*   Updated: 2024/12/28 19:48:22 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog()
{
	type = "Dog";
	std::cout << "🐶" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog escaped" << std::endl;
}

void Dog::makeSound() const 
{
	std::cout << "Bark" << std::endl;
}