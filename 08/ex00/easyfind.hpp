/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:37:25 by iniska            #+#    #+#             */
/*   Updated: 2025/01/28 17:49:56 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& input, int toFind)
{
	//std::find(t& begin, T& end, int/char what to look for)
	typename T::iterator target = std::find(input.begin(), input.end(), toFind);
	if (target == input.end())
	{
		throw std::runtime_error("I still haven't found what im looking for");
	}
	return (target);
}

#endif