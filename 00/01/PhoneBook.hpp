/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:44:20 by iniska            #+#    #+#             */
/*   Updated: 2024/10/10 21:40:23 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"


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