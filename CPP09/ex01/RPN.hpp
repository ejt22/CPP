/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:47:53 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/04/26 16:13:50 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <stack>
# include <cmath>
# include "utils.hpp"

class RPN {
	
	private:
		
		std::stack<double>	_stack;
		unsigned int		_size;
		
		RPN();
		RPN( RPN const & src );

		void	parseInput( std::string input );
		void	performOperation( char c );
		RPN		& operator=( RPN const & rhs );

	public:
	
		RPN( std::string input );
		~RPN();

};

#endif