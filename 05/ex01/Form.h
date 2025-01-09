/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:42:04 by iniska            #+#    #+#             */
/*   Updated: 2025/01/09 23:03:24 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <string>
#include <iostream>
//#include "Bureaucrat.h"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool signedStatus;
		const int toSignGrade;
		const int toExecGrade;

	public:
		Form(const std::string& name, int toSignGrade, int toExecGrade);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();

		//getters

		const std::string getName()const;
		bool isSigned() const;
		int getToSignGrade() const;
		int getToExecGrade() const;

		//member fuction
		void beSigned(const Bureaucrat& bureaucrat);

		class GradeTooLowException : public std::exception {
			const char* what() const throw()
			{
				return "Form grade is too low!";
			}
		};

		class GradeTooHighException : public std::exception {
			const char* what() const throw()
			{
				return "Form grade too high!";
			}
		};
};

std::ostream& operator<<(std::ostream& os, const Form& form);


#endif