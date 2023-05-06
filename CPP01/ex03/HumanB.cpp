/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:52:58 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/23 22:56:15 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// CONSTRUCTOR

HumanB::HumanB( std::string	name ) : _name(name) {

	this->_weapon = NULL;
	std::cout << "HumanB constructor called" << std::endl;
}

// DESTRUCTOR

HumanB::~HumanB( void ) {

	std::cout << "HumanB destructor called" << std::endl;
}

void	HumanB::attack( void ) const {

	if (!this->_weapon)
		std::cout << this->_name << " has no weapon to attack" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon ) {

	this->_weapon = &weapon;
}