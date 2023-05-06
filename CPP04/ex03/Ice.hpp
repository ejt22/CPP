/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:26:17 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/13 12:19:43 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

	public:

		Ice( void );
		Ice( Ice const & src );
		~Ice( void );

		Ice & operator=( Ice const & rhs );
		
		Ice		* clone( void ) const;
		void	use(ICharacter& target);
};

#endif