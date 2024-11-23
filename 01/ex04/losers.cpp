/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   losers.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:20:49 by iniska            #+#    #+#             */
/*   Updated: 2024/11/22 21:34:30 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "losers.h"

std::string replacer(const std::string& file, const std::string& s1, const std::string& s2)
{
	std::string result;
	size_t pos = 0;
	size_t start = 0;

	while ((pos = file.find(s1, start)) != std::string::npos)
	{
		result.append(file, start, pos - start);
		result.append(s2);
		start = pos + s1.length();
	}
	result.append(file, start);
	return (result);
}

bool doIt(const std::string& file, const std::string& s1, const std::string& s2)
{
	if (s1.empty() || s2.empty())
	{
		std::cerr << "No empty strings, please." << std::endl;
		return (false);
	}

	//open file
	std::ifstream inFile(file);
	if (!inFile)
	{
		std::cerr << "Could not open the file." << std::endl;
		return (false);
	}

	//open output file
	std::ofstream outFile(file + ".replace");
	if (!outFile)
	{
		std::cerr << "Error, No outfile" << std::endl;
		return (false);
	}

	//save indile to outfile line by line with replacing the words
	std::string aLine;
	while (std::getline(inFile, aLine)) 
	{
		outFile << replacer(aLine, s1, s2) << '\n';
	}
	
	return (true);
}