/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:23:11 by iniska            #+#    #+#             */
/*   Updated: 2025/01/22 12:53:29 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.h"

class AForm;

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
		void signForm(AForm& form);

		void executeForm(AForm const &form);

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