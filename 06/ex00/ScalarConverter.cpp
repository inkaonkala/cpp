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
ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return *this; };
ScalarConverter::~ScalarConverter() {};


bool isAChar(const std::string& input)
{
	return (input.length() == 1 && !std::isdigit(input[0]));
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
		return (false);
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
		return (false);
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
		return (false);
	}
}

void ScalarConverter::convert(const std::string& input)
{
	if (isAChar(input))
	{
		char c = input[0];
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
		return ;
	}
	else if (isDouble(input))
	{
		double d = std::stod(input);
		if (d >= 32 && d <= 126)
			std::cout << "char: " << static_cast<char>(d) << std::endl;
		else
			std::cout << "Char is not" << std::endl;
		if (d >= -2147483648 && d <= 2147483647)
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		else
			std::cout << "int is not int'it (heh heh)" << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
		return ;
	}
	else if (isFloat(input))
	{
		float f = std::stof(input);
		if (f >= 32 && f <= 126)
			std::cout << "char: " << static_cast<char>(f) << std::endl;
		else
			std::cout << "Char is not" << std::endl;
		if (f >= -2147483648.0 && f <= 2147483647.0)
			std::cout << "int: " << static_cast<int>(f) << std::endl;
		else
			std::cout << "int is not int'it (heh heh)" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(f) << std::endl;
		return ;
	}
	else if (isInt(input))
	{
		std::cout << "HERE" << std::endl;
		int i = std::stoi(input);
		if (i >= 32 && i <= 126)
			std::cout << "char: " << static_cast<char>(i) << std::endl;
		else
			std::cout << "Char is not" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(i) << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(i) << std::endl;
		return ;
	}
	std::cout << "Wonky input!" << std::endl;
}


