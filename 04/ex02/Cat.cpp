/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:59:07 by iniska            #+#    #+#             */
/*   Updated: 2025/01/02 10:13:37 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat() : brain(new Brain())
{
	type = "Cat";
	std::cout << "🐱" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Bzzzz ... ... Copycat created" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "CatCopy assigned" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat escaped" << std::endl;
}

void Cat::makeSound() const 
{
	std::cout << "Meow" << std::endl;
}

void Cat::setIdeaforBrain(int i, const std::string& idea)
{
	brain->setIdea(i, brain->ideaPool("cat"));
}

std::string Cat::getIdeaForBrain(int i) const
{
	return brain->getIdea(i);
}

/*
std::string Cat::ideaPool()
{
	std::string ideaOne[] = {"Sleep ", "Enjoy the", "Stare at the", "Dream of ", "Miau to ", "Nap in the", "I would really like some "};
	std::string ideaTwo[] = {"sun.", "fish." "canned sardines.", " Bahamas.", "tap water.", "sofa." "mouse."};

	//randomizer
	int iOne = std::rand() % (sizeof(ideaOne) / sizeof(ideaOne[0]));
	int iTwo = std::rand() % (sizeof(ideaTwo) / sizeof(ideaTwo[0]));
	
	return ideaOne[iOne] + ideaTwo[iTwo];
}
*/