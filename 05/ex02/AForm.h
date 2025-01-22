/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:12:04 by iniska            #+#    #+#             */
/*   Updated: 2025/01/22 14:45:16 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include <string>
#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool signedStatus;
		const int toSignGrade;
		const int toExecGrade;

	protected:
		const std::string target;

	public:
		AForm(const std::string& name, int toSignGrade, int toExecGrade, const std::string& target);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm(); // = default;

		//getters

		const std::string getName()const;
		bool isSigned() const;
		int getToSignGrade() const;
		int getToExecGrade() const;
		// new stuff
		const std::string& getTarget() const;

		// pure virtual function to be overriden by derived classes
		virtual void execute(Bureaucrat const & executor) const = 0;

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

		class FormNotSignedExeption : public std::exception {
			const char* what() const throw()
			{
				return "Form is not signed!";
			}
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif