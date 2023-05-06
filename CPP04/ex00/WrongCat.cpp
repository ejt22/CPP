/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:45:04 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/10 17:45:23 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// CONSTRUCTORS

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {

	std::cout << "Default WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const & src ) {

	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

WrongCat::~WrongCat( void ) {
	
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

// OTHER PUBLIC MB FUNCTIONS

void	WrongCat::makeSound(void) const {

	std::cout << "Miaou, meow, miaouuuuu!!" << std::endl;
	return ;
}

// OPERATOR SURCHARGES

WrongCat	& WrongCat::operator=( WrongCat const & rhs ) {

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::ostream	& operator<<( std::ostream & o, WrongCat const & rhs ) {

	o << "Type is " << rhs.getType();
	return (o);
}