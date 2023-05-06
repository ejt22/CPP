/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:49:00 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/27 10:53:41 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
# define ITER_HPP

# include <iostream>

template < typename T >
void	iter( T * tab, size_t n, void	f(T const & elem)) {
	for (size_t i = 0; i < n; i++) {
		f(tab[i]);
	}
	return ;
}

template <typename T>
void	display(T const & c)
{
	std::cout << c << " ";
}

#endif