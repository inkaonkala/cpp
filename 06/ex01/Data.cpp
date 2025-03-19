/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 09:49:10 by iniska            #+#    #+#             */
/*   Updated: 2025/03/19 09:49:11 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"


Data::Data(std::string str) : name(str) {}

Data::Data(const Data& other) : name(other.name) {}

Data& Data::operator=(const Data& other)
{
	if (this != &other)
	{
		name = other.name;
	}
	return *this;
}

Data::~Data() {}