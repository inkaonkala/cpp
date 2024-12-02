/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:45:12 by iniska            #+#    #+#             */
/*   Updated: 2024/11/30 20:59:46 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed() : fixedValue(0) {
	std::cout << "Default conts called" << std::endl;
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


