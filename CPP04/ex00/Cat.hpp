/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:39:10 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/10 16:56:06 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

	public:

		Cat( void );
		Cat( Cat const & src );
		~Cat( void );

		void	makeSound( void ) const;

		Cat	& operator=( Cat const & rhs );
};

std::ostream	& operator<<( std::ostream & o, Cat const & rhs );

#endif