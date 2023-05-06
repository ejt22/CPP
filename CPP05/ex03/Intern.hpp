/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:42:59 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/23 16:18:13 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <stdexcept>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class AForm;

class Intern {
	
	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern	& operator=( Intern const & rhs );

		AForm	*makeForm( std::string formName, std::string target );

		class	InternException : public std::exception {

			public :

				virtual const char * what() const throw() {

					return ("Intern exception");
				}
		};
};

#endif