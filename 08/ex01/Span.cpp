/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:36:19 by iniska            #+#    #+#             */
/*   Updated: 2025/01/31 12:16:56 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : maxSize(N) {}

Span::Span(const Span& other) : numbers(other.numbers), maxSize(other.maxSize) {}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		maxSize = other.maxSize;
		numbers = other.numbers;
	}
	return *this;

}

Span::~Span() {}


void Span::addNumber(int number)
{
	if (numbers.size() >= maxSize)
	{
		throw std::out_of_range("Span is full. No more numbers please!");
	}
	numbers.push_back(number);
}


int Span::shortestSpan()
{
	if (numbers.size() < 2)
	{
		throw std::out_of_range("Give me more numbersss!");
	}
	std::vector<int> sorted = numbers;
	//sort numbers from smallest to biggest
	std::sort(sorted.begin(), sorted.end());
	//calculate the differences between the numebrs to find the smallest
	int minSpan = sorted[1] - sorted[0];
	for (size_t i = 1; i < sorted.size() - 1; ++i)
	{
		int result = sorted[i + 1] - sorted[i];
		if (result < minSpan)
		{
			minSpan = result;
		} 
	}
	return minSpan;
}


int Span::longestSpan()
{
	if (numbers.size() < 2)
	{
		throw std::out_of_range("I need more numbers!");
	}
	//find the smallest number
	int minNum = *std::min_element(numbers.begin(), numbers.end());
	// find biggest number
	int maxNum = *std::max_element(numbers.begin(), numbers.end());

	return (maxNum - minNum);
}

//getter for the numbers
unsigned int Span::size() const 
{
	return numbers.size();
}