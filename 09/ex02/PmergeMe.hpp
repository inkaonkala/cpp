/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:22:25 by iniska            #+#    #+#             */
/*   Updated: 2025/03/19 13:22:27 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <vector>


class PmergeMe
{
	private:
	
		std::vector<int> numbers;
		std::vector<std::pair<int, int>> pairs;

		void startHandler();
		void sortSandB();
		std::vector<int> FordJohnsonTime(const std::vector<int>& input);
		std::vector<size_t> INeedTheLaddersJacob(size_t size);


	public:
		PmergeMe(int arc, char **arv);
		PmergeMe(const PmergeMe& other);
		PmergeMe&operator=(const PmergeMe& other);
		~PmergeMe();

		void compareAndMerge();
};

#endif