/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:58:46 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/07 22:21:43 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::string s1 = "Emmanuel";
	std::string s2 = "Manuel";
	std::string s3 = "Manu";

	ClapTrap c1(s1);
	FragTrap frag(s3);
	ScavTrap trap(s2);

	std::cout << std::endl;
	std::cout << c1 << std::endl;
	std::cout << frag << std::endl;
	std::cout << trap << std::endl;

	std::cout << "==============" <<std::endl;
	c1.attack("Manuel");
	frag.attack("Manuel");
	std::cout << "==============" <<std::endl;
	c1.takeDamage(5);
	frag.takeDamage(50);
	std::cout << c1 << std::endl;
	std::cout << frag << std::endl;
	std::cout << "==============" <<std::endl;
	c1.beRepaired(5);
	frag.beRepaired(50);
	std::cout << c1 << std::endl;
	std::cout << frag << std::endl;
	std::cout << "==============" <<std::endl;
	c1.takeDamage(0);
	frag.takeDamage(0);
	frag.highFivesGuys();
	std::cout << c1 << std::endl;
	std::cout << frag << std::endl;
	std::cout << "==============" <<std::endl;
	// frag.highFivesGuys();
	// frag.attack("Manuel");     ---Remplacer Energy Point par 0
	// frag.beRepaired(5);
	frag.takeDamage(100);
	std::cout << frag << std::endl;
	std::cout << "==============" <<std::endl;
	frag.highFivesGuys();
	frag.attack("Emmanuel");
	frag.beRepaired(100);
	frag.takeDamage(20);
	std::cout << frag << std::endl;
	std::cout << "==============" <<std::endl;
	std::cout << std::endl;
	return (0);
}
