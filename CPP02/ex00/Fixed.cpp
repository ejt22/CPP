/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:31:25 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/14 12:00:47 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTORS

Fixed::Fixed( void ) : _value(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const &src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ; 
}

// DESTRUCTOR

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

// OTHER PUBLIC MB FUNCTIONS

int		Fixed::getRawBits( void ) const  {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this-> _value = raw;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}