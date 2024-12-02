/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:31:14 by iniska            #+#    #+#             */
/*   Updated: 2024/11/30 20:59:13 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
	int fixedValue;
	static const int fractional_bits = 8;

public:
	// init to 0
	Fixed();
	// copy value from other
	Fixed(const Fixed& other);
	// handle assugnment
	Fixed& operator=(const Fixed& other);
	//clean
	~Fixed();

	int getRawBits(void) const; // returns tte fixed point value
	void setRawBits(int const raw); // sets the raw value
};

#endif