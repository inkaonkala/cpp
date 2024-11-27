/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:22:38 by iniska            #+#    #+#             */
/*   Updated: 2024/11/25 14:19:40 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int arc, char **arv)
{
	int	i = 1;
	int	j = 0;
	int p;

	p = arc - 2;

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
			if (p > 0)
			{
				std::cout << " ";
				p--;
			}
			i++;
		}
	}
	else
		std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return (0);
}
