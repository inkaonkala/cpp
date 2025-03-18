/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExhange.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:01:45 by iniska            #+#    #+#             */
/*   Updated: 2025/03/18 10:01:47 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExhange.hpp"

DateAndPrices::DateAndPrices(const std::string data)
{
	std::ifstream file(data);
	if (!file.is_open())
	{
		throw std::runtime_error("❌Error error: could not open the .csv file!");
	}

	std::string line;
	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		std::string date;
		double price;

		if (std::getline(ss, date, ',') && ss >> price) // reads untill , to data and the rest to price
		{
			theData[date] = price;
		}
		file.close();
	}
}

DateAndPrices::~DateAndPrices() {}


void DateAndPrices::prossInput(const std::string& inputFile) const
{
	std::ifstream file(inputFile);
	if (!file.is_open())
	{
		throw std::runtime_error("❌ Error error: could not open the file given!");
	}

	std::string line;
	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		std::string date;
		std::string valueStr;
		float		value;

		/*
			parse the file:
				date | value
				2011-01-03 | 3
				2011-01-03 | 2
				2011-01-03 | 1
		*/
		if (!(std::getline(ss, date, '|') && std::getline(ss, valueStr)))
		{
			std::cout << "Error: Bad input: " << line << std::endl;
			continue ;
		}
		
		//trim
		date.erase(date.find_last_not_of("\t") + 1);
		valueStr.erase(0, valueStr.find_first_not_of("\t"));

		//check date valid
		if (!dateValid(date))
		{
			std::cout << "Error: Bad date: " << date << std::endl;
			continue ;
		}
		
		try 
		{
			// change to float
			value = std::stof(valueStr);
			if (value < 0 || value > 1000)
			{
				std::cout << "Bad value: " << value << std::endl;
			}
			//count the price
			else
			{
				double price = getPrice(date);
				std::cout << date << " => " << value << " = " << value * price << std::endl; 
			}
		}
		catch (const std::exception& e)
		{
			std::cout << "❌Error: Bad input: " << line << std::endl;
		}
	}
	file.close();

}

std::string DateAndPrices::findClosestDay(const std::string& date) const
{
	std::map<std::string, double>::const_iterator it = theData.lower_bound(date);
	if (it == theData.begin() && it->first !=  date)
	{
		throw std::runtime_error("❌Error: no earlier date in the database!");
	}
	if (it == theData.end() || it->first != date)
	{
		--it;
	}
	return (it->first);
}

double DateAndPrices::getPrice(const std::string& date) const
{
	std::string closestData = findClosestDay(date);
	return theData.at(closestData);

}

bool DateAndPrices::dateValid(const std::string& date) const
{
	if (date.length() != 10)
		return (false);
	if (date[4] != '-' || date[7] != '-')
		return (false);
	return (true);
}
