/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:45:17 by iniska            #+#    #+#             */
/*   Updated: 2024/12/02 13:17:07 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.h"

int main( void ) 
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	std::cout << "\nInitial values: " << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;

	std::cout << "\nArithmetics :" << std::endl;
	Fixed h = b + c;
	Fixed e = c - b;
	Fixed l = b * c;
	Fixed p = c / b;

	std::cout << "b + c: " << h << std::endl;
	std::cout << "c - b: " << e << std::endl;
	std::cout << "b * c: " << l << std::endl;
	std::cout << "c / b: " << p << std::endl;

	std::cout << "\nCornparisons🌽: " << std::endl;
	std::cout << "b > c: " << (b > c) << std::endl;
	std::cout << "b < c: " << (b < c) << std::endl;
	std::cout << "b >= d: " << (b >= d) << std::endl;
	std::cout << "b <= c: " << (b <= c) << std::endl;
	std::cout << "b == d: " << (b == d) << std::endl;
	std::cout << "b != c: " << (b != c) << std::endl;

	std::cout << "\n Plusplus and minusminus" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;

	std::cout << "\n min and max" << std::endl;
	std::cout << "min of b and c: " << Fixed::min(b, c) << std::endl;
	std::cout << "max of b and c: " << Fixed::max(b, c) << std::endl;

	Fixed f1(5.5f), f2(3.3f);
	std::cout << "Min of f1 and f2: " << Fixed::min(f1, f2) << std::endl;
	std::cout<< "Max of f1 and f2: " << Fixed::max(f1, f2) << std::endl;

	return (0);


	return (0); 
}
