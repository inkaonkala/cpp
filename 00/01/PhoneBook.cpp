/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:45:09 by iniska            #+#    #+#             */
/*   Updated: 2024/11/27 12:53:42 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentConIndex(0), totalCon(0) {}

void PhoneBook::addCon()
{
	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

	do {
		std::cout << "Enter First Name: ";
		std::getline(std::cin, firstName);
		if (std::cin.eof()) 
		{
            std::cout << "\nOk, by then. \n";
            exit(0);
        }
		if (firstName.empty())
			std::cout << "You need to give me something!\n";
	} while (firstName.empty());
	do {
		std::cout << "Enter Last Name: ";
		std::getline(std::cin, lastName);
		if (std::cin.eof()) 
		{
            std::cout << "\nOk, by then. \n";
            exit(0);
        }
		if (lastName.empty())
			std::cout << "I need imput!\n";
	} while (lastName.empty());
	do {
		std::cout << "Enter nickName: ";
		std::getline(std::cin, nickName);
		if (std::cin.eof()) 
		{
            std::cout << "\nOk, by then. \n";
            exit(0);
        }
		if (nickName.empty())
			std::cout << "I need a Nick, or atleast a Name! Hah hah\n";
	} while (nickName.empty());
	do {
		std::cout << "Enter Phone Number: ";
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof()) 
		{
            std::cout << "\nOk, by then. \n";
            exit(0);
        }
		if (phoneNumber.empty())
			std::cout << "Please insert some numbers\n";
	} while (phoneNumber.empty());
	do {
		std::cout << "Enter Darkest Secret: ";
		std::getline(std::cin, darkestSecret);
		if (std::cin.eof()) 
		{
            std::cout << "\nOk, by then. \n";
            exit(0);
        }
		if (darkestSecret.empty())
			std::cout << "Use your imagination!\n";
	} while (darkestSecret.empty());

	contacts[currentConIndex].setCon(firstName, lastName, nickName, phoneNumber, darkestSecret);

	currentConIndex = (currentConIndex + 1) % 8;
	if (totalCon < 8) {
				totalCon++;
	}

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

	std::cout << "Enter index nbr to display: ";
	std::string input;
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Please provide input" << std::endl;
		return ;
	}
	
	try 
	{
		long	index;
		index = std::stol(input);
		if (index >= 0 && index < totalCon) {
			contacts[index].displayCon();
		}
		else {
			std::cout << "Invalid nbr!" << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cout << "Invalid nbr!" << std::endl;
	}
}


