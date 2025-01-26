/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:25:11 by iniska            #+#    #+#             */
/*   Updated: 2025/01/23 20:06:52 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath> // nan, inf

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();

	public:

		static void convert(const std::string& input);

};

#endif