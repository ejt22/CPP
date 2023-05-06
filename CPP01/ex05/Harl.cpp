/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:39:38 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/28 12:32:29 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// CONSTRUCTOR

Harl::Harl( void ) {

	std::cout << "Harl constructor called" << std::endl;
}

// DESTRUCTOR

Harl::~Harl() {

	std::cout << "Harl destructor called" << std::endl;
}

// PRIVATE MB FUNCTIONS

void	Harl::debug( void ) {

	std::cout << "This is debug level." << std::endl;
}

void	Harl::info( void ) {

	std::cout << "This is info level." << std::endl;
}

void	Harl::warning( void ) {

	std::cout << "This is warning level." << std::endl;
}

void	Harl::error( void ) {

	std::cout << "This is error level." << std::endl;
}

// PUBLIC MB FUNCTIONS

void	Harl::complain( std::string level ) {

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*fct[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++) {
		if (!levels[i].compare(level))
			(this->*(fct[i]))();
	}
}