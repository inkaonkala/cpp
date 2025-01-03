/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brainz.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 07:25:46 by iniska            #+#    #+#             */
/*   Updated: 2025/01/02 10:20:55 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brainz.h"

Brain::Brain()
{
	std::cout << "A Brain constructed." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "No idea";
	}
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assigned" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = other.ideas[i];
		}
	}
	// return a pointer to ensure the chaining
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

void Brain::setIdea(int i, const std::string& idea)
{
	if (i >= 0 && i <= 100)
		ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i <= 100)
		return ideas[i];
	return "";
}

std::string Brain::ideaPool(const std::string& type)
{
	std::string dogOne[] = {"Fetch ", "Bark at ", "Chase ", "Guard ", "Wag at "};
	std::string dogTwo[] = {"ball.", "stick.", "squirrel.", "door.", "bone.", "mailman."};

	std::string catOne[] = {"Sleep ", "Enjoy the ", "Stare at the ", "Dream of the ", "Miau at the ", "Nap in the ", "I would really like some "};
	std::string catTwo[] = {"sun.", "fish.", "canned sardines.", " Bahamas.", "tap water.", "sofa." "mouse."};

	int iOne, iTwo;
	//randomizer
	if (type == "dog")
	{
		iOne = std::rand() % (sizeof(dogOne) / sizeof(dogOne[0]));
		iTwo = std::rand() % (sizeof(dogTwo) / sizeof(dogTwo[0]));
		return dogOne[iOne] + dogTwo[iTwo];
	}
	else if (type == "cat")
	{
		iOne = std::rand() % (sizeof(catOne) / sizeof(catOne[0]));
		iTwo = std::rand() % (sizeof(catTwo) / sizeof(catTwo[0]));
		return catOne[iOne] + catTwo[iTwo];
	}

	return "Bzzzz Bzzzz.";
}


