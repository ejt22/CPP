/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:16:26 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/04/05 15:16:56 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main(void)
{
	//EXO MAIN
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;

	// srand(time(NULL));
	//TRY TO ADD NUMBER BUT EXCEPTION FULL
	try
	{
		std::cout << "SPAN IS FULL TRY TO ADD 1 MORE" << std::endl;
		std::cout << "====> EXCEPTION => NO MORE PLACE IN SPAN" << std::endl;
		sp.addNumber(78);
	}
	catch(const Span::fullSpanException & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	//TRY TO shortest span with 0 or 1 number
	try
	{
		Span sp2(0);
		std::cout << "0 NUMBER IN SPAN TRY TO SHORTEST SPAN" << std::endl;
		std::cout << "====> EXCEPTION => NOT ENOUGH NUMBERS IN SPAN" << std::endl;
		sp2.shortestSpan();
	}
	catch(const Span::spanSizeTooSmallException & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Span sp2(1);
		sp2.addNumber(78);
		std::cout << "1 NUMBER IN SPAN TRY TO SHORTEST SPAN" << std::endl;
		std::cout << "====> EXCEPTION => NOT ENOUGH NUMBERS IN SPAN" << std::endl;
		sp2.shortestSpan();
	}
	catch(const Span::spanSizeTooSmallException & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	//TRY TO longest span with 0 or 1 number
	try
	{
		Span sp2(0);
		std::cout << "0 NUMBER IN SPAN TRY TO LONGEST SPAN" << std::endl;
		std::cout << "====> EXCEPTION => NOT ENOUGH NUMBERS IN SPAN" << std::endl;
		sp2.longestSpan();
	}
	catch(const Span::spanSizeTooSmallException & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Span sp2(1);
		sp2.addNumber(78);
		std::cout << "1 NUMBER IN SPAN TRY TO LONGEST SPAN" << std::endl;
		std::cout << "====> EXCEPTION => NOT ENOUGH NUMBERS IN SPAN" << std::endl;
		sp2.longestSpan();
	}
	catch(const Span::spanSizeTooSmallException & e)
	{
		std::cerr << e.what() << '\n';
	}

	Span sp1(20);
	std::vector<int> vectB = sp.getVector();
	std::cout << std::endl;

	sp1.fillSpan(vectB.begin(), vectB.end());
	std::cout << "original vector: " << sp << std::endl;
	std::cout << "filled into sp1 with new method : " << sp1 << std::endl;
	sp1.addNumber(132);
	std::cout << "added 132 to sp1: " << sp1 << std::endl;

	std::vector<int> v;
	for (int i = 0; i < 20000; i+=20)
		v.push_back(i);
	Span sp6(1000);
	sp6.fillSpan(v.begin(), v.end());
	std::cout << "TEST WITH 1000 int : SHORTEST = 20, LONGEST = 19980" << std::endl;
	// std::cout << sp6 << std::endl;
	std::cout << "shortest = " << sp6.shortestSpan() << std::endl;
	std::cout << "longest = " << sp6.longestSpan() << std::endl;
	std::cout << std::endl;

	std::vector<int> v1;
	for (int i = 0; i < 20000; i++)
		v1.push_back(i);
	Span sp7(20000);
	sp7.fillSpan(v1.begin(), v1.end());
	std::cout << "TEST WITH 20000 int : SHORTEST = 1, LONGEST = 19999" << std::endl;
	std::cout << "shortest = " << sp7.shortestSpan() << std::endl;
	std::cout << "longest = " << sp7.longestSpan() << std::endl;
	std::cout << std::endl;
	//std::cout << sp7 << std::endl;
	return (0);
}
