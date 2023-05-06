/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:16:49 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/28 11:51:43 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
	
private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:

	Harl( void );
	~Harl( void );

	void complain( std::string level );
};

#endif