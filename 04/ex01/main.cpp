/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:38:31 by iniska            #+#    #+#             */
/*   Updated: 2025/01/02 10:21:42 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>
#include <string>

int main()
{

	int group = 6;

	Animal* animals[group];

	// init animals
	for(int i = 0; i < group / 2; i++)
	{
		animals[i] = new Dog();
	}
	for (int i = group / 2; i < group; i++)
	{
		animals[i] = new Cat();
	}

	std::cout << "\nTHE ACTUALL TEST IS HERE: \n" << std::endl;

	for (int i = 0; i < group; i++)
	{
		if (Dog* dog = dynamic_cast<Dog*>(animals[i]))
		{
			dog->setIdeaforBrain(0, "dog");
			std::cout << "🐶 💭 " << dog->getIdeaForBrain(0) << std::endl;
		}
		else if (Cat* cat = dynamic_cast<Cat*> (animals[i]))
		{
			cat->setIdeaforBrain(0, "cat");
			std::cout << "🐱 💭 " << cat->getIdeaForBrain(0) << std::endl;
		}
		else 
			std::cout << "bzzzz bzzzz" << std::endl;
	}

	std::cout << "\nTEST END \n" << std::endl;

	for (int i = 0; i < group; i++)
		delete animals[i];
		
	return 0;
}