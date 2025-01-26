/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 06:41:02 by iniska            #+#    #+#             */
/*   Updated: 2025/01/26 06:48:04 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H

#include <string>
#include <iostream>

class Data 
{
	private:
		std::string name;

	public:
		Data(std::string str = "") : name(str) {}
		Data(const Data& other) : name(other.name) {}
		Data& operator=(const Data& other)
		{
			if (this != &other)
			{
				name = other.name;
			}
			return *this;
		}
		~Data() {}
};

#endif