/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:52:14 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/09 12:31:50 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

private:

	std::string	_name;

public:

	Zombie( void );
	~Zombie( void );

	void	announce( void ) const;
	void	setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif