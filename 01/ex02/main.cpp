/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:45:25 by iniska            #+#    #+#             */
/*   Updated: 2024/11/20 20:10:27 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string brain = "HI THIS IS BRAIN";

	std::string *strPTR = &brain;
	std::string	&strREF = brain;

	std::cout << "The address of string: " << &brain << std::endl;
	std::cout << "The address of PTR: " << strPTR  << std::endl;
	std::cout << "The address of REF: " << &strREF << std::endl;

	std::cout << "Value of string: " << brain  << std::endl;
	std::cout << "Value pointed by PTR: " << *strPTR << std::endl;
	std::cout << "Value pointed by REF: " << strREF  << std::endl;

	return (0);
}