/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:00:32 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/17 10:58:38 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//CONSTRUCTORS

ClapTrap::ClapTrap( void ) : _name("Default claptrap"), _hits(10), _energy(10), _damage(0) {

	std::cout << "Claptrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hits(10), _energy(10), _damage(0) {

	std::cout << "Claptrap constructor with name called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {

	std::cout << "Claptrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

//DESTRUCTORS

ClapTrap::~ClapTrap( void ) {

	std::cout << "Claptrap destructor called" << std::endl;
}

// ACCESSORS

std::string		ClapTrap::getName( void ) const {

	return (this->_name);
}

unsigned int	ClapTrap::getHits( void ) const {

	return (this->_hits);
}

unsigned int	ClapTrap::getEnergy( void ) const {

	return (this->_energy);
}

unsigned int	ClapTrap::getDamage( void ) const {

	return (this->_damage);
}

// ASSIGNEMENT OPERATOR SURCHARGE

ClapTrap	& ClapTrap::operator=( ClapTrap const & rhs ) {

	std::cout << "Claptrap assignement operator surcharge called" << std::endl;
	
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hits = rhs.getHits();
		this->_energy = rhs.getEnergy();
		this->_damage = rhs.getDamage();
	}
	return (*this);
}

void	ClapTrap::attack( const std::string & target ) {
	
	if (this->_hits == 0) {
		std::cout << this->_name << " can't attack because he is dead." << std::endl;
		return ;
	}
	if (this->_energy == 0) {
		std::cout << this->_name << " can't attack because he has no energy left." << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << target;
	std::cout << " causing " << this->_damage << " points of damage!" << std::endl;
	this->_energy--;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (this->_hits == 0) {
		std::cout << this->_name << " can't take damage because he is dead." << std::endl;
		return ;
	}
	if (amount >= this->_hits)
		this->_hits = 0;
	else
		this->_hits -= amount;
	std::cout << this->_name << " takes " << amount << " points of damage." << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (this->_hits == 0) {
		std::cout << this->_name << " can't be repaired because he is dead." << std::endl;
		return ;
	}
	if (this->_energy == 0) {
		std::cout << this->_name << " can't be repaired because he has no energy left." << std::endl;
		return ;
	}
	this->_hits += amount;
	this->_energy--;
	std::cout << this->_name << " repairs themselves with " << amount << " hit points." << std::endl;
}

// REDIRECTION OPERATOR SURCHARGE

std::ostream	& operator<<( std::ostream & o, ClapTrap const & rhs) {

	o << "Claptrap name= " << rhs.getName() << " | Hit points= " << rhs.getHits();
	o << " | Energy points= " << rhs.getEnergy() << " | Attack damage= " << rhs.getDamage();
	return (o);
}