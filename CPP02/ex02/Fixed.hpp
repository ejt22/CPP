/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:16:08 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/06 15:36:45 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	public:

	Fixed( void );
	Fixed( int const src_int );
	Fixed( float const src_float );
	Fixed( Fixed const & src );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	
	Fixed	& operator=( Fixed const &rhs );
	// arithmetic operators
	Fixed	operator+( Fixed const & rhs ) const;
	Fixed	operator-( Fixed const & rhs ) const;
	Fixed	operator*( Fixed const & rhs ) const;
	Fixed	operator/( Fixed const & rhs ) const;
	// incrementing and decrementing operators
	Fixed	& operator++( void ); // ++i
	Fixed	& operator--( void ); // --i
	Fixed	operator++( int ); // i++
	Fixed	operator--( int ); // i--
	//comparison operators
	bool	operator>( Fixed const & rhs ) const;
	bool	operator<( Fixed const & rhs ) const;
	bool	operator>=( Fixed const & rhs ) const;
	bool	operator<=( Fixed const & rhs ) const;
	bool	operator==( Fixed const & rhs ) const;
	bool	operator!=( Fixed const & rhs ) const;
	//overloaded functions
	static Fixed		& min( Fixed & f1, Fixed & f2 );
	static Fixed const	& min( Fixed const & f1, Fixed const & f2 );
	static Fixed		& max( Fixed & f1, Fixed & f2 );
	static Fixed const	& max( Fixed const & f1, Fixed const & f2 );
	
	private:

	int					_value;
	static int const	_nb_bits = 8;
};

std::ostream	& operator<<( std::ostream & o, Fixed const & rhs );

#endif