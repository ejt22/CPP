/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:44:32 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/14 13:04:35 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void ) {

	Point P1;
	Point P2(4.18f, 3.02f);
	Point P3(P2);
	Point P4(94.16f, 100.12f);
	Point P5(2.56f, 2.08f);
	Point P(1.5f, 1.5f); 
	Point P6(2.0f, 2.0f);
	Point P7(-0.5f, -0.5f);
	
	//2.56 ; 2.08 part of the vertex
	Point Tc(0, 0);
	Point Ta(5.12, 4.16);
	Point Tb(1.18, -6.49);

	Point Tx(0, 3.02);
	Point Ty(5, 3.02);
	Point Tz(2.5, 0);

	// One of the side
	std::cout << std::endl;
	std::cout << "P1: one of the side, should be false" << std::endl;
	std::cout << "x: " << P1.getX() << " y: " << P1.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P1) << std::endl;

	// Inside the triangle
	std::cout << std::endl;
	std::cout << "P2: inside the triangle, should be true" << std::endl;
	std::cout << "x: " << P2.getX() << " y: " << P2.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P2) << std::endl;
	
	// On the edge
	std::cout << std::endl;
	std::cout << "P3: on the edge, should be false" << std::endl;
	std::cout << "x: " << P3.getX() << " y: " << P3.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Tx, Ty, Tz, P3) << std::endl;

	// Outside the triangle
	std::cout << std::endl;
	std::cout << "P4: outside the triangle, should be false" << std::endl;
	std::cout << "x: " << P4.getX() << " y: " << P4.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P4) << std::endl;

	// On the edge
	std::cout << std::endl;
	std::cout << "P5: on the edge, should be false" << std::endl;
	std::cout << "x: " << P5.getX() << " y: " << P5.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P5) << std::endl;

	// Inside
	std::cout << std::endl;
	std::cout << "P6: inside, should be true" << std::endl;
	std::cout << "x: " << P6.getX() << " y: " << P6.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Tx, Ty, Tz, P6) << std::endl;

	// Outside
	std::cout << std::endl;
	std::cout << "P7: outside the triangle, should be false" << std::endl;
	std::cout << "x: " << P7.getX() << " y: " << P7.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Tx, Ty, Tz, P7) << std::endl;

	return (0);
}