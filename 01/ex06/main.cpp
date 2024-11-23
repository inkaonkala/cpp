/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:22:14 by iniska            #+#    #+#             */
/*   Updated: 2024/11/23 21:01:13 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int arc, char **arv)
{
	if (arc != 2)
	{
		std::cerr << "Harls complaining about the Wrong input!" << std::endl;
		return (1);
	}
	Harl harl;

	harl.filter(arv[1]);

	return (0);
}