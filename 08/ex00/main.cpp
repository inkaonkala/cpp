/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:50:09 by iniska            #+#    #+#             */
/*   Updated: 2025/01/28 20:33:18 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	try
	{
		//test with vector
		std::vector<int> line;
		line.push_back(1);
		line.push_back(2);	
		line.push_back(3);	
		line.push_back(4);	

		std::vector<int>::iterator found = easyfind(line, 2);
		std::cout << "Found 2 in the vector line: " << *found << std::endl; 

		//test with a list
		std::list<int> lst;
		lst.push_back(11);
		lst.push_back(12);
		lst.push_back(13);
		lst.push_back(14);				
		std::list<int>::iterator found2 = easyfind(lst, 12);
		std::cout << "found 12 from the list: " << *found2 << std::endl;

		found = easyfind(line, 10);

	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
	
}