/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:53:02 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/04/06 15:04:53 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main()
{
	MutantStack<int>    mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator ite1 = mstack.end();
	++it1;
	--it1;
	while(it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}

	std::cout << "===================" << std::endl;
	std::list<int>    mstack1;
	mstack1.push_back(5);
	mstack1.push_back(17);
	std::cout << mstack1.back() << std::endl;
	mstack1.pop_back();
	std::cout << mstack1.size() << std::endl;
	mstack1.push_back(3);
	mstack1.push_back(5);
	mstack1.push_back(737);
	mstack1.push_back(0);
	std::list<int>::iterator it11 = mstack1.begin();
	std::list<int>::iterator ite11 = mstack1.end();
	++it11;
	--it11;
	while(it11 != ite11)
	{
		std::cout << *it11 << std::endl;
		++it11;
	}

	// std::cout << "WILL DISPLAY 4 5 6 (iterator)" << std::endl;
	// MutantStack<int> stackm;
	// stackm.push(4);
	// stackm.push(5);
	// stackm.push(6);

	// MutantStack<int>::const_iterator it = stackm.begin();
	// MutantStack<int>::const_iterator ite = stackm.end();
	// while(it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }

	// std::cout << "WILL DISPLAY 4 5 6 (const iterator)" << std::endl;
	// MutantStack<int>::const_iterator itc = stackm.begin();
	// MutantStack<int>::const_iterator itec = stackm.end();
	// while(itc != itec)
	// {
	// 	std::cout << *itc << std::endl;
	// 	++itc;
	// }

	// std::cout << std::endl;
	// std::cout << "WILL DISPLAY 6 5 4 (reverse iterator)" << std::endl;
	// MutantStack<int>::reverse_iterator rit = stackm.rbegin();
	// MutantStack<int>::reverse_iterator rite = stackm.rend();
	// while(rit != rite)
	// {
	// 	std::cout << *rit << std::endl;
	// 	++rit;
	// }

	// std::cout << std::endl;
	// std::cout << "WILL DISPLAY 6 5 4 (const reverse iterator)" << std::endl;
	// MutantStack<int>::const_reverse_iterator ritc = stackm.rbegin();
	// MutantStack<int>::const_reverse_iterator ritec = stackm.rend();
	// while(ritc != ritec)
	// {
	// 	std::cout << *ritc << std::endl;
	// 	++ritc;
	// }
	
	// std::cout << std::endl;
	// std::cout << "COMPARE WITH LIST<INT>" << std::endl;
	// std::cout << "DISPLAY 4 5 6 (ITERATOR)" << std::endl;
	// std::list<int> lst;
	// lst.push_back(4);
	// lst.push_back(5);
	// lst.push_back(6);
	// std::list<int>::iterator itl = lst.begin();
	// std::list<int>::iterator itle = lst.end();
	// while(itl != itle)
	// {
	// 	std::cout << *itl << std::endl;
	// 	++itl;
	// }
	return (0);
}