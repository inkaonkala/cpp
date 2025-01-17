/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:38:31 by iniska            #+#    #+#             */
/*   Updated: 2025/01/03 09:54:36 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"


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

	std::cout << "\n Test the wrong \n" << std::endl;
	WrongAnimal* wrongAnimal = new WrongAnimal();
	wrongAnimal->makeSound();
	delete wrongAnimal;

	return 0;
}

/*
int main() 
{
    // We made the Animal class locked (=instansiable). So, we can not assign just an generic aninal, but it needs to be specified.
    Animal* animal = new Animal();

    Animal* dog = new Dog();
    dog->makeSound();
    delete dog;

    return 0;
}
*/

/*
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    
    return 0;
}
*/