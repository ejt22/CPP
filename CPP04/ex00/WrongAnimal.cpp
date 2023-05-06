/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:32:57 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/10 17:33:18 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// CONSTRUCTORS

WrongAnimal::WrongAnimal( void ) : type("Unknown type") {

	std::cout << "Default WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( std::string type ) : type(type) {

	std::cout << "WrongAnimal constructor with type called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {

	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

WrongAnimal::~WrongAnimal( void ) {

	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

// OTHER PUBLIC MB FUNCTIONS

std::string		WrongAnimal::getType( void ) const {

	return(this->type);
}

void	WrongAnimal::makeSound( void ) const {

	std::cout << "Hellooooooooo" << std::endl;
}

// OPERATOR SURCHARGES

WrongAnimal	& WrongAnimal::operator=( WrongAnimal const & rhs ) {

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::ostream	& operator<<( std::ostream & o, WrongAnimal const & rhs ) {

	o << "Type of WrongAnimal = " << rhs.getType();
	return (o);
}