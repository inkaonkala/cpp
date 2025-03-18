/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 06:28:17 by iniska            #+#    #+#             */
/*   Updated: 2025/01/26 06:31:30 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <iostream>
#include <cstdint>

class Data;

class Serializer
{
	private:
		Serializer() {}
		~Serializer() {}
		// need to add for subj
		Serializer(const Serializer& other) = delete;
		Serializer& operator=(const Serializer& other) = delete;

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserializer(uintptr_t intData);
};

#endif