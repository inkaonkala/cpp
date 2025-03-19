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

class PmergeMe
{
	private:
		/*
			-split the numbers in smaller pairs 
			-
		*/
		// Make each node a pair, swap the 
		Merge();
		
			//pair the groups untill inly two are left
			pairUp();


		/*

		*/
		Insert();

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe&operator=(const PmergeMe& other);
		~PmergeMe();

		void compareAndMerge()
};

#endif