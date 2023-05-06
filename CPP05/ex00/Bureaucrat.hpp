/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:27:54 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/23 13:46:46 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat {

	private:
		
		std::string const	_name;
		int					_grade;

	public:

		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat( void );

		Bureaucrat	& operator=( Bureaucrat const & rhs );
		
		std::string const	getName( void ) const;
		int					getGrade( void ) const;
		void				increment( void );
		void				decrement( void );

		class GradeTooHighException : public std::exception {
			public:

				virtual const char	* what() const throw() {
					return ("Bureaucrat grade too high!");
				}
		};

		class GradeTooLowException : public std::exception {

			public:

				virtual const char	* what() const throw() {
					return ("Bureaucrat grade too low!");
				}
		};
};

std::ostream	& operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif