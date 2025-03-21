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
	
	//std::vector<std::pair<int, int>> pairs;
	for (size_t i = 0; i + 1 < numbers.size(); i += 2)
	{
		if (numbers[i] > numbers[i + 1])
			pairs.push_back({numbers[i + 1], numbers[i]});
		else
			pairs.push_back({numbers[i], numbers[i + 1]});
	}
	if (numbers.size() % 2 != 0)
		pairs.push_back({numbers.back(), -1});

	std::cout << " ♡ Pairing has been done! " << std::endl;
}

void PmergeMe::sortSandB()
{
	std::cout << "Now I will divide the numbers in two goups small:𐦂𖨆𐀪𖠋𐀪𐀪 and BIG:𐦂𖨆𐀪𖠋𐀪𐀪" << std::endl;

	std::vector<int> S;
	std::vector<int> B;

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		S.push_back(pairs[i].first);
		if (pairs[i].second != -1)
			B.push_back(pairs[i].second);
	}

	/*
	// Print the groups out

	std::cout << "Group S (small values): ";
	for (size_t i = 0; i < S.size(); ++i)
		std::cout << S[i] << " ";
	std::cout << std::endl;

	std::cout << "Group B (big values): ";
	for (size_t i = 0; i < B.size(); ++i)
		std::cout << B[i] << " ";
	std::cout << std::endl;
	*/

	// Now sort the numbers in B group
	

}


void PmergeMe::compareAndMerge()
{
	startHandler();
	//while (numbers.size() > 2)
	sortSandB();
}