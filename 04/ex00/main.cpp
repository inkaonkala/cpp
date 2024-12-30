/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:38:31 by iniska            #+#    #+#             */
/*   Updated: 2024/12/28 19:47:31 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	Animal* animal = new Animal();
	animal->makeSound();
	delete animal;

	Animal* dog = new Dog();
	dog->makeSound();
	delete dog;

	Animal* cat = new Cat();
	cat->makeSound();
	delete cat;

	return 0;
}

/*

int main() 
{
const Animal* meta = new Animal(); const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl; std::cout << i->getType() << " " << std::endl; i->makeSound(); //will output the cat sound! j->makeSound();
    meta->makeSound();
    ...
return 0; }

*/