/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:23:31 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/23 12:26:50 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// CONSTRUCTORS

Cure::Cure( void ) {

	// std::cout << "Cure default constructor called" << std::endl;
	this->type = "cure";
	return ;
}

Cure::Cure( Cure const & src ) {

	// std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

Cure::~Cure( void ) {

	// std::cout << "Cure destructor called" << std::endl;
	return ;
}

// OPERATOR SURCHARGE

Cure	& Cure::operator=( Cure const & rhs ) {

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

// OTHER PUBLIC MB FUNCTIONS

Cure	* Cure::clone( void ) const {

	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}