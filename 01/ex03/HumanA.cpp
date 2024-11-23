/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:04:11 by iniska            #+#    #+#             */
/*   Updated: 2024/11/22 09:15:14 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"
#include <iostream>

HumanA::HumanA(const std::string& theName, Weapon& theWeapon) 
	: name(theName), weapon(theWeapon) {
}

void HumanA::attack() const {
	std::cout << name << " attacks with their: " <<weapon.getType() << std::endl;
}