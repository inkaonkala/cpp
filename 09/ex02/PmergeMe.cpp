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


/*
#include <chrono>

auto start = std::chrono::high_resolution_clock::now();
// call your sorting logic
auto end = std::chrono::high_resolution_clock::now();

auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
std::cout << "Time to process a range of " << numbers.size()
          << " elements with std::vector : " << duration.count() << " µs" << std::endl;

*/

PmergeMe::PmergeMe(int arc, char **arv)
{
	for (int i = 1; i < arc; ++i)
	{
		int num;
		std::stringstream ss(arv[i]);
		// make it ivalid also for 2s
		if (!(ss >> num) || !(ss.eof()))
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

// 1. Pair up all the numbers. Shift the smaller first. Like 1 5 8 3 5 9 2 -> {1 5} {3 8} {9 2} 
void PmergeMe::startHandler()
{
//	std::cout << "\n	First, I will pair up your numbers (ෆ˙ᵕ˙ෆ) " << std::endl;
	
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

//	std::cout << "	♡ Pairing has been done! " << std::endl;
}

// 2. Divide the pairs in two groups, Small and Big. 
std::vector<int> PmergeMe::sortSandB()
{
//	std::cout << "\n	Now I will divide the numbers in two goups small:𐦂𖨆𐀪𖠋𐀪𐀪 and BIG:𐦂𖨆𐀪𖠋𐀪𐀪" << std::endl;

	std::vector<int> S;
	std::vector<int> B;

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		S.push_back(pairs[i].first);
		if (pairs[i].second != -1)
			B.push_back(pairs[i].second);
	}

//	std::cout << " \n	Next it's time to sort the BIG group recurssively ꒰⑅ᵕ༚ᵕ꒱˖\n" << std::endl;
	std::vector<int> sortedB = FordJohnsonTime(B);

//	std::cout << "\n	We need little help from Jacob now! 🪜 Let's borrow his ladders" << std::endl;
	std::vector<size_t> ladderNums = INeedTheLaddersJacob(S.size());
	
//	std::cout << "\n	Final step! We will merge the groups! ⛙ " << std::endl;
	std::vector<int> result = mergeTheGroups(S, sortedB, ladderNums);

//	std::cout << "\n	꒰⑅ᵕ༚ᵕ꒱˖ Now it's done! " << std::endl;
	return result;
}

// 3. By looping the pairs,  sort the B group
std::vector<int> PmergeMe::FordJohnsonTime(const std::vector<int>& input)
{	
	if (input.size() <= 1)
		return input;
	
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

	std::vector<int> S;
	std::vector<int> B;

	for (size_t i = 0; i < newPairs.size(); ++i)
	{
		S.push_back(newPairs[i].first);
		if (newPairs[i].second != -1)
			B.push_back(newPairs[i].second);
	}
	// loop back

	std::vector<int> sortedB = FordJohnsonTime(B);
	std::vector<size_t> ladder = INeedTheLaddersJacob(S.size());
	std::vector<int> sortedBig = mergeTheGroups(S, sortedB, ladder);
	
	return sortedBig;
}

// 4. Count the Jacobstahl numbers untill s.size() number has been hit
std::vector<size_t> PmergeMe::INeedTheLaddersJacob(size_t size)
{
	std::vector<size_t> Jacob = {0, 1};
	while (Jacob.back() < size)
	{
		size_t num = Jacob.back() + 2 * Jacob[Jacob.size() - 2];
		Jacob.push_back(num);
	}

	// count the insert index (0 1 2 3 5 4 11 10 9 8 7 6 )
	std::vector<size_t> ladder;
	std::vector<bool> used(size, false);

	if (size > 0)
	{
		ladder.push_back(0);
		used[0] = true;
	}

	for (size_t i  = 2; i < Jacob.size(); ++i)
	{
		for (size_t j = Jacob[i - 1] + 1; j <= std::min(Jacob[i], size - 1); ++j)
		{
			if (!used[j])
			{
				ladder.push_back(j);
				used[j] = true;
			}
		}
	}
	return ladder;	
}

// 5. Insert the S group numbers to the B group by sing the pairs and Jacob numbers
std::vector<int> PmergeMe::mergeTheGroups(const std::vector<int>& S, std::vector<int>& B, const std::vector<size_t>& ladder)
{	
	std::vector<bool> alreadyIn(S.size(), false);
	std::vector<int> sorted = B;

	for (size_t i = 0; i < ladder.size(); ++i)
	{
		size_t index = ladder[i];
		if (index >= S.size())
			continue ;

		auto pos = std::lower_bound(sorted.begin(), sorted.end(), S[index]);
		sorted.insert(pos, S[index]); 
		alreadyIn[index] = true;
	}

	for (size_t i = 0; i < S.size(); ++i)
	{
		if (!alreadyIn[i])
		{
			auto pos = std::lower_bound(sorted.begin(), sorted.end(), S[i]);
			sorted.insert(pos, S[i]);
		}
	}
	return sorted;
}

void PmergeMe::compareAndMerge()
{
	std::cout << " \n	Numbers before the sort: ";
	for (int n : numbers)
		std::cout << n << " ";
	std::cout << std::endl;

	auto start = std::chrono::high_resolution_clock::now();

	startHandler();

	std::vector<int> theResult = sortSandB();

	auto end = std::chrono::high_resolution_clock::now();
	
	std::cout << "	✨ The result of the sorting ✨: ";
	for (int num : theResult)
		std::cout << num << " ";
	std::cout << std::endl;

	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	std::cout << "	The range of numbers was " << numbers.size() << " numbers.\n	It took " << duration.count() << " microsec to sort it.\n" << std::endl;
}