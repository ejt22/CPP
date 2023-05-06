/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:07:53 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/09 14:53:03 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// CONSTRUCTOR

Weapon::Weapon( std::string type ) : _type(type) {
	
	std::cout << "Weapon constructor called" << std::endl;
}

// DESTRUCTOR

Weapon::~Weapon( void ) {
	
	std::cout << "Weapon destructor called" << std::endl;
}

// OTHER PUBLIC MB FUNCTIONS

std::string const	& Weapon::getType( void ) const {

	return (this->_type);
}

void	Weapon::setType( std::string type ) {

	this->_type = type;
	return ;
}