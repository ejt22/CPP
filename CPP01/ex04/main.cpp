/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:32:41 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/27 16:37:31 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int argc, char *argv[]) {

	if (argc != 4) {
		std::cout << "Invalid number of arguments" << std::endl;
		return (1); 
	}
	execute(argv[1], argv[2], argv[3]);
	return (0);
}