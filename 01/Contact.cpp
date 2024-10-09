/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:33:27 by iniska            #+#    #+#             */
/*   Updated: 2024/10/09 20:44:50 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void Contact::setCon(str::string firstName, std::str lastName, std::str nickName, std::str phoneNumber, std::str darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickName;
	this->phonenumber = phoneNumber;
	this->darkestSecret = darkestSecret
}

std::string Contact::getFirstName() const
{
	return firstName;
}

std::string Contact::getLastNAme() const
{
	return lastName;
}

std::string Contact::getNickname() const
{
	return nickName;
}

void Contact::displayCon() const
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "LAst Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}