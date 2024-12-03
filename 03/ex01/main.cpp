/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:28:57 by iniska            #+#    #+#             */
/*   Updated: 2024/12/03 11:14:49 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"

int main()
{
	ClapTrap clappy("Bobo");
	ScavTrap scappy("Bebe");

	clappy.attack("Bebe");
	scappy.attack("Bobo");
	clappy.takeDamage(20);

	clappy.beRepaired(10);

	scappy.guardGate();
	clappy.attack("Bebe");

//	ScavTrap anotherScav("Another");

	return (0);
}