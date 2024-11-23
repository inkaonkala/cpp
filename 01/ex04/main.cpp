/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:16:58 by iniska            #+#    #+#             */
/*   Updated: 2024/11/22 21:30:13 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "losers.h"

int main(int arc, char **arv)
{
	if (arc != 4){
		std::cerr << "Invalid input" << std::endl;
		return (1);
	}

	std::string file = arv[1];
	std::string s1 = arv[2];
	std::string s2 = arv[3];

	if(!doIt(file, s1, s2)) {
		return (1);
	}

	std::cout << "I did it! Here you go: " << file << ".replace" << std::endl;
	return (0);
}