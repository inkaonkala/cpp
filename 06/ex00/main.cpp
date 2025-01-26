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
	ScalarConverter::convert("42");
	ScalarConverter::convert("-42");
	ScalarConverter::convert("42.0");
	ScalarConverter::convert("nan");
	ScalarConverter::convert("-inf");
	ScalarConverter::convert("a");

	ScalarConverter::convert("c");
	ScalarConverter::convert("!");
	ScalarConverter::convert("");

	return (0);
}