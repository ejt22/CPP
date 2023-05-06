/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:50:18 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/23 18:34:48 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

private:
	
	std::string	_name;
	Weapon		&_weapon;

public:

	HumanA( std::string	name, Weapon &weapon );
	~HumanA( void );

	void	attack( void ) const;
};

#endif