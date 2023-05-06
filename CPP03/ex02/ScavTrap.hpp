/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:50:07 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/07 16:13:59 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap {
	
public:

	 ScavTrap( void );
	 ScavTrap( std::string name );
	 ScavTrap( ScavTrap const & src );
	~ ScavTrap( void );

	void	attack( const std::string & target );
	void	guardGate( void );

	ScavTrap	& operator=( ScavTrap const & rhs );
};

std::ostream	& operator<<( std::ostream & o, ScavTrap const & rhs );

#endif