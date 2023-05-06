/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:20:08 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/14 11:49:13 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:

	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed	& operator=( Fixed const &rhs );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	
	private:

	int					_value;
	static int const	_nb_bits = 8;
};

#endif