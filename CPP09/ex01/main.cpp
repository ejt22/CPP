/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:39:38 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/04/17 21:58:10 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main( int argc, char * argv[] ) {
	
	if (argc != 2) {		
		std::cout << "Wrong number of arguments ... please try again\n"; 
		return (0);
	}
	else {
		std::string str(argv[1]);
		
		RPN	RPN(str);
	}
	return (0);
}