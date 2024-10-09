/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:36:35 by iniska            #+#    #+#             */
/*   Updated: 2024/10/09 20:41:11 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		void setCon(std::string firstName, std::string lastName, str::string nickName, std::string phoneNumber, std::string darkestSecret);

		std::string getFirstName() const;
		std::string getLastNAme() const;
		std::string getNickname() const;

		void displayCon() const;
} ;

#endif