/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:37:33 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/10 16:55:56 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

	public:

		Dog( void );
		Dog( Dog const & src );
		~Dog( void );

		void	makeSound( void ) const;

		Dog	& operator=( Dog const & rhs );
};

std::ostream	& operator<<( std::ostream & o, Dog const & rhs );

#endif