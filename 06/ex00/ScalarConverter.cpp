/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:01:04 by iniska            #+#    #+#             */
/*   Updated: 2025/01/23 20:07:40 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"

ScalarConverter::ScalarConverter() {};


bool isAChar(char c)
{
	return (c >= 32 && c <= 126);
}

void ScalarConverter::convert(const std::string& input)
{
	// char
	if (input.length() == 1 && !std::isdigit(input[0]))
	{
		char c = input[0];
		if (isAChar(c))
		{
			std::cout << "char: '" << c << "'" << std::endl;
		}
		else
		{
			std::cout << "input is not displayable char" << std::endl;
		}
	}
	else if (input.length() > 1 &&  input.length() < 9 && std::isdigit(input[0]))
	{
		char c = static_cast<char>(std::stoi(input));
		if (isAChar(c))
		{
			std::cout << "char: '" << c << "'" << std::endl; 
		}
		else
		{
			std::cout << "input is not displayblablab" << std::endl;
		}
	}
	else 
	{
		std::cout << "char is not" << std::endl;
	}
	
	//float
	try
	{
		if (input == "-inff" || input == "+inff" || input == "nanf")
		{
			std::cout << "float is: " << input << std::endl; 
		}
		else 
		{
			float f = std::stof(input);
			std::cout << "float is: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		}
	}
	catch(...)
	{
		std::cout << "no float in here" << std::endl;
	}
	
	//double
	try
	{
		if (input == "-inf" || input == "+inf" || input == "nan")
		{
			std::cout << "double is: " << input << std::endl;
		}
		else
		{
			double d = std::stod(input);
			std::cout << "double is: " << std::fixed << std::setprecision(1) << d << std::endl;
		}
	}
	catch(...)
	{
		std::cout << "no double to be done" << std::endl;
	}

	//int
	try
	{
		int i = std::stoi(input);
		std::cout << "int is: " << i << std::endl;
	}
	catch (...) // this cathces everything, no need to specify!
	{
		std::cout << "int is not happening" << std::endl;
	}
	
}


