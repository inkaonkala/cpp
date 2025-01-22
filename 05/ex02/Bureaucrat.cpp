/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:53:27 by iniska            #+#    #+#             */
/*   Updated: 2025/01/22 12:37:43 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
{
	if (grade < 1)
	{
		throw GradeTooLowException();
	}
	else if (grade > 150)
	{
		throw GradeTooHighException();
	}
	this->grade = grade;
	std::cout << " \_O_/ " << name << std::endl;
	std::cout << "Grade: " << grade << "\n" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name) {
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
}

const std::string& Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::incramentGrade()
{
	if (grade <= 1)
	{
		throw GradeTooHighException();
	}
	grade--;
}

void Bureaucrat::decramentGrade()
{
	if (grade >= 150)
	{
		throw GradeTooLowException();
	}
	grade++;
}

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signed " << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << *this << " couldn't sign " << form << " because " << e.what() << std::endl;
	}
}

/*
	Here is the execution function
	It uses the e type to test! 
	Pretty nifty, isn't it?
*/
void Bureaucrat::executeForm(AForm const &form)
{
	try 
	{
		form.execute(*this);
		std::cout << *this << " executed " << form << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << *this << " could not do " << form << " because " << e.what() << std::endl;
	}
}

// overload function
std::ostream& operator<<(std::ostream& output, const Bureaucrat& bure)
{
	output << bure.getName() << ", bureau grade " << bure.getGrade();
	return output;
}
