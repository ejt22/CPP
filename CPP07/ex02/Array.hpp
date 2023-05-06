/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:40:41 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/27 11:45:49 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template < typename T >
class Array {

	private:
		
		T				*_array;
		unsigned int	_size;	

	public:
		Array<T>();
		Array<T>( unsigned int n );
		Array<T>( Array<T> const & src );
		~Array<T>();

		Array<T>	& operator=( Array<T> const & rhs );
		T			& operator[]( unsigned int i );

		unsigned int	size() const;

		class invalidIndex : public std::exception {

			public: 

				virtual const char * what() const throw() {
					return ("Invalid index!");
				}
		};
};

template < typename T >
std::ostream	& operator<<( std::ostream & o, Array<T> & rhs );

#endif