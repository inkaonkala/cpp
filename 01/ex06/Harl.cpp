/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:55:08 by iniska            #+#    #+#             */
/*   Updated: 2024/11/23 21:01:29 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void Harl::debug(void){
	std::cout << "DEBUG" << std::endl;
};

void Harl::info(void) {
	std::cout << "INFO" << std::endl;
}
	
void Harl::warning(void) {
	std::cout << "WARNING" << std::endl;
}
	
void Harl::error(void) {
	std::cout << "ERROR" << std::endl;
}

void Harl::complain(std::string level) 
{
	// set array of funtions
	void (Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	
	// set array to name the functions
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	//look for the right function defined by the name
	for (int i = 0; i < 4; i++) 
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return ;
		}
	}

	// else
	std::cout << "I DO complain about this complain: " << level << std::endl;

}

void Harl::filter(std::string level)
{
	int	level_i = -1;

	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			level_i = i;
			break ;
		}
	}

	/*
	
	*/
	switch (level_i)
	{
		case 0:
			this->debug();
//			[[fallthrough]];
		case 1:
			this->info();
//			[[fallthrough]];
		case 2:
			this->warning();
//			[[fallthrough]];
		case 3:
			this->error();
			break ;
		default:
			std::cout << "ZZZ zzz ZZZ zzz ZZZ" << std::endl;

	}
}