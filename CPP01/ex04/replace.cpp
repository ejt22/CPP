/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:31:41 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/27 16:43:31 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replace(std::string *line, std::string s1, std::string s2) {

	size_t	pos = 0;

	pos = (*line).find(s1);
	while (pos != std::string::npos) {
		(*line).erase(pos, s1.length());
		(*line).insert(pos, s2);
		pos = (*line).find(s1);
	}
}

int	execute(std::string file, std::string s1, std::string s2) {

	std::string	outfile = file;
	std::string	buffer;

	outfile.append(".replace");
	std::ifstream ifs(file.c_str());
	if (!ifs.is_open()) {
		std::cout << "Error opening input file" << std::endl;
		return (0);
	}
	std::ofstream ofs(outfile.c_str());
	if (!ofs.is_open()) {
		std::cout << "Error opening output file" << std::endl;
		ifs.close();
		return (0);
	}
	while(std::getline(ifs, buffer)) {
		if (s1.compare(s2))
			replace(&buffer, s1, s2);
		ofs << buffer;
		if (!ifs.eof())
			ofs << "\n";
	}
	ifs.close();
	ofs.close();
	return (1);
}