/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:40:13 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/23 11:17:18 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// CONSTRUCTORS

Cat::Cat( void ) {

	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat( Cat const & src ) {

	std::cout << "Cat copy constructor called" << std::endl;
	this->type = src.getType();
	this->_brain = new Brain(*src._brain);
	return ;
}

// DESTRUCTOR

Cat::~Cat( void ) {
	
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
	return ;
}

// OTHER PUBLIC MB FUNCTIONS

void	Cat::makeSound(void) const {

	std::cout << "Miaou, meow, miaouuuuu!!" << std::endl;
	return ;
}

Brain	*Cat::getBrain( void ) const {

	return (this->_brain);
}

// OPERATOR SURCHARGES

Cat	& Cat::operator=( Cat const & rhs ) {

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::ostream	& operator<<( std::ostream & o, Cat const & rhs ) {

	o << "Type is " << rhs.getType();
	return (o);
}