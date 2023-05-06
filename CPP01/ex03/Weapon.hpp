/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:43:41 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/23 18:29:58 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	
private:
	
	std::string	_type;
	
public:

	Weapon( std::string type );
	~Weapon( void );

	std::string const	&getType( void ) const;
	void				setType( std::string type );
};

#endif
