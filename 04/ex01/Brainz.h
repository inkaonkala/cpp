/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brainz.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:53:42 by iniska            #+#    #+#             */
/*   Updated: 2024/12/30 07:25:34 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINZ_H
#define BRAINZ_H

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();

		void setIdea(int i, std::string& indea);
		std::string getIdea(int i) const;
	
};

#endif