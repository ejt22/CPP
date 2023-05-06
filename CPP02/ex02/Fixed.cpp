/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:15:49 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/14 12:29:16 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/

// CONSTRUCTORS

Fixed::Fixed( void ) {

	// std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed( int const src_int ) {

	// std::cout << "Int constructor called" << std::endl;
	this->_value = src_int << this->_nb_bits;
}

Fixed::Fixed( float const src_float ) {

	// std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf(src_float * (1 << this->_nb_bits)));
}

Fixed::Fixed( Fixed const &src ) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ; 
}

// DESTRUCTOR

Fixed::~Fixed( void ) {

	// std::cout << "Destructor called" << std::endl;
	return ;
}

// OTHER PUBLIC MB FUNCTIONS

int		Fixed::getRawBits( void ) const  {

	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw ) {

	// std::cout << "setRawBits member function called" << std::endl;
	this-> _value = raw;
}

float	Fixed::toFloat( void ) const {

	return ((float)this->_value / (float)(1 << this->_nb_bits));
}

int		Fixed::toInt( void ) const {

	return (this->_value >> this->_nb_bits);
}

// ASSIGNMENT OPERATOR SURCHARGE

Fixed &	Fixed::operator=( Fixed const &rhs ) {

	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

// ARITHMETIC OPERATOR SURCHARGES

Fixed	Fixed::operator+( Fixed const & rhs ) const {

	return (Fixed( this->toFloat() + rhs.toFloat() ));
}

Fixed	Fixed::operator-( Fixed const & rhs ) const {

	return (Fixed( this->toFloat() - rhs.toFloat() ));
}

Fixed	Fixed::operator*( Fixed const & rhs ) const {

	return (Fixed( this->toFloat() * rhs.toFloat() ));
}

Fixed	Fixed::operator/( Fixed const & rhs ) const {

	return (Fixed( this->toFloat() / rhs.toFloat() ));
}

//INCREMENTING DECREMENTING OPERATORS
//Pre-incrementation

Fixed	& Fixed::operator++( void ) {

	this->_value += 1;
	return (*this);
}

Fixed	& Fixed::operator--( void ) {

	this->_value -= 1;
	return (*this);
}

//Post-incrementation

Fixed	Fixed::operator++( int ) {
	
	Fixed tmp = *this;
	
	this->_value += 1;
	return (tmp);
}

Fixed	Fixed::operator--( int ) {
	
	Fixed tmp = *this;
	
	this->_value -= 1;
	return (tmp);
}

//COMPARISON OPERATORS

bool	Fixed::operator>( Fixed const & rhs ) const {

	if (this->_value > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<( Fixed const & rhs ) const {

	if (this->_value < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=( Fixed const & rhs ) const {

	if (this->_value >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=( Fixed const & rhs ) const{

	if (this->_value <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==( Fixed const & rhs ) const{

	if (this->_value == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=( Fixed const & rhs ) const {

	if (this->_value != rhs.getRawBits())
		return (true);
	return (false);
}

// OTHER OVERLOADED FUNCTIONS

 Fixed		& Fixed::min( Fixed & f1, Fixed & f2) {
	
	if (f1 < f2)
		return (f1);
	return (f2);
}
Fixed const	& Fixed::min( Fixed const & f1, Fixed const & f2){

	if (f1 < f2)
		return (f1);
	return (f2);	
}
Fixed		& Fixed::max( Fixed & f1, Fixed & f2) {
	
	if (f1 < f2)
		return (f2);
	return (f1);	
}
Fixed const	& Fixed::max( Fixed const & f1, Fixed const & f2){
	
	if (f1 < f2)
		return (f2);
	return (f1);	
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs) {

	o << rhs.toFloat();
	return (o);
}