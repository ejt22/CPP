/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:29:47 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/14 22:53:40 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// CONSTRUCTORS

Bureaucrat::Bureaucrat( void ) : _name("Default bureaucrat"), _grade(150) {

	std::cout << "Bureaucrat constructor called\n";
	return ;

}
Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {

	std::cout << "Bureaucrat constructor with name and grade called\n";
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
	
	std::cout << "Bureaucrat constructor by copy called\n";
	*this = src;
	return ;
}

// DESTRUCTOR

Bureaucrat::~Bureaucrat( void ) {

	std::cout << "Bureaucrat destructor called\n";
	return ;
}

// OTHER PUBLIC MB FUNCTIONS

std::string const	Bureaucrat::getName(void) const {
	
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {
	
	return (this->_grade);
}

void	Bureaucrat::increment(void) {
	
	if (this->_grade  < 2)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
	return ;
}

void	Bureaucrat::decrement(void) {
	
	if (this->_grade > 149)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return ;
}

void	Bureaucrat::signForm( Form & form ) {

	try 
	{
		if (form.getIsSigned()) {
			std::cout << *this << " couldn't sign " << form << " because the form is already signed.\n";
			return ;
		}
		form.beSigned(*this);
		std::cout << *this << " signed " << form << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << *this << " couldn't sign " << form << " because " << e.what() << std::endl;
	}
	return ;
}

// ASSIGNMENT OPERATOR SURCHARGE

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs ) {
	
	if (this != &rhs)
		this->_grade = rhs._grade; // _name is const
	return (*this);
}

// INSERT OPERATOR SURCHARGE

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs) {
	
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}

