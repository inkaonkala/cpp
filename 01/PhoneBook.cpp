/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:45:09 by iniska            #+#    #+#             */
/*   Updated: 2024/10/09 20:59:37 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : currentConIndex(0), totalCon(0) {}

void PhoneBook::addCon()
{
	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

	str::cout << "Enter First Name: ";
	std::getline(std::cin, firstName);
	str::cout << "Enter Last Name: ";
	std::getline(std::cin, lastName);
	str::cout << "Enter nickName: ";
	std::getline(std::cin, nickName);
	str::cout << "Enter Phone Number: ";
	std::getline(std::cin, phoneNumber);
	str::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, darkestSecret);

	contacts[currentConIndex].setCon(firstName, lastName, nickName, phoneNumber, darkestSecret);

	currentConIndex = (currentConIndex + 1) % 8;
	if (totalCon < 8)
		totalCon++;		
}

void PhoneBook::searchCon() const
{
	if(totalCon == 0)
	{
		std::cout << "Nothing has been added to you phonebook" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "nickname" << std::endl;
}
