/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 07:56:32 by iniska            #+#    #+#             */
/*   Updated: 2025/01/22 14:47:52 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"
#include "Bureaucrat.h"

AForm::AForm(const std::string& name, int toSignGrade, int toExecGrade, const std::string& target)
	: name(name), signedStatus(false), toSignGrade(toSignGrade), toExecGrade(toExecGrade)
{
	if (toSignGrade < 1 || toExecGrade < 1)
	{
		throw GradeTooHighException();
	}
	if (toSignGrade > 150 || toExecGrade > 150)
	{
		throw GradeTooLowException();
	}
}

AForm::AForm(const AForm& other)
	: name(other.name), signedStatus(other.signedStatus), toSignGrade(other.toSignGrade), toExecGrade(other.toExecGrade) {
}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
	{
		this->signedStatus = other.signedStatus;
	}
	return *this;
}

AForm::~AForm() {
}


// Getters

const std::string AForm::getName() const {
	return this->name;
}

bool AForm::isSigned() const {
	return this->signedStatus;
}

int  AForm::getToSignGrade() const {
	return this->toSignGrade;
}

int AForm::getToExecGrade() const {
	return this->toExecGrade;
}

// member function, signing the form

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->toSignGrade)
	{
		this->signedStatus = true;
	}
	else
	{
		throw GradeTooLowException();
	}
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
	os << "Form " << form.getName()
		<< "\n* signed: " << (form.isSigned() ? "Yes" : "No")
		<< "\n* grade to sign: " << form.getToSignGrade()
		<< "\n* grade to execute: " << form.getToExecGrade(); 
	return os;
}

// NEW STUFF!

//setters
const std::string& AForm::getTarget() const {
	return this->target;
}



