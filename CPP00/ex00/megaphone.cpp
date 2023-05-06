/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:04:44 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/06 16:34:50 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[]) {
	
	int	i;
	int	j;
	
	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else{
			while (argv[i]){
				j = 0;
				while (argv[i][j]){
					argv[i][j] = toupper(argv[i][j]);
					j++;
				}
				std::cout << argv[i];
				i++;
			}
			std::cout << std::endl;
	}
	return (0);
}
