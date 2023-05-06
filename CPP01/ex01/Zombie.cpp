/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:55:43 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/09 12:32:01 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// CONSTRUCTOR

Zombie::Zombie( void )	{

	std::cout << "Constructor called" << std::endl;
}

// DESTRUCTOR

Zombie::~Zombie( void ) {

	std::cout << "Destructor called" << std::endl;
}

// PUBLIC FUNCTIONS

void	Zombie::announce( void ) const {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ) {

	this->_name = name;
}