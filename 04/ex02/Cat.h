/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:39:45 by iniska            #+#    #+#             */
/*   Updated: 2025/01/02 09:49:36 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brainz.h"

class Cat : public Animal
{
	private:
		Brain* brain;
		
	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();

		void makeSound() const override;

		void setIdeaforBrain(int i, const std::string& idea);
		std::string getIdeaForBrain(int i) const;
};

#endif