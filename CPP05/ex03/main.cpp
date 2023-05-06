/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:16:13 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/23 16:23:43 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::srand(std::time(0));

	Intern	intern;
	std::cout << std::endl << std::endl;

	std::cout << "CREATE ROBOTOMY FORM" << std::endl;
	std::cout << "NO EXCEPTION" << std::endl;
	try {
		AForm * robo = intern.makeForm("robotomy request", "NotaRobot");
		std::cout << *robo << " created " << std::endl;
		delete robo;
	}
	catch (Intern::InternException &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	std::cout << std::endl;
	std::cout << "CREATE PRESIDENTIAL FORM" << std::endl;
	std::cout << "NO EXCEPTION" << std::endl;
	try {
		AForm * president = intern.makeForm("presidential pardon", "Bush");
		std::cout << *president << " created " << std::endl;
		delete president;
	}
	catch (Intern::InternException &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	std::cout << std::endl;
	std::cout << "CREATE SHRUBBERY FORM" << std::endl;
	std::cout << "NO EXCEPTION" << std::endl;
	try {
		AForm * shrub = intern.makeForm("shrubbery creation", "Shruby");
		std::cout << *shrub << " created " << std::endl;
		delete shrub;
	}
	catch (Intern::InternException &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	std::cout << std::endl;
	std::cout << "CREATE SHRUBBERY FORM" << std::endl;
	std::cout << "==> Intern exception" << std::endl;
	try
	{
		AForm * unknown_form = intern.makeForm("unknown", "unkown");
		std::cout << *unknown_form << " was just created " << std::endl << std::endl;
	}
	catch (Intern::InternException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}


	system("leaks ex03");
	return (0);
}