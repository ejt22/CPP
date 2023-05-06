/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:45:57 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/17 10:35:40 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// CONSTRUCTORS

ScavTrap:: ScavTrap( void ) : ClapTrap() {

	std::cout << "Default scavtrap constructor called" << std::endl;
	this->_name = "Default scavtrap";
	this->_hits = 100;
	this->_energy = 50;
	this->_damage = 20;
	return ;
}

ScavTrap:: ScavTrap( std::string name ) : ClapTrap(name) {

	std::cout << "Scavtrap constructor with name called" << std::endl;
	this->_hits = 100;
	this->_energy = 50;
	this->_damage = 20;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {

	std::cout << "Scavtrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

ScavTrap::~ ScavTrap( void ) {

	std::cout << "Scavtrap destructor called" << std::endl;
}

// PUBLIC MB FUNCTIONS

void	ScavTrap::attack( const std::string & target ) {

	if (this->_hits == 0) {
		std::cout << this->_name << " can't attack because he is dead." << std::endl;
		return ;
	}
	if (this->_energy == 0) {
		std::cout << this->_name << " can't attack because he has no energy left." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << " causing " << this->_damage << " points of damage!" << std::endl;
	this->_energy--;
}

void	ScavTrap::guardGate( void ) {

	if (this->_hits == 0) {
		std::cout << this->_name << " can't move into Gate keeper mode because he is dead." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " moved into Gate keeper mode." << std::endl;
}

// OPERATOR SURCHARGES

ScavTrap	& ScavTrap::operator=( ScavTrap const & rhs ) {

	std::cout << "ScavTrap copy assignement operator surcharge called" << std::endl;
	
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hits = rhs.getHits();
		this->_energy = rhs.getEnergy();
		this->_damage = rhs.getDamage();
	}
	return (*this);
}

std::ostream	& operator<<( std::ostream & o, ScavTrap const & rhs ) {

	o << "Scavtrap name= " << rhs.getName() << " | Hit points= " << rhs.getHits();
	o << " | Energy points= " << rhs.getEnergy() << " | Attack damage= " << rhs.getDamage();
	return (o);
}