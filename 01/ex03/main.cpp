/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:58:08 by iniska            #+#    #+#             */
/*   Updated: 2024/11/22 09:13:48 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"

int main() {
    {
        Weapon club = Weapon("What do you call a fish wearing a bowtie? SoFISHticated!");
        HumanA bob("Jolly", club);
        bob.attack();
        club.setType("Why don't skeletons fight each other? They don't have the GUTS!");
        bob.attack();
    }
    {
        Weapon club = Weapon("Why was the math book sad? It had too many PROBLEMS!");
        HumanB jim("Tom");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("Why do cows wear bells? Because their HORNS don't work!");
        jim.attack();
    }
    return (0);
}