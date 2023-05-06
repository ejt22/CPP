/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:14:14 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/04/26 15:40:14 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	check_input( std::string input ) {
	
	std::string	date;
	std::string	value;
	
	if (input.empty() || input[10] != ' ' || input[11] != '|' || input[12] != ' ') {
		std::cout << "Error : wrong input\n";
		return (false);
	}
	date = input.substr(0,10);
	if (!check_date(date)) {
		std::cout << "Error : bad input => " << date << std::endl;
		return (false);
	}
	value = input.substr(13, input.length() - 13);
	if (!check_value(value)) {
		std::cout << "Error : there is a problem with the value" << std::endl;
		return (false);
	}
	return (true);
}

bool	check_date( std::string date ) {

	int	year;
	int	month;
	int	day;
	
	if (date[4] != '-' || date[7] != '-' || (date[5] != '0' && date[5] != '1')
		|| (date[8] != '0' && date[8] != '1' && date[8] != '2' && date[8] != '3'))
		return (false);
	year = stoi(date.substr(0, 4));
	month = stoi(date.substr(5, 2));
	if (month < 1 || month > 12)
		return (false); 
	day = stoi(date.substr(8, 2));
	switch (month) {
		case 2:
			if (year % 4 == 0) {
				if (day < 1 || day >29)
					return (false);
			}
			else {
				if (day < 1 || day > 28)
					return (false);
			}
			break ;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (day < 1 || day > 31) {
				return (false);
			}
			break ;
		case 4: case 6: case 9: case 11: 
			if (day < 1 || day > 30)
				return (false);
			break ;
		default:
			return (false);
	}
	return (true);
}

bool	check_value( std::string value ) {

	int dot = 0;

	for (size_t i = 0; i < value.length(); i++) {
		if (i == 0 && value[i] == '-')
			return (false);
		if (i == 0 && value[i] == '+')
			continue ;
		if (!isdigit(value[i]) && value[i] != '.')
			return (false);
		if (value[i] == '.')
			dot += 1;
	}
	return ((dot == 1 || dot == 0) && (stof(value) >= 0) && (stof(value) <= 1000));
}

bool	check_firstline( std::string line ) {

	if (line.compare("date | value"))
		return (false);
	return (true);
}
/*
int	main() {
	
	std::cout << check_value("0") << std::endl;
	std::cout << check_value("3s") << std::endl;
	std::cout << check_value("1001") << std::endl;
	std::cout << check_value("1") << std::endl;
	std::cout << check_value("102") << std::endl;

	return (0);
}
*/