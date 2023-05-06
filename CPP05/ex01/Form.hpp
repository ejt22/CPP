/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:10:27 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/15 12:27:45 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <stdexcept>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		
		std::string const	_name;
		bool				_isSigned;
		int	const			_signGrade;
		int const			_execGrade;

	public:

		Form( void );
		Form( std::string name, int const signGrade, int const execGrade );
		Form( Form const & src );
		virtual ~Form( void );

		Form	& operator=( Form const & rhs );
		
		std::string const	getName( void ) const;
		bool				getIsSigned( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;
		void				beSigned( Bureaucrat & bureaucrat );

		class GradeTooHighException : public std::exception {

			public:

				virtual const char	* what() const throw() {
					return ("their grade is too high.");
				}
		};

		class GradeTooLowException : public std::exception {

			public:

				virtual const char	* what() const throw() {
					return ("their grade is too low.");
				}
		};
};

std::ostream	& operator<<( std::ostream & o, Form const & rhs );

#endif