/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:31:08 by iniska            #+#    #+#             */
/*   Updated: 2024/10/10 21:54:14 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main()
{
	PhoneBook	PhoneBook;
	std::string command;

	while (true)
	{
		std::cout << "Enter command: ADD, SEARCH, EXIT : ";
		if(!std::getline(std::cin, command))
		{
			std::cout << "\n End of input. You hit the ctrl+D";
			break ;
		}
		if (command == "ADD")
			PhoneBook.addCon();
		else if (command == "SEARCH")
			PhoneBook.searchCon();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Unknown command!" << std::endl;
	}
	return (0);
}