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
ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other };
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return *this };
ScalarConverter::~ScalarConverter() {};


bool isAChar(const std::string& input)
{
	return (input.lenght() == 1 && !std::isdigit(input[0]));
}

bool isInt(const std::string& input)
{
	try 
	{
		std::stoi(input);
		return true;
	}
	catch (...)
	{
		return (false)
	}
}

bool isDouble(const std::string& input)
{
	try 
	{
		std::stod(input);
		return true;
	}
	catch (...)
	{
		return (false)
	}
}

bool isFloat(const std::string& input)
{
	try 
	{
		std::stof(input);
		return true;
	}
	catch (...)
	{
		return (false)
	}
}

void ScalarConverter::convert(const std::string& input)
{
	if (isAChar(input))
	{
		
	}
}


