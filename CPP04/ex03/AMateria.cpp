/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:58:37 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/23 12:26:08 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// CONSTRUCTORS

AMateria::AMateria( void ) {

	// std::cout << "AMateria default constructor called" << std::endl;
	this->type = "Unknown materia";
	return ;
}

AMateria::AMateria( std::string const & type ) : type(type) {

	// std::cout << "AMateria constructor with type called" << std::endl;
	return ;
}

AMateria::AMateria( AMateria const & src ) {

	// std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
	return ;
}

//DESTRUCTOR

AMateria::~AMateria( void ) {

	// std::cout << "AMateria destructor called" << std::endl;
	return ;
}

// ASSIGNMENT OPERATOR SURCHARGE

AMateria	& AMateria::operator=( AMateria const & rhs ) {

	if (this != &rhs)	
		this->type = rhs.type;
	return (*this);
}

// OTHER PUBLIC MB FUNCTIONS

std::string	const & AMateria::getType( void ) const {

	return (this->type);
}

void AMateria::use( ICharacter& target ) {

	std::cout << "Default materia used on " << target.getName() << std::endl;
	return ;
}