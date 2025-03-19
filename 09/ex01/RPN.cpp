/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:56:29 by iniska            #+#    #+#             */
/*   Updated: 2025/03/19 10:56:31 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& other)
{
	*this = other;
}
RPN& RPN::operator=(const RPN& other) 
{ 
	if (this != &other)
	{
		this->myStack = other.myStack;
	}
	return *this;
}

RPN::~RPN() {}

bool RPN::isOperator(const std::string& token) const
{
	return (token == "+" || token == "-" || token == "*" || token == "/");
}

int RPN::doTheMath(const std::string& ope, int a, int b) const
{
	if (ope == "+")
		return a + b;
	if (ope == "-")
		return a - b;
	if (ope == "*")
		return a * b;
	if (ope == "/")
	{
		if (b == 0)
			throw std::runtime_error("😵 ZERO ZERO! Can not divide by zero!");
		return a / b;
	}
	throw std::runtime_error("🚩 Error! I don't know the given operator");
}

int RPN::letsCount(std::string input)
{
	std::stringstream ss(input);
	std::string token;

	while (ss >> token)
	{
		if (isdigit(token[0]) && token.size() == 1)
		{
			myStack.push(token[0] - '0'); // good old int maker :D
		}
		else if (isOperator(token))
		{
			if (myStack.size() < 2)
				throw std::runtime_error("🚩 Error! Need more numbers before operator!");
			int b = myStack.top(); myStack.pop();
			int a = myStack.top(); myStack.pop();
			myStack.push(doTheMath(token, a, b));
		}
		else
			throw std::runtime_error("😵 Error! Invalid stuff in the input!");
	}
	if (myStack.size() != 1)
	{
		throw std::runtime_error("😵 Error! Something is wrong with the stack");
	}
	return myStack.top();
}