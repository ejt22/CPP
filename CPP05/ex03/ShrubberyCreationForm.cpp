/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:10:19 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/16 13:20:02 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// CONSTRUCTORS

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("Default Shrubbery", 147, 137), _target("default") {

	std::cout << "Shrubbery default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("Shrubbery", 147, 137), _target(target) {

	std::cout << "Shrubbery constructor with target called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) {

	std::cout << "Shrubbery copy constructor called" << std::endl;
	*this = src;
	return ;
}

// DESTRUCTOR

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	
	std::cout << "Shrubbery destructor called" << std::endl;
	return ;
}

// ASSIGNMENT OPERATOR SURCHARGE

ShrubberyCreationForm	& ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {

	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

// ACCESSORS AND OTHER PUBLIC MB FUNCTIONS

std::string	ShrubberyCreationForm::getTarget(void) const {

	return (this->_target);
}

void	ShrubberyCreationForm::execute( Bureaucrat & executor ) const {

	std::string	outfile = this->_target + "_shrubbery";
	std::string	tree = 
"	          ,@@@@@@@,					  \n"
"      ,,,.   ,@@@@@@/@@,  .oo8888o.	  \n"
"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o	  \n"
"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'	  \n"
"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'	  \n"
"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'	  \n"
"   `&%\\ ` /%&'    |.|        \\ '|8'	  \n"
"       |o|        | |         | |		  \n"
"       |.|        | |         | |		  \n"
"    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";

	if (!this->getIsSigned()) {
		throw AForm::FormNotSignedException();
		return ;
	}
	if (executor.getGrade() > this->getExecGrade()) {
		throw AForm::GradeTooLowException();
		return ;
	}
	std::ofstream	ofs(outfile.c_str(), std::ofstream::out);
	if (!ofs.is_open()) {
		std::cout << "Error opening output file" << std::endl;
		return ;
	}
	ofs << tree;
	ofs.close();
	return ;
}