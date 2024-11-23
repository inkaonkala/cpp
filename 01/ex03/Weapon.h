/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:47:18 by iniska            #+#    #+#             */
/*   Updated: 2024/11/20 20:56:00 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon 
{
private:
	std::string type;
		
public:
	Weapon(const std::string &weaponType);
	const std::string& getType() const; //returns a const reference to type
	void setType(const std::string &newType); //sets type
};

#endif