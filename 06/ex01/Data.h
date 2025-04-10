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

struct Data 
{
	std::string name;

	Data(std::string str = "");
	Data(const Data& other);
	Data& operator=(const Data& other);
	~Data();
};

#endif