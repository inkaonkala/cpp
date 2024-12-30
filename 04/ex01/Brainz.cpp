/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brainz.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 07:25:46 by iniska            #+#    #+#             */
/*   Updated: 2024/12/30 07:31:17 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brainz.h"

Brain::Brain()
{
	std::cout << "A Brain constructed." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "No idea";
	}
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy" << std::endl;
	for (i = 0; i < 100; i++)
	{
		ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assigned" << std::endl;
	
}