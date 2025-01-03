/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:23:52 by iniska            #+#    #+#             */
/*   Updated: 2025/01/03 09:51:17 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal 
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		//Animal& operator=(const Animal& other);
		
		/*
			so here, we set the fucntion to pure virtual, which makes the call abstract.
			This function can not be used by itself int the class but needs to be defined
			prevents from casting { Animal* animal}
			in the dog and cat we override this function with the specified animal to use it
		*/
		virtual void makeSound() const = 0;
};

#endif