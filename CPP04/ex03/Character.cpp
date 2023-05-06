/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:32:21 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/23 12:26:31 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// CONSTRUCTORS

Character::Character( void ) {
	
	// std::cout << "Character default constructor called" << std::endl;
	this->_name = "Default character";
	for (int i = 0; i < 4; i++)
		_tab[i] = NULL;
	return ;
}
Character::Character( std::string const name ) : _name(name) {

	// std::cout << "Character constructor with name called" << std::endl;
	for (int i = 0; i < 4; i++)
		_tab[i] = NULL;
	return ;
}
Character::Character( Character const & src ) {

	// std::cout << "Character copy constructor called" << std::endl;
	this->_name = src.getName();
	for (int i = 0; i < 4; i++) {
		this->_tab[i] = NULL;
		if (src._tab[i])
			this->_tab[i] = src._tab[i]->clone();
	}
	return ;
}

// DESTRUCTOR

Character::~Character( void ) {

	for (int i = 0; i < 4; i++) {
		if (this->_tab[i])
			delete this->_tab[i];
		this->_tab[i] = NULL;
	}
	// std::cout << "Character destructor called" << std::endl;
	return ;
}

// ASSIGNMENT OPERATOR SURCHARGE

Character	& Character::operator=( Character const & rhs ) {

	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++) {
		if (this->_tab[i])
			delete this->_tab[i];
		if (rhs._tab[i])
			this->_tab[i] = rhs._tab[i]->clone();
		else
			this->_tab[i] = NULL;
	}
	return (*this);
}

// OTHER PUBLIC MB FUNCTIONS

std::string const &	Character::getName() const {

	return (this->_name);
}

void	Character::equip(AMateria* m) {

	int	i = 0;

	if (!m) {
		std::cout << "No materia to equip" << std::endl;
		return ;
	}
	while (this->_tab[i] && i < 4)
		i++;
	if (i == 4) {
		std::cout << "No space for this materia" << std::endl;
		return ;
	}
	this->_tab[i] = m;
	std::cout << "Materia " << m->getType() << " equipped on " << this->_name << std::endl;
	return ;
}

void	Character::unequip( int idx ) {

	if (idx < 0 || idx > 3) {
		std::cout << "No such index" << std::endl;
		return ;
	}
	if (!this->_tab[idx]) {
		std::cout << "No materia to unequip" << std::endl;
		return ;
	}
	this->_tab[idx] = NULL;
	std::cout << "Index " << idx << " unequipped on " << this->_name << std::endl;
}

void	Character::use( int idx, ICharacter & target ) {

	if (idx < 0 || idx > 3) {
		std::cout << "No such index" << std::endl;
		return ;
	}
	if (this->_tab[idx])
		this->_tab[idx]->use(target);
	else
		std::cout << "No materia at this index" << std::endl;
}

AMateria*	Character::getMateriaIdx(int idx) {
	
	if (idx < 0 || idx > 3) {
		std::cout << "No such index" << std::endl;
		return (NULL);
	}
	return (this->_tab[idx]);
}