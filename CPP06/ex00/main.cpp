/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:48:00 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/29 12:07:46 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertScalar.hpp"

int	main(int argc, char *argv[]) {

	if (argc != 2) {
		std::cout << "Error: Invalid amount of arguments" << std::endl;
		return (1);
	}
	try {
		ConvertScalar	scalar(argv[1]);
		
		std::cout << scalar;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}