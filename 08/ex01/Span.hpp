/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:21:46 by iniska            #+#    #+#             */
/*   Updated: 2025/01/31 11:26:31 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <algorithm>
#include <iostream>
#include <vector>



//template <typename T> 
class Span
{
	private:
		std::vector<int> numbers;
		unsigned int maxSize;

	public:

		Span(unsigned int N); // : maxSize(N) {}

		Span(const Span& other); // : maxSize(other.maxSize), numbers(other.numbers) {}
		
		Span& operator=(const Span& other);
		
		~Span(); // {}

		//add number to span untill N is full
		void addNumber(int number);
		/* 
			find out the shortest span or the longest span
			If there are no numbers stored, or only one, no span can be found. 
			Thus, throw an exception.
		*/
		int shortestSpan();
		int longestSpan();

		// getter!!
		unsigned int size() const;

		/*
			Function to add multiple numbers at one time
			Template funtion need sto be on hpp file or tpp file (wont compile in cpp)
		*/
		template <typename numAdder>
		void addMultiple(numAdder start, numAdder stop)
		{
			for (numAdder add = start; add != stop; ++add)
			{
				addNumber(*add);
			}
		}

};

#endif