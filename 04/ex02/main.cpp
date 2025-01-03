/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:38:31 by iniska            #+#    #+#             */
/*   Updated: 2025/01/02 11:13:27 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>
#include <string>

int main() 
{
    // We made the Animal class locked (=instansiable). So, we can not assign just an generic aninal, but it needs to be specified.
    //Animal* animal = new Animal();

    Animal* dog = new Dog();
    dog->makeSound();
    delete dog;

    return 0;
}
