/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:22:38 by iniska            #+#    #+#             */
/*   Updated: 2024/10/08 14:22:45 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int arc, char **arv)
{
	int	i = 1;
	int	j = 0;

	if(arc > 1)
	{
		while (arc > i)
		{
			j = 0;
			while(arv[i][j] != '\0')
			{
				std::cout << (char)toupper(arv[i][j]);
				j++;
			}
			std::cout << " "; // i dont know if we want this?
			i++;
		}
	}
	else
		std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return (0);
}
