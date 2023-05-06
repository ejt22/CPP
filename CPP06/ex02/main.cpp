/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:25:20 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/29 12:24:52 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {

	int n = rand() % 3;
	Base	*ret;
	
	switch (n) {
		case 0:
			ret = new A;
			break ;
		case 1:
			ret = new B;
			break ;
		case 2:
			ret = new C;
			break ;
		default:
			std::cout << "problem in rand()\n";
			return (NULL);
			break ;
	}
	return (ret);
}

void identify ( Base *p ) {

	if (dynamic_cast<A *>(p))
		std::cout << "This is an A type pointer.\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "This is a B type pointer.\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "This is a C type pointer.\n";
	else
		std::cout << "Undefined type.\n";
	return ;
}

void identify ( Base & p ) {

	try {
		A	&a = dynamic_cast<A &>(p);
		std::cout << "This is an A type reference.\n";
		(void)a;
		return ;
	}
	catch(std::bad_cast &bc) {
		std::cerr << "Not A: " << bc.what() << std::endl;
	}
	try {
		B	&b = dynamic_cast<B &>(p);
		std::cout << "This is a B type reference.\n";
		(void)b;
		return ;
	}
	catch(std::bad_cast &bc) {
		std::cerr << "Not B: " << bc.what() << std::endl;
	}
	try {
		C	&c = dynamic_cast<C &>(p);
		std::cout << "This is a C type reference.\n";
		(void)c;
		return ;
	}
	catch(std::bad_cast &bc) {
		std::cerr << "Not C: " << bc.what() << std::endl;
	}
	return ;
}

int	main() {

	srand(time(NULL));
	std::cout << "Test 1\n";
	Base	*one;
	one = generate();
	identify(one);
	identify(*one);
	std::cout << std::endl;

	std::cout << "Test 2\n";
	Base	*two;
	two = generate();
	identify(two);
	identify(*two);
	std::cout << std::endl;

	std::cout << "Test 3\n";
	Base	*three;
	three = generate();
	identify(three);
	identify(*three);
	std::cout << std::endl;

	delete one;
	delete two;
	delete three;
	return (0);
}