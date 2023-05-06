/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:43:40 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/16 12:58:12 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// CONSTRUCTORS

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("Default Robotomy", 72, 45), _target("default") {

	std::cout << "Robotomy default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("Robotomy", 72, 45), _target(target) {

	std::cout << "Robotomy constructor with target called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) {

	std::cout << "Robotomy copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	
	std::cout << "Robotomy destructor called" << std::endl;
	return ;
}

// ASSIGNMENT OPERATOR SURCHARGE

RobotomyRequestForm	& RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {

	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

// ACCESSORS AND OTHER PUBLIC MB FUNCTIONS

std::string	RobotomyRequestForm::getTarget(void) const {

	return (this->_target);
}

void	RobotomyRequestForm::execute( Bureaucrat & executor ) const {

	int	random;

	if (!this->getIsSigned()) {
		throw AForm::FormNotSignedException();
		return ;
	}
	if (executor.getGrade() > this->getExecGrade()) {
		throw AForm::GradeTooLowException();
		return ;
	}
	std::cout << "Bzzzzzzzzzzzzzzzzzzzz..." << std::endl;
	random = std::rand() % 2;
	if (!random)
		std::cout << this->_target << " has been robotomized..." << std::endl;
	else
		std::cout << "Failed to robotomized " << this->_target << std::endl;
	return ;
}