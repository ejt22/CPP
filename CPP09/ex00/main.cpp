/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:46:46 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/04/06 17:44:11 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char * argv[]) {
	
	if (argc != 2) {		
		std::cout << "Wrong number of arguments ... please try again\n"; 
		return (0);
	}
	else {
		try {
			std::string	input(argv[1]);
			BitcoinExchange("data.csv", input);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}