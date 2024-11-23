/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:27:20 by iniska            #+#    #+#             */
/*   Updated: 2024/11/20 21:06:21 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"
#include <string>

class HumanA 
{
private:
	std::string name; //given in main = Jolly;
	Weapon& weapon; // = Giant Lolly;

public:
	HumanA(const std::string& theName, Weapon& theWeapon);
	void attack() const;
};

#endif