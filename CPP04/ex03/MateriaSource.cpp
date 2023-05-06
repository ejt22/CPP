/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:38:59 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/23 12:27:30 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// CONSTRUCTORS

MateriaSource::MateriaSource( void ) {
	
	// std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_tabmat[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src._tabmat[i])
			this->_tabmat[i] = (src._tabmat[i])->clone();
	}
}

// DESTRUCTOR

MateriaSource::~MateriaSource( void ) {

	// std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_tabmat[i])
			delete this->_tabmat[i];
	}
}

// ASSIGNMENT OPERATOR SURCHARGE

MateriaSource	& MateriaSource::operator=( MateriaSource const & rhs ) {

	for(int i = 0; i < 4; i++)
	{
		if (this->_tabmat[i])
			delete this->_tabmat[i];
		if (rhs._tabmat[i])
			this->_tabmat[i] = (rhs._tabmat[i])->clone();
	}
	return (*this);
}

// OTHER PUBLIC MB FUNCTIONS

void	MateriaSource::learnMateria( AMateria *m ) {

	int i = 0;
	
	if (!m)
	{
		std::cout << "Not a valid Materia" << std::endl;
		return ;
	}
	while (this->_tabmat[i] && i < 4)
		i++;
	if (i == 4)
	{
		std::cout << "No space left to learn new Materia" << std::endl;
		return ;
	}
	std::cout << "Materia " << m->getType() << " learnt" << std::endl;
	this->_tabmat[i] = m;
	return ;
}

AMateria	*MateriaSource::createMateria( std::string const & type ) {

	int	i = 0;

	while (i < 4 && this->_tabmat[i] && this->_tabmat[i]->getType().compare(type))
		i++;
	if (i == 4 || !this->_tabmat[i]) {
		std::cout << "No Materia matching" << std::endl;
		return (NULL);
	}
	std::cout << "Materia " << type << " created" << std::endl;
	return (this->_tabmat[i]->clone());
}