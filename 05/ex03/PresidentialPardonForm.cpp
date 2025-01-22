/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:36:31 by iniska            #+#    #+#             */
/*   Updated: 2025/01/22 13:04:32 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"
#include "Bureaucrat.h"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("Presidential Pardon", 25, 5, target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
	{
		throw FormNotSignedExeption();
	}
	if (executor.getGrade() > this->getToExecGrade())
	{
		throw GradeTooLowException();
	}
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}