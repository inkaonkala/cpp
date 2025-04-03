/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExhange.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:01:54 by iniska            #+#    #+#             */
/*   Updated: 2025/03/18 10:01:55 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXHANGE_HPP
#define BITCOINEXHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <stdexcept>
#include <limits>


class DateAndPrices
{
	private:

		std::map<std::string, double> theData;

		bool dateValid(const std::string& date) const;
		std::string findClosestDay(const std::string& date) const;

	public:
		DateAndPrices(const std::string data);
		~DateAndPrices();

		double getPrice(const std::string& date) const;
		void prossInput(const std::string& inputFile) const;

};


#endif
