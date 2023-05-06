/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:10:27 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/16 14:22:34 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <stdexcept>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:
		
		std::string const	_name;
		bool				_isSigned;
		int	const			_signGrade;
		int const			_execGrade;

	public:

		AForm( void );
		AForm( std::string name, int const signGrade, int const execGrade );
		AForm( AForm const & src );
		virtual ~AForm( void );

		AForm	& operator=( AForm const & rhs );
		
		std::string const	getName( void ) const;
		bool				getIsSigned( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;
		void				beSigned( Bureaucrat & bureaucrat );
		virtual void		execute( Bureaucrat & executor ) const = 0;

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

		class FormNotSignedException : public std::exception {

			public:

				virtual const char	* what() const throw() {
					return ("the form is not signed so cannot be executed.");
				}
		};
};

std::ostream	& operator<<( std::ostream & o, AForm const & rhs );

#endif