/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:20:10 by iniska            #+#    #+#             */
/*   Updated: 2025/01/22 21:16:23 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"

Intern::Intern() 
{
	std::cout << "Intern is here!" << std::endl;
};

Intern::~Intern() {};

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
	// declare form functions
	AForm* createPresidentialPardonForm(const std::string& target);
	AForm* createRobotomyForm(const std::string& target);
	AForm* createShrubberyForm(const std::string& target);

	// create a sturct for the form to be created
	struct FormBase
	{
		std::string name;
		AForm* (*create)(const std::string&);
	};

	// Name all the possible forms
	FormBase forms[] =
	{
		{"shrubbery creation", &createShrubberyForm},
		{"robotomy request", &createRobotomyForm},
		{"presidential pardon", &createPresidentialPardonForm}
	};

	// create a funtion to loop through the for array to find match
	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i].name)
		{
			AForm* newForm = forms[i].create(target);
			std::cout << "Intern creates this: " << formName << std::endl;
			return newForm;
		}
	}
	throw UnknownFormException();
}

//Form creation fuctions
AForm* createShrubberyForm(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

AForm* createRobotomyForm(const std::string& target)
{
	return new RobotomyReguestForm(target);
}

AForm* createPresidentialPardonForm(const std::string& target)
{
	return new PresidentialPardonForm(target);
}