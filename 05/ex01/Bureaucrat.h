/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:23:11 by iniska            #+#    #+#             */
/*   Updated: 2025/01/09 23:00:49 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.h"

class Bureaucrat
{
	private:
		const std::string name;
		int grade;	

	public:

		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		const std::string& getName() const;
		int getGrade() const;
		
		void incramentGrade();
		void decramentGrade();

		// add the function to SIGN
		void signForm(Form& form);

		/* 
			Then we need underclasses of std::exeption
			they inherit from exeption class			
			what() function is a virtual function from std::exception. It returns ana strinf of the error
			The throw() in the function signature is a "no-throw guarantee,
		
		*/	
		class GradeTooLowException : public std::exception {
			const char* what() const throw()
			{
				return "Grade is too high!";
			}
		};

		class GradeTooHighException : public std::exception {
			const char* what() const throw()
			{
				return "Grade too low!";
			}
		};
};

// overloader
std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureau);

#endif