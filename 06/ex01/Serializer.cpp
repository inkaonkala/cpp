/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 06:34:33 by iniska            #+#    #+#             */
/*   Updated: 2025/01/26 06:40:45 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.h"
#include "Data.h"

/*
	- when dealing with the memory itself, the "raw data"
		reinterpret_cast
	- Like here, we are casting the pointer_address to move it inside the program!
*/

Serializer::Serializer() {};
Serializer::Serializer(const Serializer& other) { (void)other };
Serializer& Serializer::operator=(const Serializer& other) { (void)other, return *this };
Serializer::~Serializer() {};


uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserializer(uintptr_t intData)
{
	return reinterpret_cast<Data*>(intData);
}