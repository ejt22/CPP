/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:15:33 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/23 11:15:36 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// CONSTRUCTORS

Dog::Dog( void ) : Animal("Dog") {

	std::cout << "Default dog constructor called" << std::endl;
	return ;
}

Dog::Dog( Dog const & src ) {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

Dog::~Dog( void ) {
	
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

// OTHER PUBLIC MB FUNCTIONS

void	Dog::makeSound(void) const {

	std::cout << "Woof, ouaff, woof!!" << std::endl;
	return ;
}

// OPERATOR SURCHARGES

Dog	& Dog::operator=( Dog const & rhs ) {

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::ostream	& operator<<( std::ostream & o, Dog const & rhs ) {

	o << "Type is " << rhs.getType();
	return (o);
}