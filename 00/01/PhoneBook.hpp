/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:44:20 by iniska            #+#    #+#             */
/*   Updated: 2024/11/27 11:50:32 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iomanip>
#include <cstdlib>


class PhoneBook
{
	private:
		Contact contacts[8];
		int currentConIndex;
		int totalCon;

	public:
		PhoneBook();
		void addCon();
		void searchCon() const;
};

#endif