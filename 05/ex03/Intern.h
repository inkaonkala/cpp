/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:51:56 by iniska            #+#    #+#             */
/*   Updated: 2025/01/22 20:55:40 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include <string>
#include <iostream>
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

class Intern
{
public:
	Intern();
	//Intern(const Intern& other);
	//Intern& operator=(const Intern& other);
	~Intern();

	//return a pointer to the form with the right name
	AForm* makeForm(const std::string& formName, const std::string& target);

	//exeption class for throw
	class UnknownFormException : public std::exception
	{
		const char* waht() const throw()
		{
			return "Unknown form type!";
		}
	};

};

#endif