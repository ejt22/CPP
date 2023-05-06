/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:17:59 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/12 17:07:59 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// CONSTRUCTORS

AAnimal::AAnimal( void ) : type("Unknown type") {

	std::cout << "Default aanimal constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal( std::string type ) : type(type) {

	std::cout << "Aanimal constructor with type called" << std::endl;
	return ;
}

AAnimal::AAnimal( AAnimal const & src ) {

	std::cout << "Aanimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

AAnimal::~AAnimal( void ) {

	std::cout << "Aanimal destructor called" << std::endl;
	return ;
}

// OTHER PUBLIC MB FUNCTIONS

std::string		AAnimal::getType( void ) const {

	return(this->type);
}

// OPERATOR SURCHARGES

AAnimal	& AAnimal::operator=( AAnimal const & rhs ) {

	if (this != &rhs)	
		this->type = rhs.type;
	return (*this);
}

std::ostream	& operator<<( std::ostream & o, AAnimal const & rhs ) {

	o << "Type of aanimal = " << rhs.getType();
	return (o);
}