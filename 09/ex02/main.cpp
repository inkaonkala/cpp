/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:22:04 by iniska            #+#    #+#             */
/*   Updated: 2025/03/19 13:22:06 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	Not allowed: stack, map !

	input: ./PmergeMe 2 43 12 2 32 54 6

	https://dev.to/emuminov/human-explanation-and-step-by-step-visualisation-of-the-ford-johnson-algorithm-5g91

*/
#include <iostream>
#include <string>
#include "PmergeMe.hpp"

int main(int arc, char **arv)
{
	if (arc < 2)
	{
		std::cout << "🥲 I need some input!" << std::endl;
		return (1);
	}
	try 
	{
		std::cout << "Welcome to the number merge sorter 🧮" << std::endl;
		PmergeMe sorter(arc, arv);
		sorter.compareAndMerge();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return 0;
}
