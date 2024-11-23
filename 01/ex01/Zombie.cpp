/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:18:18 by iniska            #+#    #+#             */
/*   Updated: 2024/11/20 15:48:57 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

//Default setter
Zombie::Zombie() : name("nameless walker")
{}

// parameter setter
Zombie::Zombie(std::string zombieName) : name(zombieName)
{}

Zombie::~Zombie() {
 std::cout << "Zombie. " << name << ". Eternal Death. " << std::endl;
}

void Zombie::setName(std::string zombieName)
{
	name = zombieName;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}