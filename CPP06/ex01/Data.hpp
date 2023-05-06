/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:46:01 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/29 12:17:55 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include<iostream>

class Data {

	private:

		std::string	_name;
	
	public:
	
		Data();
		Data( std::string name );
		Data( Data const & src );
		~Data();

		Data	& operator=( Data const & rhs );

		std::string	getName( void );
};

#endif