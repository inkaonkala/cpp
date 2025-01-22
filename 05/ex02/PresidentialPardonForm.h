/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:40:17 by iniska            #+#    #+#             */
/*   Updated: 2025/01/22 13:04:13 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.h"

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm(const std::string& target);
	virtual ~PresidentialPardonForm();
	
	void execute(Bureaucrat const & executor) const;
};

#endif