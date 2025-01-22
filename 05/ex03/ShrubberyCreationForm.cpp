/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 08:42:12 by iniska            #+#    #+#             */
/*   Updated: 2025/01/21 09:38:22 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"
#include "Bureaucrat.h"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreation", 145, 137, target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (!this->isSigned())
	{
		throw FormNotSignedExeption();
	}
	if (executor.getGrade() > this->getToExecGrade())
	{
		throw GradeTooLowException();
	}

	//create the file
	std::ofstream file(this->getTarget() + "_shrubbery");
	if (file.is_open()) 
	{
		file << "ASCII Three (is written inside)\n";
		file.close();
	}
	else
	{
		std::cerr << "Failed to create a file" << std::endl;
	}
}