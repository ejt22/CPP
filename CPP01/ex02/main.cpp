/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:17:16 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/02/22 11:40:06 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {

	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "String address is: " << &str << std::endl;
	std::cout << "StringPTR address is: " << stringPTR << std::endl;
	std::cout << "StringREF address is: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String value is: " << str << std::endl;
	std::cout << "stringPTR points to the value: " << *stringPTR << std::endl;
	std::cout << "stringREF points to the value: " << stringREF << std::endl;
	return(0);
}