/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:23:11 by iniska            #+#    #+#             */
/*   Updated: 2025/01/03 11:06:12 by iniska           ###   ########.fr       */
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

		Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();

		const std::string& getName();
		int getGrade();
		
		void incramentGrade();
		void decramentGrade();

		//Then we need the exception classes

};


#endif