/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:14:28 by iniska            #+#    #+#             */
/*   Updated: 2024/11/20 20:51:18 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(const std::string &weaponType) : type(weaponType) {
}
	
const std::string& Weapon::getType() const 
{
	return (type);
} //returns a const reference to type

void Weapon::setType(const std::string &newType) 
{
	type = newType;
} //sets type