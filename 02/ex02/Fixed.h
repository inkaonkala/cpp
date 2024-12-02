/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:31:14 by iniska            #+#    #+#             */
/*   Updated: 2024/12/02 10:58:10 by iniska           ###   ########.fr       */
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
	Fixed(const int intValue);
	Fixed(const float floatValue);

	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();

	float toFloat() const;
	int toInt() const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	/*
		Adding arithmetics
		-comparisons
		-arithmetics
		-plus and minus
		-not and const min and max
	*/
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;

	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;

	Fixed& operator++();
	Fixed& operator++(int);
	Fixed& operator--();
	Fixed& operator--(int);

	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b); 

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif