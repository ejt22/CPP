/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:41:19 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/29 12:20:08 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {

	return (reinterpret_cast<Data *>(raw));
}

int	main() {

	std::string		name = "hey";
	Data		*ptr = new Data(name);
	uintptr_t	raw = serialize(ptr);

	std::cout << "Addresses:\n";
	std::cout << "Before serialisation: " << ptr << std::endl;
	std::cout << "After serialisation: " << raw << std::endl;
	std::cout << "After deserialisation: " << deserialize(raw) << std::endl;

	std::cout << "\nNames:\n";
	std::cout << "initial name: " << ptr->getName() << std::endl;
	std::cout << "after deserialization name: " << deserialize(raw)->getName() << std::endl;

	delete ptr;
	// system("leaks ex01");
	return (0);
}