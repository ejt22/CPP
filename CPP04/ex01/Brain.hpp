/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 18:24:14 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/10 23:10:08 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {

	private:
	
		std::string	_ideas[100];

	public:

		Brain( void );
		Brain( Brain const & src );
		~Brain( void );

		Brain & operator=( Brain const & rhs );

		std::string	getIdea( int i ) const;
};

#endif