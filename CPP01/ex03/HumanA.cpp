/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:52:58 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/23 22:13:18 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// CONSTRUCTOR

HumanA::HumanA( std::string	name, Weapon &weapon ) : _name(name), _weapon(weapon) {

	std::cout << "HumanA constructor called" << std::endl;
}

// DESTRUCTOR

HumanA::~HumanA( void ) {

	std::cout << "HumanA destructor called" << std::endl;
}

void	HumanA::attack( void ) const {

	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
