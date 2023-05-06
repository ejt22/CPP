/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:16:24 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/14 12:40:41 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) ); 
	
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "Max (a,b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "Min (a,b) = " << Fixed::min( a, b ) << std::endl;
	std::cout << "b / 2 = " << b / Fixed(2) << std::endl;
	std::cout << "b * 2 = " << b * Fixed(2) << std::endl;
	std::cout << "b - 2 = " << b - Fixed(2) << std::endl;
	std::cout << "b + 2 = " << b + Fixed(2) << std::endl;
	std::cout << "b == a : " << (b == a) << std::endl;
	std::cout << "b != a : " << (b != a) << std::endl;
	std::cout << "b != b : " << (b != b) << std::endl;
	std::cout << "b == b : " << (b == b) << std::endl;
	std::cout << "b <= b : " << (b <= b) << std::endl;
	std::cout << "b <= a : " << (b <= a) << std::endl;
	std::cout << "b < b : " << (b < b) << std::endl;
	std::cout << "b < a : " << (b < a) << std::endl;
	std::cout << "b >= b : " << (b >= b) << std::endl;
	std::cout << "b > b : " << (b > b) << std::endl;
	std::cout << "b > a : " << (b > a) << std::endl;
	std::cout << "b >= a : " << (b >= a) << std::endl;
	/*

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	*/
	return (0);
}