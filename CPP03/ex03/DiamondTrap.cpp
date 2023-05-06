/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 22:00:16 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/21 11:16:38 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// CONSTRUCTEURS

DiamondTrap::DiamondTrap( void ) : ClapTrap("Default Diamond_clap_name"), ScavTrap(), FragTrap() {
	
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->_name = "Default Diamond";
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") {
	
	std::cout << "DiamondTrap constructor with name called" << std::endl;
	this->_name = name;
	std::cout << this->_damage << std::endl;
	std::cout << this->_hits << std::endl;
	std::cout << this->_energy << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src.getName() + "_clap_name"), ScavTrap(src.getName() + "_scav_name"), FragTrap(src.getName() + "_frag_name") {
	
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

DiamondTrap::~DiamondTrap( void ) {
	
	std::cout << "DiamondTrap destructor called" << std::endl;
}

// OTHER PUBLIC MB FUNCTIONS

void	DiamondTrap::whoAmI( void ) {

	std::cout << "DiamondTrap name is: " << this->_name
	<< " and ClapTrap name is: " << this->getName() << std::endl;
}

// OPERATOR SURCHARGES

DiamondTrap	& DiamondTrap::operator=( DiamondTrap const & rhs ) {
	
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hits = rhs._hits;
		this->_energy = rhs._energy;
		this->_damage = rhs._damage;
	}
	return (*this);
}

std::ostream	& operator<<( std::ostream & o, DiamondTrap const & rhs ) {

	o << "Name = " << rhs.getName()
	<< " | Hit Point = " << rhs.getHits()
	<< " | Energy Point = " << rhs.getEnergy()
	<< " | Attack Damage = " << rhs.getDamage();
	return (o);
}
