/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:48:27 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/13 15:28:34 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main ( void ) {

	Zombie stack = Zombie("stack");
	Zombie *heap = newZombie("heap");

	stack.announce();
	heap->announce();
	randomChump("random");
	delete heap;
	return(0);
}