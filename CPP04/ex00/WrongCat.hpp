/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:34:33 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/10 17:35:03 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:

		WrongCat( void );
		WrongCat( WrongCat const & src );
		~WrongCat( void );

		void	makeSound( void ) const;

		WrongCat	& operator=( WrongCat const & rhs );
};

std::ostream	& operator<<( std::ostream & o, WrongCat const & rhs );

#endif