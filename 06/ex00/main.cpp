/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:02:46 by iniska            #+#    #+#             */
/*   Updated: 2025/01/23 20:04:57 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"

int main()
{
	std::cout << "\n" << std::endl;	
	std::cout << "Giving 42f" << std::endl;
	ScalarConverter::convert("42f");
	std::cout << "\n" << std::endl;
	std::cout << "Giving -42" << std::endl;
	ScalarConverter::convert("-42");
	std::cout << "\n" << std::endl;
	std::cout << "Giving 42.0" << std::endl;
	ScalarConverter::convert("42.0");
	std::cout << "\n" << std::endl;
	std::cout << "Giving 34713563185631763718653781" << std::endl;
	ScalarConverter::convert("34713563185631763718653781");
	std::cout << "\n" << std::endl;
	std::cout << "Giving nan" << std::endl;
	ScalarConverter::convert("nan");
	std::cout << "\n" << std::endl;
	std::cout << "Giving -inf" << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << "\n" << std::endl;
	std::cout << "Giving a" << std::endl;
	ScalarConverter::convert("a");
	std::cout << "\n" << std::endl;
	std::cout << "Giving c" << std::endl;
	ScalarConverter::convert("c");
	std::cout << "\n" << std::endl;
	std::cout << "Giving !" << std::endl;
	ScalarConverter::convert("!");
	std::cout << "\n" << std::endl;
	std::cout << "Giving empty" << std::endl;
	ScalarConverter::convert("");
	std::cout << "\n" << std::endl;

	return (0);
}

/*
int main()
{
    // Test cases for float and double values
    std::cout << "Giving -inff" << std::endl;
    ScalarConverter::convert("-inff");
    std::cout << "\n" << std::endl;

    std::cout << "Giving +inff" << std::endl;
    ScalarConverter::convert("+inff");
    std::cout << "\n" << std::endl;

    std::cout << "Giving nanf" << std::endl;
    ScalarConverter::convert("nanf");
    std::cout << "\n" << std::endl;

    std::cout << "Giving 42.0f" << std::endl;
    ScalarConverter::convert("42.0f");
    std::cout << "\n" << std::endl;

    std::cout << "Giving 0.0f" << std::endl;
    ScalarConverter::convert("0.0f");
    std::cout << "\n" << std::endl;

    // Test cases for double values
    std::cout << "Giving -inf" << std::endl;
    ScalarConverter::convert("-inf");
    std::cout << "\n" << std::endl;

    std::cout << "Giving +inf" << std::endl;
    ScalarConverter::convert("+inf");
    std::cout << "\n" << std::endl;

    std::cout << "Giving nan" << std::endl;
    ScalarConverter::convert("nan");
    std::cout << "\n" << std::endl;

    std::cout << "Giving 42.0" << std::endl;
    ScalarConverter::convert("42.0");
    std::cout << "\n" << std::endl;

    std::cout << "Giving 0.0" << std::endl;
    ScalarConverter::convert("0.0");
    std::cout << "\n" << std::endl;

    // Additional test cases for edge cases
    std::cout << "Giving -42.0f" << std::endl;
    ScalarConverter::convert("-42.0f");
    std::cout << "\n" << std::endl;

    std::cout << "Giving +42.0f" << std::endl;
    ScalarConverter::convert("+42.0f");
    std::cout << "\n" << std::endl;

    std::cout << "Giving 1234567890.1234567" << std::endl;
    ScalarConverter::convert("123456121212127890.1234567");
    std::cout << "\n" << std::endl;

    return 0;
}
*/