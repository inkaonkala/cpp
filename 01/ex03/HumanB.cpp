/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:08:41 by iniska            #+#    #+#             */
/*   Updated: 2024/11/22 09:14:40 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"
#include <iostream>

HumanB::HumanB(const std::string& theName) : name(theName), weapon(nullptr) {
}

void HumanB::setWeapon(Weapon& newWeapon) {
	weapon = &newWeapon;
}

void HumanB::attack() const {
	if (weapon)
	{
		std::cout << name << " attacs with their: " << weapon->getType() << std::endl;
	}
	else
	{
		std::cout << name << " is out of words!" << std::endl;
	}
}



