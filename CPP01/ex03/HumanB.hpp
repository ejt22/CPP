/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:50:18 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/23 22:18:54 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

private:
	
	std::string	_name;
	Weapon		*_weapon;

public:

	HumanB( std::string	name );
	~HumanB( void );

	void	attack( void ) const;
	void	setWeapon( Weapon &weapon );
};

#endif