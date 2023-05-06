/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:16:23 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/20 15:42:41 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

private:
	
	std::string	_name;

public:

	Zombie( std::string name );
	~Zombie( void );
	
	void	announce( void ) const;
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

# endif