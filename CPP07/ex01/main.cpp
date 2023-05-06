/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 21:34:27 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/29 15:38:53 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int tab1[4] = {80,76,79,80};
	float tab2[4] = {1.2f, 3.4f, 4.2f, 0.0f};
	std::string tab3[4] = {"LOL", "LUL", "LIL", "LAL"};
	bool tab4[3] = {true, false, false};

	iter(tab1, 4, display);
	std::cout << std::endl;
	iter(tab2, 4, display);
	std::cout << std::endl;
	iter(tab3, 4, display);
	std::cout << std::endl;
	iter(tab4, 3, display);
	std::cout << std::endl;
	
	return (0);
}