/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:31:14 by iniska            #+#    #+#             */
/*   Updated: 2024/12/01 20:39:33 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath> //for rounding

class Fixed
{
private:
	int fixedValue;
	static const int fractionalBits = 8;

public:

	Fixed();
	// add intTaker and floatTaker
	Fixed(const int intValue);
	Fixed(const float floatValue);


	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();

	float toFloat() const;
	int toInt() const;

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

/*
-convers fix to float
-send result to output stream (os)
-return os to allow chaining (like std::cout << a << b << c;)
*/
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif