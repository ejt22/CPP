/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:55:54 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/22 13:49:15 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// CONSTRUCTORS

Brain::Brain( void ) {

	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		std::stringstream	sstream;
		sstream << i;
		this->_ideas[i] = "no idea " + sstream.str();
	}
	return ;
}

Brain::Brain( Brain const & src ) {
	
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

Brain::~Brain( void ) {
	
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

// OPERATOR SURCHARGES

Brain	& Brain::operator=( Brain const & rhs ) {
	
	if (this!= &rhs) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

// OTHER PUBLIC MB FUNCTIONS

std::string	Brain::getIdea( int i ) const {
	
	if (i >= 0 && i < 100)
		return (this->_ideas[i]);
	else
		return ("You are out of the range\n");
}