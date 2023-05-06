/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:49:43 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/16 15:36:55 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// CONSTRUCTORS

Intern::Intern() {

	std::cout << "Intern constructor called\n";
	return ;
}

Intern::Intern( Intern const & src ) {

	std::cout << "Intern copy constructor called\n";
	*this = src;
	return ;
}

// DESTRUCTOR

Intern::~Intern() {

	std::cout << "Intern destructor called\n";
	return ;
}

// ASSIGNMENT OPERATOR SURCHARGE

Intern	& Intern::operator=( Intern const & rhs ) {

	(void)rhs;
	return (*this);
}

// OTHER PUBLIC MB FUNCTIONS

static AForm	*shrubbery( std::string target ) {

	return (new ShrubberyCreationForm(target));
}

static AForm	*robotomy( std::string target ) {

	return (new RobotomyRequestForm(target));
}

static AForm	*presidential( std::string target ) {

	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm( std::string formName, std::string target ) {

	AForm	*(*fct[3])(std::string target) = {shrubbery, robotomy, presidential};
	std::string	tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm	*ret = NULL;

	for (int i = 0; i < 3; i++) {
		if (!formName.compare(tab[i]))
			ret = fct[i](target);
	}
	if (!ret) {
		throw Intern::InternException();
		return ret;
	}
	std::cout << "Intern creates " << *ret << std::endl;
	return (ret);
}