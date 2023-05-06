/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:58:53 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/16 13:05:42 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// CONSTRUCTORS

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("Default Presidential", 25, 5), _target("default") {

	std::cout << "Presidential default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("Presidential", 25, 5), _target(target) {

	std::cout << "Presidential constructor with target called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) {

	std::cout << "Presidential copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	
	std::cout << "Presidential destructor called" << std::endl;
	return ;
}

// ASSIGNMENT OPERATOR SURCHARGE

PresidentialPardonForm	& PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {

	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

// ACCESSORS AND OTHER PUBLIC MB FUNCTIONS

std::string	PresidentialPardonForm::getTarget(void) const {

	return (this->_target);
}

void	PresidentialPardonForm::execute( Bureaucrat & executor ) const {

	if (!this->getIsSigned()) {
		throw AForm::FormNotSignedException();
		return ;
	}
	if (executor.getGrade() > this->getExecGrade()) {
		throw AForm::GradeTooLowException();
		return ;
	}
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}