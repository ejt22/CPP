/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:08:53 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/09 15:34:06 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char *argv[] ) {
	
	Harl	harl = Harl();
	
	(void) argv;
	if (argc != 1)
		return (0);
	std::cout << "Testing debug" << std::endl;
	harl.complain("DEBUG");
	std::cout << "Testing info" << std::endl;
	harl.complain("INFO");
	std::cout << "Testing warning" << std::endl;
	harl.complain("WARNING");
	std::cout << "Testing error" << std::endl;
	harl.complain("ERROR");
	std::cout << "Testing nonexistant" << std::endl;
	harl.complain("nonexistant");
	return (0);
}