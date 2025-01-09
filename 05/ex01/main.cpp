/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:30:26 by iniska            #+#    #+#             */
/*   Updated: 2025/01/09 22:42:39 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Form.h"

int main()
{

	try 
	{
		Bureaucrat buro1("Faabio", 74);
		Bureaucrat buro2("Lulu", 1);

		Form form1("Tax refund", 40, 40);
		Form form2("Tax taxed", 5, 10);

		std::cout << form1 << std::endl;
		buro1.signForm(form1);
		std::cout << form1 << std::endl;

		std::cout << form2 << std::endl;
		buro2.signForm(form2);
		std::cout << form2 << std::endl; 

		buro2.incramentGrade();

	}
	catch (std::exception& e) 
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	
	return 0;	
}