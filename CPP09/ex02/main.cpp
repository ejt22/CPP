/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:31:16 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/04/25 14:40:26 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int argc, char * argv[] ) {

	if (argc < 2) {
		std::cout << "Put at least one argument please!\n";
		return (0);
	}
	PmergeMe	PmergeMe(argc, argv);
	return (0);
} 