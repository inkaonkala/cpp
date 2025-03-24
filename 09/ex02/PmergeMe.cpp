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
	std::cout << "\n	First, I will pair up your numbers (ෆ˙ᵕ˙ෆ) " << std::endl;
	
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

	std::cout << "	♡ Pairing has been done! " << std::endl;
}

void PmergeMe::sortSandB()
{
	std::cout << "\n	Now I will divide the numbers in two goups small:𐦂𖨆𐀪𖠋𐀪𐀪 and BIG:𐦂𖨆𐀪𖠋𐀪𐀪" << std::endl;

	std::vector<int> S;
	std::vector<int> B;

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		S.push_back(pairs[i].first);
		if (pairs[i].second != -1)
			B.push_back(pairs[i].second);
	}

	std::cout << " \n	Next it's time to sort the BIG group recurssively ꒰⑅ᵕ༚ᵕ꒱˖" << std::endl;
	std::vector<int> sorted = FordJohnsonTime(B);

	std::cout << "Sorted B group: ";
	for (int num : sorted)
		std::cout << num << " ";
	std::cout << std::endl;

}

std::vector<int> PmergeMe::FordJohnsonTime(const std::vector<int>& input)
{	
	if (input.size() <= 1)
		return input;
	
	// send back and fort to pairing untill it's done
	std::vector<std::pair<int, int>> newPairs;

	//pair up again
	for (size_t i = 0; i + 1 < input.size(); i += 2)
	{
		if (input[i] > input[i + 1])
			newPairs.push_back({input[i + 1], input[i]});
		else
			newPairs.push_back({input[i], input[i + 1]});
	}
	if (input.size() % 2 != 0)
		newPairs.push_back({input.back(), -1});

	// divide SMALL AND BIG again

	std::vector<int> S;
	std::vector<int> B;

	for (size_t i = 0; i < newPairs.size(); ++i)
	{
		S.push_back(newPairs[i].first);
		if (newPairs[i].second != -1)
			B.push_back(newPairs[i].second);
	}

	// loop back
	std::vector<int> sorted = FordJohnsonTime(B);

	// buid the Jacobstahl order to merge the groupss
	std::vector<size_t> wholeGroup = INeedTheLaddersJacob(S.size());

	// AMerge the S and B groups according to the Jacob
	
	// for (size_t i = 0; i < S.size(); ++i)
	// {
	// 	auto pos = std::lower_bound(sorted.begin(), sorted.end(), S[i]);
	// 	sorted.insert(pos, S[i]);
	// }
	
	return sorted;

}

std::vector<size_t> PmergeMe::INeedTheLaddersJacob(size_t size)
{
	std::cout << "HERE HERE" << std::endl;
}


void PmergeMe::compareAndMerge()
{
	startHandler();
	//while (numbers.size() > 2)
	sortSandB();
}