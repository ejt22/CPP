/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:16:08 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/14 12:04:14 by ejoo-tho         ###   ########.fr       */
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

	Fixed	& operator=( Fixed const &rhs );
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	
	private:

	int					_value;
	static int const	_nb_bits = 8;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs);

#endif