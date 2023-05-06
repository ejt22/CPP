/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:33:12 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/12 17:07:49 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal {

	protected:
	
		std::string	type;

	public:

		AAnimal( void );
		AAnimal( std::string type );
		AAnimal( AAnimal const & src );
		virtual ~AAnimal( void );

		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;

		AAnimal	& operator=( AAnimal const & rhs );
};

std::ostream	& operator<<( std::ostream & o, AAnimal const & rhs );

#endif