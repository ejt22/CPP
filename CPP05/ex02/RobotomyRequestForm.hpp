/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:39:05 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/16 12:40:38 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <fstream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {

	private:
		
		std::string	_target;

		RobotomyRequestForm( void );

	public:

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm( void );

		RobotomyRequestForm	& operator=( RobotomyRequestForm const & rhs );

		std::string	getTarget(void) const;
		void		execute( Bureaucrat & executor ) const;
		
};

#endif