/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:37:35 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/23 16:43:28 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template < typename T >
void swap( T & a, T & b ) {

	T tmp = a;

	a = b;
	b = tmp;
}

template < typename T >
T const	& min( T const & a, T const & b ) {

	return (a <= b ? a : b);	
}

template < typename T >
T const	& max( T const & a, T const & b ) {

	return (a >= b ? a : b);	
}

#endif