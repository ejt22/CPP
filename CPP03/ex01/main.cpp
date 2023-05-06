/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:58:46 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/07 16:02:51 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::string s1 = "Emma";
	std::string s2 = "Evie";
	std::string s3 = "Ellie";

	ClapTrap c1(s1);
	ScavTrap scav3(s3);
	// ScavTrap scav4(scav3);
	// ScavTrap scav5;
	// scav5 = scav3;

	std::cout << std::endl;
	std::cout << c1 << std::endl;
	std::cout << scav3 << std::endl;
	// std::cout << scav4 << std::endl;	
	// std::cout << scav5 << std::endl;

	std::cout << "==============" <<std::endl;
	c1.attack("Evie");
	// c2.attack("Emma");
	scav3.attack("Evie");
	std::cout << "==============" <<std::endl;
	c1.takeDamage(5);
	// c2.takeDamage(8);
	scav3.takeDamage(50);
	std::cout << c1 << std::endl;
	// std::cout << c2 << std::endl;
	std::cout << scav3 << std::endl;
	std::cout << "==============" <<std::endl;
	c1.beRepaired(5);
	scav3.beRepaired(50);
	std::cout << c1 << std::endl;
	std::cout << scav3 << std::endl;
	std::cout << "==============" <<std::endl;
	c1.takeDamage(0);
	scav3.takeDamage(0);	
	std::cout << c1 << std::endl;
	std::cout << scav3 << std::endl;
	std::cout << "==============" <<std::endl;
	scav3.guardGate();
	// scav3.attack("Evie");     ---Remplacer Energy Point par 0
	// scav3.beRepaired(5);
	scav3.takeDamage(100);
	std::cout << scav3 << std::endl;
	std::cout << "==============" <<std::endl;
	scav3.guardGate();
	scav3.attack("Emma");
	scav3.beRepaired(100);
	scav3.takeDamage(20);
	std::cout << scav3 << std::endl;
	std::cout << "==============" <<std::endl;
	std::cout << std::endl;
	return (0);
}