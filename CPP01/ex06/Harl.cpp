/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:17:42 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/09 15:42:58 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// CONSTRUCTOR

Harl::Harl( void ) {

	//std::cout << "Harl constructor called" << std::endl;
}

// DESTRUCTOR

Harl::~Harl() {

	//std::cout << "Harl destructor called" << std::endl;
}

// PRIVATE MB FUNCTIONS

void	Harl::debug( void ) {

	std::cout << "[DEBUG]" << std::endl;
	std::cout << "This is debug level." << std::endl;
	std::cout << std::endl;
}

void	Harl::info( void ) {

	std::cout << "[INFO]" << std::endl;
	std::cout << "This is info level." << std::endl;
	std::cout << std::endl;
}

void	Harl::warning( void ) {

	std::cout << "[WARNING]" << std::endl;
	std::cout << "This is warning level." << std::endl;
	std::cout << std::endl;
}

void	Harl::error( void ) {

	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is error level." << std::endl;
	std::cout << std::endl;
}

// PUBLIC MB FUNCTIONS

void	Harl::complain( std::string level ) {

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*fct[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int			index = -1;

	for (int i = 0; i < 4; i++) {
		if (!levels[i].compare(level))
			index = i;
	}
	switch (index) {
		case 0: case 1: case 2: case 3:
			for (int i = index; i < 4; i++)
				(this->*(fct[i]))();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}

}