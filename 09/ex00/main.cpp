/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:01:16 by iniska            #+#    #+#             */
/*   Updated: 2025/03/18 10:01:28 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExhange.hpp"


int main(int arc, char **arv)
{
	if (arc != 2)
	{
		std::cerr << "I need an input file, please!" << std::endl;
		return (1);
	}
	try
	{
		// save .scv to map<date, price>
		DateAndPrices database("data.csv");
		// go through the .txt to check the prices
		database.prossInput(arv[1]);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
