/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:15:49 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/14 12:10:59 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/

// CONSTRUCTORS

Fixed::Fixed( void ) : _value(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const src_int ) {

	std::cout << "Int constructor called" << std::endl;
	this->_value = src_int << this->_nb_bits;
	return ;
}

Fixed::Fixed( float const src_float ) {

	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf(src_float * (1 << this->_nb_bits)));
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

	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw ) {

	//std::cout << "setRawBits member function called" << std::endl;
	this-> _value = raw;
}

float	Fixed::toFloat( void ) const {

	return ((float)this->_value / (float)(1 << this->_nb_bits));
}

int		Fixed::toInt( void ) const {

	return (this->_value >> this->_nb_bits);
}

// OPERATOR SURCHARGES

Fixed &	Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs) {

	o << rhs.toFloat();
	return (o);
}