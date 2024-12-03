/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:33:21 by iniska            #+#    #+#             */
/*   Updated: 2024/12/03 16:02:22 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

	std::cout << "FragTrap " << name << " is here!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " shutdown." << std::endl;
}

/*
void FragTrap::attack(const std::string& target)
{
	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "FragTrap " << name << " can not attack" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "FragTrap " << name << " has a smelly suprise!" << hitPoints << " amount of damage to " << target << std::endl; 
}
*/

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " tosses ✋ ✋!" << std::endl;
}
