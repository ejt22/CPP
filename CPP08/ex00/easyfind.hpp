/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:07:09 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/28 20:30:22 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <stdexcept>
# include <algorithm>

class nothingFound : public std::exception {
	
	virtual const char*	what(void) const throw() {
		
		return ("No occurence has been found!");
	}
};

template < typename T >
typename T::iterator	easyfind(T & cont, int n) {

	typename T::iterator	it;

	it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		throw nothingFound();
	else
		return (it);
}

#endif