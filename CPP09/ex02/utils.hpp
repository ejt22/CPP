/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:39:50 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/04/25 14:10:27 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <vector>
# include <deque>

bool	is_posint( char *arg );
bool	check_input( int argc, char *argv[] );
void	swap( int & a, int & b );
template < typename T >
bool	check_sorted( T & container ) {
	
	size_t	size = container.size();
	
	for (size_t i = 0; i < size - 2; i++) {
		if (container[i + 1] < container[i])
			return (false);
	}
	return (true);
}
template < typename T >
void	displayContainer( T const & container ) {

	for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
		std::cout << " " << *it;
	std::cout << std::endl;
}

# endif