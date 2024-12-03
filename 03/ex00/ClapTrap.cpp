/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:28:14 by iniska            #+#    #+#             */
/*   Updated: 2024/12/02 19:43:17 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string& name) 
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
		std::cout << "ClapTrap " << name << " has been born!" << std::endl; 
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is 💀" << std::endl; 
}


void ClapTrap::attack(const std::string& target)
{
	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << name << " has no energy!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks!" << std::endl;
	std::cout << "Damage: " << attackDamage << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << name << " DEAD" << std::endl;
	}
	hitPoints = (amount > hitPoints) ? 0 : (hitPoints - amount);
	std::cout << "ClapTrap " << name << " took damage by " << amount << std::endl;
	std::cout << "HP now " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has not enough energy to heal" << std::endl;
		return ;
	}
	hitPoints += amount;
	energyPoints--;
	std::cout << "ClapTrap " << name << "reloaded " << amount << " points" << std::endl;
	std::cout << name << " total HP " << hitPoints << std::endl;
}
