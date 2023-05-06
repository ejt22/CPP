/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:51:12 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/23 14:50:55 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// CONSTRUCTORS

Form::Form( void ) : _name("default form"), _isSigned(false), _signGrade(150), _execGrade(150) {

	std::cout << "Default form constructor called\n";
	return ;
}

Form::Form( std::string name, int const signGrade, int const execGrade ) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {

	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	else {
		this->_isSigned = false;
		std::cout << "Form constructor with information called\n";
	}
	return ;
}

Form::Form( Form const & src ) : _name(src._name), _isSigned(src._isSigned), _signGrade(src._signGrade), _execGrade(src._execGrade) {

	std::cout << "Form constructor by copy called\n";
	return ;
}

// DESTRUCTOR

Form::~Form( void ) {

	std::cout << "Form destructor called\n";
	return ;
}

// ACCESSORS AND OTHER PUBLIC MB FUNCTIONS

std::string const	Form::getName( void ) const {

	return (this->_name);
}

bool	Form::getIsSigned( void ) const {

	return (this->_isSigned);
}

int	Form::getSignGrade( void ) const {

	return (this->_signGrade);
}

int	Form::getExecGrade( void ) const {

	return (this->_execGrade);
}

void	Form::beSigned( Bureaucrat & bureaucrat ) {

	if (bureaucrat.getGrade() > this->_signGrade) 
		throw GradeTooLowException();
	else {
		this->_isSigned = true;
		std::cout << *this << " signed by " << bureaucrat << std::endl; 
	}
}

// OPERATOR SURCHARGES

Form	& Form::operator=( Form const & rhs ) {
	
	this->_isSigned = rhs._isSigned;
	return (*this);
}

std::ostream	& operator<<( std::ostream & o, Form const & rhs ) {
	
	o << "Form " << rhs.getName() << " (isSigned = " << rhs.getIsSigned()
		<< " | Signing grade = " << rhs.getSignGrade() << " | Executing grade = " << rhs.getExecGrade() << ")";
	return (o);
}