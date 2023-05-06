/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:55:54 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/10 23:34:40 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// CONSTRUCTORS

Brain::Brain( void ) {

	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		std::stringstream	sstream;
		sstream << i;
		this->_ideas[i] = "no idea" + sstream.str();
	}
	return ;
}

Brain::Brain( Brain const & src ) {
	
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