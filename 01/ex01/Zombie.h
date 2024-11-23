/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:13:03 by iniska            #+#    #+#             */
/*   Updated: 2024/11/20 15:46:45 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:

	std::string	name;

public:
	Zombie();
	Zombie(std::string zombieName);
	~Zombie();
	void announce();
	void setName(std::string zombieName);
} ;

/*
	Standalone function (could also declare on theis own .h)
*/
	Zombie *newZombie(std::string name);
	void randomChump(std::string name);

	Zombie *zombieHorde(int N, std::string name);
	
#endif