/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:13:03 by iniska            #+#    #+#             */
/*   Updated: 2024/11/20 11:36:11 by iniska           ###   ########.fr       */
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
	Zombie(std::string zombieName);
	~Zombie();
	void announce();
} ;

/*
	Standalone function (could also declare on theis own .h)
*/
	Zombie *newZombie(std::string name);
	void randomChump(std::string name);
	
#endif