/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:23:11 by iniska            #+#    #+#             */
/*   Updated: 2025/01/03 12:53:07 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

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

		const std::string& getName();
		int getGrade();
		
		void incramentGrade();
		void decramentGrade();

		/* 
			Then we need underclasses of std::exeption
			they inherit from exeption class			
			what() function is a virtual function from std::exception. It returns ana strinf of the error
			The throw() in the function signature is a "no-throw guarantee,
		
		*/	
		void GradeTooLowException();
		void GradeTooHighException();

};


#endif