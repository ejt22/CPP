/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:40:13 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/22 13:02:07 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// CONSTRUCTORS

Cat::Cat( void ) : Animal("Cat") {

	std::cout << "Default Cat constructor called" << std::endl;
	return ;
}

Cat::Cat( Cat const & src ) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

Cat::~Cat( void ) {
	
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

// OTHER PUBLIC MB FUNCTIONS

void	Cat::makeSound(void) const {

	std::cout << "Miaou, meow, miaouuuuu!!" << std::endl;
	return ;
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