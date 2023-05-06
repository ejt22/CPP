/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:42:16 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/09 12:37:03 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {

	Zombie	*horde;

	horde = zombieHorde(7, "Bobbie");
	for (int i = 0; i < 7; i++) {
		horde[i].announce();
	}
	delete [] horde;
	//system(" leaks zombiehorde");
	return (0);
}