/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:17:51 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/28 14:18:03 by ejoo-tho         ###   ########.fr       */
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