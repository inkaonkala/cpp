/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 21:02:07 by iniska            #+#    #+#             */
/*   Updated: 2025/01/02 10:04:46 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "🐶" << std::endl;
}

// copy constrc
Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Bzzz ... ... Copy Dog Created" << std::endl;
}

//assignment
Dog& Dog::operator=(const Dog& other)
{
	std::cout << "CopyDog assigned" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	return *this;
}


Dog::~Dog()
{
	delete brain;
	std::cout << "Dog escaped" << std::endl;
}

void Dog::makeSound() const 
{
	std::cout << "Bark" << std::endl;
}

void Dog::setIdeaforBrain(int i, const std::string& idea)
{
	brain->setIdea(i, brain->ideaPool("dog"));
}

std::string Dog::getIdeaForBrain(int i) const
{
	return brain->getIdea(i);
}