/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:33:12 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/10 17:04:13 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	protected:
	
		std::string	type;

	public:

		Animal( void );
		Animal( std::string type );
		Animal( Animal const & src );
		virtual ~Animal( void );

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;

		Animal	& operator=( Animal const & rhs );
};

std::ostream	& operator<<( std::ostream & o, Animal const & rhs );

#endif