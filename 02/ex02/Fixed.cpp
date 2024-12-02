/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:45:12 by iniska            #+#    #+#             */
/*   Updated: 2024/12/02 13:21:17 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed() : fixedValue(0) {
	std::cout << "Default const called" << std::endl;
}

//turn int to fixed
Fixed::Fixed(const int intValue) 
{
	std::cout << "Integer to fixed called" << std::endl;
	fixedValue = intValue << fractionalBits;
}

//turn float to fixed
Fixed::Fixed(const float floatValue) 
{
	std::cout << "Float to fixed called" << std::endl;
	fixedValue = roundf(floatValue * (1 << fractionalBits));
}

//turn back
int Fixed::toInt() const 
{
	return (fixedValue >> fractionalBits); 
}

float Fixed::toFloat() const 
{
	return (static_cast<float>(fixedValue) / (1 << fractionalBits));
}

//overload
std::ostream& operator<<(std::ostream &os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os); 
}


Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy const calld" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy's assinment operator called" << std::endl;
	if (this != &other) {
		this->fixedValue = other.fixedValue;
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout <<"Get RAW called" << std::endl;
	return this->fixedValue;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "Set RAW called" << std::endl;
	this->fixedValue = raw;
}

// COMPARISONS

bool Fixed::operator>(const Fixed& other) const 
{
	return (this->fixedValue > other.fixedValue);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->fixedValue < other.fixedValue);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return(this->fixedValue >= other.fixedValue);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return(this->fixedValue <= other.fixedValue);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->fixedValue == other.fixedValue);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->fixedValue != other.fixedValue);
}

//ARITHMETICS

Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	if (other.fixedValue == 0)
		throw std::runtime_error("Can not divide by 0");
	return Fixed(this->toFloat() / other.toFloat());
}

// INCREMENT AND DECREMENT

Fixed& Fixed::operator++()
{
	this->fixedValue++;
	return (*this);
}

//return the og value, but leave the objc incramenter
Fixed& Fixed::operator++(int)
{
	Fixed temp(*this);
	this->fixedValue++;
	return (temp);
}

Fixed& Fixed::operator--()
{
	this->fixedValue--;
	return (*this);
}

Fixed& Fixed::operator--(int)
{
	Fixed temp(*this);
	this->fixedValue--;
	return (temp);
}

//STATIC MIN AND MAX 

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return ((a < b) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return ((a < b) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) 
{
	return ((a > b) ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return ((a > b) ? a : b);
}





