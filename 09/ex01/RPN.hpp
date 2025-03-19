/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:56:39 by iniska            #+#    #+#             */
/*   Updated: 2025/03/19 10:56:40 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <stdexcept>

class RPN
{
	private:
		std::stack<int> myStack;

		bool isOperator(const std::string& token) const;
		int doTheMath(const std::string &ope, int a, int b) const;
	public:

		RPN();
		RPN(const RPN& other);
		RPN &operator=(const RPN& other);
		~RPN();

		int letsCount(std::string input);

};

#endif