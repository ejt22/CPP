/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:23:58 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/09 12:18:59 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// CONSTRUCTORS

Zombie::Zombie( std::string name ) : _name(name) {

	std::cout << "Constructor called" << std::endl;
	return ;
}

// DESTRUCTOR

Zombie::~Zombie( void ) {

	std::cout << "Zombie " << this->_name << " is dying..." << std::endl;
	return ;
}

// OTHER PUBLIC FUNCTIONS

void	Zombie::announce( void ) const {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}