/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:30:26 by iniska            #+#    #+#             */
/*   Updated: 2025/01/22 20:55:15 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

int main()
{

	try 
	{
		Intern RandomDude;
		AForm* form;

		form = RandomDude.makeForm("shrubbery creation", "home");
		delete form;
		/*
		Bureaucrat buro1("Faabio", 74);
		Bureaucrat buro2("Lulu", 1);

		ShrubberyCreationForm form1("Shrub");
		RobotomyReguestForm form2("Robot");
		PresidentialPardonForm form3("President");

		form1.beSigned(buro1);
		form2.beSigned(buro2);
		form3.beSigned(buro2);
//		form3.beSigned(buro1);

//		buro1.executeForm(form1);
		buro2.executeForm(form1);
		buro2.executeForm(form2);
		buro2.executeForm(form3);
	}
	*/
	}
	catch (std::exception& e) 
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	
	
	return 0;	
}