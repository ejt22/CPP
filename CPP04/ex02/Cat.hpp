/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:39:10 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/12 17:06:02 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

	private:

		Brain	*_brain;
	
	public:

		Cat( void );
		Cat( Cat const & src );
		~Cat( void );

		void	makeSound( void ) const;
		Brain	*getBrain( void ) const;

		Cat	& operator=( Cat const & rhs );
};

std::ostream	& operator<<( std::ostream & o, Cat const & rhs );

#endif