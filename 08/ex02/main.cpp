/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:28:15 by iniska            #+#    #+#             */
/*   Updated: 2025/02/04 14:28:47 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main() 
{


  		MutantStack<int> sp;

		sp.push(1);
		sp.push(2);
		sp.push(3);
		sp.push(4);
	
		std::cout << "\nTop of the stack: " << sp.top() << std::endl;
		std::cout << "Size before pop: " << sp.size() << std::endl;

		sp.pop();
		std::cout << "We popped the top of!" << std::endl;

		std::cout << "Top of the stack: " << sp.top() << std::endl;
		std::cout << "Size after pop: " << sp.size() << std::endl;

		sp.push(654);
		sp.push(0);

		std::cout << "\nLet's iterate!" << std::endl;

		MutantStack<int>::iterator its = sp.begin();
		MutantStack<int>::iterator ite = sp.end();

		for (; its != ite; ++its)
		{
			std::cout << *its << std::endl;
		}

		std::cout << "\nLet's test the copyconst" << std::endl;

		std::stack<int> copy(sp);

		std::cout << "On the top of the copy: " << copy.top() << std::endl;

		std::cout << "\nFinaly, let's test with const" << std::endl;

		const MutantStack<int> constantly(sp);
		for (MutantStack<int>::const_iterator cosi = constantly.begin(); cosi != constantly.end(); ++cosi)
		{
			std::cout << *cosi << std::endl;
		}


	return 0; 
}

// int main()
// {
// 	MutantStack<int> mstack;

// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }