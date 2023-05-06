/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:41:35 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/04/25 13:57:41 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	is_posint( char *arg ) {
	
	std::string	str(arg);
	size_t		i = 0;

	if (str.empty())
		return (false);
	while (i < str.length()) {
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	// deal with int over intmax
	return (true);
}

bool	check_input( int argc, char *argv[] ) {

	for (int i = 1; i < argc; i++) {
		if (!is_posint(argv[i]))
			return (false);
	}
	return (true);
}

void	swap( int & a, int & b ) {

	int	tmp = a;

	a = b;
	b = tmp;
}
