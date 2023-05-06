/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:26:17 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/13 12:25:03 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

	public:

		Cure( void );
		Cure( Cure const & src );
		~Cure( void );

		Cure & operator=( Cure const & rhs );
		
		Cure	* clone( void ) const;
		void	use( ICharacter& target );
};

#endif