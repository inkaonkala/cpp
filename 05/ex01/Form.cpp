/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:57:25 by iniska            #+#    #+#             */
/*   Updated: 2025/01/09 23:12:01 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"
#include "Bureaucrat.h"

// BIG FOUR

Form::Form(const std::string& name, int toSignGrade, int toExecGrade) 
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

Form::Form(const Form& other) 
	: name(other.name), signedStatus(other.signedStatus), toSignGrade(other.toSignGrade), toExecGrade(other.toExecGrade) {
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
	{
		this->signedStatus = other.signedStatus;
	}
	return *this;
}

Form::~Form() {

}

// Getters

const std::string Form::getName() const {
	return this->name;
}

bool Form::isSigned() const {
	return this->signedStatus;
}

int Form::getToSignGrade() const {
	return this->toSignGrade;
}

int Form::getToExecGrade() const {
	return this->toExecGrade;
}

// member function, signing the form

void Form::beSigned(const Bureaucrat& bureaucrat)
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

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << "Form " << form.getName()
		<< "\n* signed: " << (form.isSigned() ? "Yes" : "No")
		<< "\n* grade to sign: " << form.getToSignGrade()
		<< "\n* grade to execute: " << form.getToExecGrade(); 
	return os;
}