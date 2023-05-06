/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:58:46 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/07 11:04:38 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string s1 = "Dupont";
	std::string s2 = "Dupond";

	ClapTrap c1(s1);
	ClapTrap c2(s2);
	//ClapTrap claptrap3;
	//ClapTrap claptrap4(claptrap2);

	//claptrap3 = claptrap2;

	std::cout << std::endl;
	//std::cout << claptrap3 << std::endl;
	std::cout << c1 << std::endl;
	std::cout << c2 << std::endl;
	std::cout << "==============" <<std::endl;
	c1.attack("Dupond");
	c2.attack("Dupont");
	std::cout << "==============" <<std::endl;
	c1.takeDamage(5);
	c2.takeDamage(8);
	std::cout << c1 << std::endl;
	std::cout << c2 << std::endl;
	std::cout << "==============" <<std::endl;
	c1.beRepaired(5);
	c2.beRepaired(8);
	std::cout << c1 << std::endl;
	std::cout << c2 << std::endl;
	std::cout << "==============" <<std::endl;
	c1.takeDamage(0);
	c2.takeDamage(0);
	std::cout << c1 << std::endl;
	std::cout << c2 << std::endl;
	c1.attack("Dupond");
	c1.attack("Dupond");
	c1.attack("Dupond");
	c1.attack("Dupond");
	c1.attack("Dupond");
	c1.attack("Dupond");
	c1.attack("Dupond");
	c1.attack("Dupond");
	std::cout << c1 << std::endl;
	std::cout << "==============" <<std::endl;
	c1.attack("Dupond");
	c1.beRepaired(5);
	c1.takeDamage(12);
	std::cout << c1 << std::endl;
	std::cout << "==============" <<std::endl;
	c2.takeDamage(10);
	std::cout << c2 << std::endl;
	std::cout << "==============" <<std::endl;
	c2.attack("Dupont");
	c2.beRepaired(50);
	c2.takeDamage(58);
	std::cout << c1 << std::endl;
	std::cout << "==============" <<std::endl;
	std::cout << c2 << std::endl;
	std::cout << "==============" <<std::endl;
	std::cout << std::endl;
	return (0);
}