/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:14:52 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/17 11:00:58 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// CONSTRUCTORS

FragTrap::FragTrap( void ) : ClapTrap() {
	
	std::cout << "Default fragtrap constructor called" << std::endl;
	this->_name = "Default fragtrap";
	this->_hits = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap:: FragTrap( std::string name ) : ClapTrap(name) {

	std::cout << "FragTrap constructor with name called" << std::endl;
	this->_hits = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap( FragTrap const & src ) {

	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

FragTrap::~FragTrap() {
	
	std::cout << "FragTrap destructor called" << std::endl;
}

// OTHER PUBLIC MB FUNCTION

void FragTrap::highFivesGuys(void) {

	if (this->_hits == 0) {
		std::cout << this->_name << " can't highfive because he is dead." << std::endl;
		return ;
	}
	std::cout << "Please highfive me!" << std::endl;
}

// OPERATOR SURCHARGES

FragTrap	& FragTrap::operator=( FragTrap const & rhs ) {
	
	std::cout << "FragTrap assignement operator surcharge called" << std::endl;
	
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hits = rhs.getHits();
		this->_energy = rhs.getEnergy();
		this->_damage = rhs.getDamage();
	}
	return (*this);
}

std::ostream	& operator<<( std::ostream & o, FragTrap const & rhs ) {
	
	o << "Fragtrap name= " << rhs.getName() << " | Hit points= " << rhs.getHits();
	o << " | Energy points= " << rhs.getEnergy() << " | Attack damage= " << rhs.getDamage();
	return (o);
}