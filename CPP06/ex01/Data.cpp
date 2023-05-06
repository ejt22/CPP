/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:47:01 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/29 12:18:07 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// CONSTRUCTORS

Data::Data() {

	std::cout << "Data default constructor called\n";
}

Data::Data( std::string name ) : _name(name) {

	std::cout << "Data constructor with name called\n";
}

Data::Data( Data const & src ) {

	std::cout << "Data copy constructor called\n";
	*this = src;
}

// DESTRUCTOR

Data::~Data() {

	std::cout << "Data destructor called\n";
}

// ASSIGNMENT OPERATOR SURCHARGE

Data	& Data::operator=( Data const & rhs ) {

	if (this != &rhs)
		*this = rhs;
	return(*this);
}

// OTHER MB PUBLIC FUNCTIONS

std::string	Data::getName( void ) {

	return(this->_name);
}