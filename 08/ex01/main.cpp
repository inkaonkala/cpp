/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:26:35 by iniska            #+#    #+#             */
/*   Updated: 2025/01/31 12:17:15 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

/*
	Span is the max and min between the numbers
*/

int main() 
{
  	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sbul = Span(15);
	std::vector<int> numbers = {3, 12, 14, 531, 5421, 123, 41, 513, 765, 6, 324, 75};

	sbul.addMultiple(numbers.begin(), numbers.end());
	std::cout << sbul.shortestSpan() << std::endl;
	std::cout << sbul.longestSpan() << std::endl;


	return 0; 
}
