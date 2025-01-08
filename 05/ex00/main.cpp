/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:30:26 by iniska            #+#    #+#             */
/*   Updated: 2025/01/08 18:30:01 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main()
{

	try 
	{
		Bureaucrat buro1("Faabio", 74);
		Bureaucrat buro2("Lulu", 1);

		buro1.incramentGrade();
		std::cout << "after incrament gade is: ";

		buro2.incramentGrade();

	}
	catch (std::exception& e) 
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	
	return 0;	
}