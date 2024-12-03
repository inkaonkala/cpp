/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:28:57 by iniska            #+#    #+#             */
/*   Updated: 2024/12/02 19:33:20 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main()
{
	ClapTrap clappy("Bobo");

	clappy.attack("Sad pillow");
	clappy.attack("Even sader pillow");

	clappy.takeDamage(2);
	clappy.takeDamage(6);

	clappy.beRepaired(4);
	clappy.beRepaired(2);

	for (int i = 0; i < 10; i++)
	{
		clappy.attack("Crying pillow");
	}

	clappy.takeDamage(10);
	clappy.attack("Sad pillow");
	clappy.beRepaired(10);

	return (0);
}