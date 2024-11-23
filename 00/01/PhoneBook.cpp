/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:45:09 by iniska            #+#    #+#             */
/*   Updated: 2024/10/24 19:44:37 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : currentConIndex(0), totalCon(0) {}

void PhoneBook::addCon()
{
	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

	do {
		std::cout << "Enter First Name: ";
		std::getline(std::cin, firstName);
		if (firstName.empty())
			std::cout << "You need to give me something!\n";
	} while (firstName.empty());
	do {
		std::cout << "Enter Last Name: ";
		std::getline(std::cin, lastName);
		if (lastName.empty())
			std::cout << "I need imput!\n";
	} while (lastName.empty());
	do {
		std::cout << "Enter nickName: ";
		std::getline(std::cin, nickName);
		if (lastName.empty())
			std::cout << "I need a Nick, or atleast a Name! Hah hah\n";
	} while (nickName.empty());
	do {
		std::cout << "Enter Phone Number: ";
		std::getline(std::cin, phoneNumber);
		if (phoneNumber.empty())
			std::cout << "Please insert some numbers\n";
	} while (phoneNumber.empty());
	do {
		std::cout << "Enter Darkest Secret: ";
		std::getline(std::cin, darkestSecret);
		if (darkestSecret.empty())
			std::cout << "Use your imagination!\n";
	} while (darkestSecret.empty());

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


