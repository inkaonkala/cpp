/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:35:24 by iniska            #+#    #+#             */
/*   Updated: 2025/01/22 14:15:18 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"
#include "Bureaucrat.h"

RobotomyReguestForm::RobotomyReguestForm(const std::string& target)
	: AForm("RobotomyReaquest", 72, 45, target) {
}

RobotomyReguestForm::~RobotomyReguestForm() {}

void RobotomyReguestForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
	{
		throw FormNotSignedExeption();
	}
	if (executor.getGrade() > this->getToExecGrade())
	{
		throw GradeTooLowException();
	}
	std::cout << "Some drilling noise is happening" << std::endl;
	if (rand() % 2 == 0)
	{
		std::cout << this->getTarget() << ", Robotomy success" << std::endl;
	}
	else
	{
		std::cout << this->getTarget() << ", Robotomy fail" << std::endl;
	}
}