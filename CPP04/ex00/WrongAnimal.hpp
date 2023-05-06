/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:31:37 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/10 17:32:46 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

	protected:
	
		std::string	type;

	public:

		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal( void );

		void	makeSound( void ) const;
		std::string		getType( void ) const;

		WrongAnimal	& operator=( WrongAnimal const & rhs );
};

std::ostream	& operator<<( std::ostream & o, WrongAnimal const & rhs );

#endif