/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:28:57 by iniska            #+#    #+#             */
/*   Updated: 2024/12/03 16:06:19 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
	ClapTrap clappy("Bobo");
	ScavTrap scappy("Bebe");
	FragTrap fraggy("Fart");

	clappy.takeDamage(3);
	clappy.beRepaired(10);

	scappy.guardGate();

	fraggy.highFivesGuys();
//	ScavTrap anotherScav("Another");

	return (0);
}

/*


int main() 
{
    // Test ClapTrap
    ClapTrap clap("Clappy");
    clap.attack("target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << std::endl;

    // Test ScavTrap
    ScavTrap scav("Scavvy");
    scav.attack("target2");
    scav.takeDamage(30);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << std::endl;

    // Test FragTrap
    FragTrap frag("Fraggy");
    frag.attack("target3");
    frag.takeDamage(50);
    frag.beRepaired(20);
    frag.highFivesGuys();

    std::cout << std::endl;

    return (0);
}
*/