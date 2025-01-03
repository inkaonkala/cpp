/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:53:27 by iniska            #+#    #+#             */
/*   Updated: 2025/01/03 12:46:49 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
{
	if (grade < 1)
	{
		throw GradeTooLowException()
	}
	else if (grade > 150)
	{
		throw GradeTooHighException();
	}
	this->grade = grade;
	std::cout << "\_O_/ " << name << std::endl;
	std::cout << "Grade: " << grade << "\n" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other){
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(){
}

const std::string& Bureaucrat::getName()
{
	
}

int Bureaucrat::getGrade()
{

}

void Bureaucrat::incramentGrade()
{

}

void Bureaucrat::decramentGrade()
{
	
}
