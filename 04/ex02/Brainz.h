/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brainz.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:53:42 by iniska            #+#    #+#             */
/*   Updated: 2025/01/02 09:48:47 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINZ_H
#define BRAINZ_H

#include <iostream>
#include <string>
//for randomizer
#include <cstdlib>
#include <ctime>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		// first call copy to copy the brain, copy all the data from "other" to the new one. "assign the brain"
		Brain(const Brain& other);
		// then call operator to give the brain the values of another, "assign the idea"
		Brain& operator=(const Brain& other);
		~Brain();

		void setIdea(int i, const std::string& idea);
		std::string getIdea(int i) const;
		std::string ideaPool(const std::string& type);
	
};

#endif