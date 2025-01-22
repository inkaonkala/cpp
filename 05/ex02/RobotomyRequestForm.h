/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:00:21 by iniska            #+#    #+#             */
/*   Updated: 2025/01/22 13:08:32 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.h"
#include <cstdlib>

class RobotomyReguestForm : public AForm
{ 
	public:
		RobotomyReguestForm(const std::string& target);
		virtual ~RobotomyReguestForm();
		void execute(Bureaucrat const & executor) const;
};

#endif