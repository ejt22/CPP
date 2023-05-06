/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:33:52 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/16 11:52:05 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

	private:
		
		std::string	_target;

		ShrubberyCreationForm( void );

	public:

		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm	& operator=( ShrubberyCreationForm const & rhs );

		std::string	getTarget(void) const;
		void		execute( Bureaucrat & executor ) const;
		
};

#endif