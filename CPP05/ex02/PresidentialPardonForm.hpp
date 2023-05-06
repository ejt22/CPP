/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:58:51 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/16 13:01:04 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <fstream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {

	private:
		
		std::string	_target;

		PresidentialPardonForm( void );

	public:

		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm( void );

		PresidentialPardonForm	& operator=( PresidentialPardonForm const & rhs );

		std::string	getTarget(void) const;
		void		execute( Bureaucrat & executor ) const;
		
};

#endif