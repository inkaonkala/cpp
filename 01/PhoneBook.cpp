/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:45:09 by iniska            #+#    #+#             */
/*   Updated: 2024/10/10 21:46:12 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : currentConIndex(0), totalCon(0) {}

void PhoneBook::addCon()
{
	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, lastName);
	std::cout << "Enter nickName: ";
	std::getline(std::cin, nickName);
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, darkestSecret);

	contacts[currentConIndex].setCon(firstName, lastName, nickName, phoneNumber, darkestSecret);

	currentConIndex = (currentConIndex + 1) % 8;
	if (totalCon < 8)
		totalCon++;		
}

void PhoneBook::searchCon() const
{
	int	i;

	i = 0;
	if(totalCon == 0)
	{
		std::cout << "Nothing has been added to you phonebook" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "nickname" << std::endl;
	while (i < totalCon)
	{
		std::cout << std::setw(10) << i << "|"
				<< std::setw(10) << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName()) << "|"
				<< std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << "|"
				<< std::setw(10) << (contacts[i].getNickName().length() > 10 ? contacts[i].getNickName().substr(0, 9) + "." : contacts[i].getNickName()) << std::endl;
		i++;
	}

	int	index;
	std::cout << "Enter index nbr to display: ";
	std::cin >> index;
	std::cin.ignore(); // ignores newline from buffer

	if ( index >= 0 && index < totalCon)
		contacts[index].displayCon();
	else
		std::cout << "Invalid nbr!" << std::endl;
}


