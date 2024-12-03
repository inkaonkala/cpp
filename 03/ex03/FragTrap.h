/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:29:50 by iniska            #+#    #+#             */
/*   Updated: 2024/12/03 16:01:22 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
//private:

public:
	FragTrap(const std::string& name);
	~FragTrap();
	
//	void attack(const std::string& target);
	void highFivesGuys(void);

};

#endif