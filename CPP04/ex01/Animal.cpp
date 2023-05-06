/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:00:28 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/23 11:16:18 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// CONSTRUCTORS

Animal::Animal( void ) : type("Unknown type") {

	std::cout << "Default animal constructor called" << std::endl;
	return ;
}

Animal::Animal( std::string type ) : type(type) {

	std::cout << "Animal constructor with type called" << std::endl;
	return ;
}

Animal::Animal( Animal const & src ) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

Animal::~Animal( void ) {

	std::cout << "Animal destructor called" << std::endl;
	return ;
}

// OTHER PUBLIC MB FUNCTIONS

std::string		Animal::getType( void ) const {

	return(this->type);
}

void	Animal::makeSound( void ) const {

	std::cout << "Hellooooooooo" << std::endl;
}

// OPERATOR SURCHARGES

Animal	& Animal::operator=( Animal const & rhs ) {

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::ostream	& operator<<( std::ostream & o, Animal const & rhs ) {

	o << "Type of animal = " << rhs.getType();
	return (o);
}