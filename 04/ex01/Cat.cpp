/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:59:07 by iniska            #+#    #+#             */
/*   Updated: 2024/12/28 19:48:27 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat()
{
	type = "Cat";
	std::cout << "🐱" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat escaped" << std::endl;
}

void Cat::makeSound() const 
{
	std::cout << "Meow" << std::endl;
}