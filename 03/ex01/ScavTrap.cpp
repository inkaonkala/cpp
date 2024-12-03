/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:46:00 by iniska            #+#    #+#             */
/*   Updated: 2024/12/03 11:02:18 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " is 💀" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "ScavTrap " << name << " can not attack" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name << " jumps in to conclusions, causing " << attackDamage << " damage to " << target << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " desided to guardTheGates and will not care what others are doing right now" << std::endl;
}
