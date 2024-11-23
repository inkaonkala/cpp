/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:28:14 by iniska            #+#    #+#             */
/*   Updated: 2024/11/21 21:08:04 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"
#include <string>

class HumanB
{
private:
	std::string name;
	Weapon* weapon;

public:
	HumanB(const std::string& theName);
	void setWeapon(Weapon& giveWeapon);
	void attack() const;
};

#endif