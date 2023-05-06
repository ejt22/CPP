/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:47:10 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/07 11:12:49 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

private:
	
	std::string		_name;
	unsigned int	_hits;
	unsigned int	_energy;
	unsigned int	_damage;

public:

	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );

	std::string		getName( void ) const;
	unsigned int	getHits( void ) const;
	unsigned int	getEnergy( void ) const;
	unsigned int	getDamage( void ) const;

	ClapTrap	& operator=( ClapTrap const & rhs );
	
	void	attack( const std::string & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
};

std::ostream	& operator<<( std::ostream & o, ClapTrap const & rhs);

#endif