/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:13:31 by iniska            #+#    #+#             */
/*   Updated: 2025/01/26 20:16:52 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(const T& a, const T& b)
{
	if (a < b)
	{
		return (a);
	}
	return (b);
}

template <typename T>
T max(const T& a, const T& b)
{
	if (a > b)
	{
		return (a);
	}
	return (b);

}

#endif 