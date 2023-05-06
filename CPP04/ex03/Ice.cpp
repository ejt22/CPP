/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:38:20 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/23 12:27:09 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// CONSTRUCTORS

Ice::Ice( void ) {

	// std::cout << "Ice default constructor called" << std::endl;
	this->type = "ice";
	return ;
}

Ice::Ice( Ice const & src ) {

	// std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

Ice::~Ice( void ) {

	// std::cout << "Ice destructor called" << std::endl;
	return ;
}

// OPERATOR SURCHARGE

Ice	& Ice::operator=( Ice const & rhs ) {

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

// OTHER PUBLIC MB FUNCTIONS

Ice	* Ice::clone( void ) const {

	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}