/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:21:06 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/22 16:14:25 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main (int argc, char *argv[]) {

	std::string	input;
	PhoneBook	phonebook;
	
	(void)argc;
	(void)argv;
	std::cout << "Enter one of the commands ADD, SEARCH, or EXIT: ";
	while (std::getline(std::cin, input)) {
		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
			phonebook.searchContact();
		else if (!input.compare("EXIT"))
			return (0);
		std::cout << std::endl;
		if (std::cin.eof())
			return (0);
		std::cout << "Enter one of the commands ADD, SEARCH, or EXIT: ";
	}
	return (0);
}