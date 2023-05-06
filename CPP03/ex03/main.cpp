/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:58:46 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/21 11:02:33 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	std::string s1 = "Thomas";
	std::string s2 = "ThomasScav";

	DiamondTrap d1(s1);
	// ScavTrap	st1(s2);
	// DiamondTrap d2(d1);
	// DiamondTrap d3;
	// d3 = d1;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << d1 << std::endl;
	// std::cout << st1 << std::endl;
	// std::cout << d2 << std::endl;
	// std::cout << d3 << std::endl;
	
	d1.takeDamage(50);
	std::cout << d1 << std::endl;
	std::cout << "===========" << std::endl;
	std::cout << std::endl;
	d1.beRepaired(50);
	std::cout << d1 << std::endl;
	std::cout << "===========" << std::endl;
	std::cout << std::endl;
	d1.attack("Jasmine");
	std::cout << d1 << std::endl;
	std::cout << "===========" << std::endl;
	std::cout << std::endl;
	d1.guardGate();
	std::cout << std::endl;
	d1.highFivesGuys();
	std::cout << std::endl;
	d1.whoAmI();
	std::cout << std::endl;
	d1.takeDamage(100);
	d1.guardGate();
	std::cout << std::endl;
	d1.highFivesGuys();
	std::cout << std::endl;
	d1.whoAmI();
	std::cout << std::endl;
	d1.takeDamage(20);
	std::cout << std::endl;
	d1.beRepaired(100);
	std::cout << std::endl;
	std::cout << d1 << std::endl;
	std::cout << "===========" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << std::endl;
	return (0);
}
