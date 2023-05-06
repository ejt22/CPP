/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:05:05 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/14 12:53:54 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// CONSTRUCTORS

Point::Point( void ) : _x(0), _y(0) {
	
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point( float const x, float const y ) : _x(x), _y(y) {

	// std::cout << " Constructor with floats called" << std::endl;
}

Point::Point( Point const & src ) {

	// std::cout << " Copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

Point::~Point( void ) {

	// std::cout << "Destructor called" << std::endl;
}

// ACCESSORS

Fixed	Point::getX( void ) const {

	return (this->_x);
}

Fixed	Point::getY( void ) const {

	return (this->_y);
}

// ASSIGNMENT OPERATOR SURCHARGE

Point	& Point::operator=( Point const & rhs ) {

	if (this != &rhs) {
		this->_x = rhs.getX();
		this->_y = rhs.getY();
	}
	return (*this);
}

// OPERATOR SURCHARGES

bool	Point::operator!=( Point const & rhs ) const {

	if (this->_x != rhs.getX() || this->_y != rhs.getY())
		return (true);
	return (false);
}

std::ostream	& operator<<( std::ostream & o, Point const & rhs ) {

	o << "x = " << rhs.getX().toFloat() << "; y = " << rhs.getY().toFloat();
	return (o);
}