/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:56:09 by iniska            #+#    #+#             */
/*   Updated: 2025/03/19 10:56:10 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "RPN.hpp"

int main(int arc, char **arv)
{
	if (arc != 2)
	{
		std::cout << "🥲\n Invalid input \n Give me inverted Polish math problem in a string, for exmpl: \n \"1 2 + 3 * 4 /\" " << std::endl;
		return (1);
	}
	try
	{
		RPN calculator;
		int result = calculator.letsCount(arv[1]);
		std::cout << "✎ " << result << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
