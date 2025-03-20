/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:22:17 by iniska            #+#    #+#             */
/*   Updated: 2025/03/19 13:22:18 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int arc, char **arv)
{
	for (int i = 1; i < arc; ++i)
	{
		int num;
		std::stringstream ss(arv[i]);
		if (!(ss >> num))
			throw std::invalid_argument("Invalid input!");
		numbers.push_back(num);
	}
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) : numbers(other.numbers) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		numbers = other.numbers;
	}
	return *this;
}

//this first function will take all the numbers, set them as pairs and sets the smallest num first
void PmergeMe::startHandler()
{
	std::cout << "First, I will pair up your numbers (ෆ˙ᵕ˙ෆ) " << std::endl;
	
	std::vector<std::pair<int, int>> pairs;
	for (size_t i = 0; i + 1 < numbers.size(); i += 2)
	{
		if (numbers[i] > numbers[i + 1])
			pairs.push_back({numbers[i + 1], numbers[i]});
		else
			pairs.push_back({numbers[i], numbers[i + 1]});
	}
	if (numbers.size() % 2 != 0)
		pairs.push_back({numbers.back(), numbers.back()});

	std::cout << " ♡ Pairing has been done! " << std::endl;
}

void PmergeMe::sortMerge()
{
	std::cout << "Now I will merge the pairs int to goups 𐦂𖨆𐀪𖠋𐀪𐀪 " << std::endl;

	//if (more than 3 pairs)
		/*
			-this function will take all the pairs, and merge them in pairs by groupsize * 2
	 		- so 2n -> group of 4, 4n ->g roup of 8, 8n -> group of 16
			- for the two groups it should look the pairs and set first the group with smaller number first
		*/
}

void PmergeMe::sortAandB()
{
	std::cout << "TEST" << std::endl;
	/*
		-This will take compair numbers in A and B and push back the smallest one. 
		-But what about group C?
	*/


}


void PmergeMe::compareAndMerge()
{
	startHandler();
	//while (numbers.size() > 2)
	sortMerge();
	sortAandB();
}