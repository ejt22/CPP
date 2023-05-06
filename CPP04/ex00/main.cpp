/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:43:20 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/22 13:44:49 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void ) {
	
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << "******************" << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
std::cout << std::endl;

const WrongAnimal* wronganimal = new WrongAnimal();
const WrongAnimal* wrongcat = new WrongCat();
std::cout << "******************" << std::endl;
std::cout << wronganimal->getType() << " " << std::endl;
std::cout << wrongcat->getType() << " " << std::endl;
wrongcat->makeSound(); //will output the cat sound!
wronganimal->makeSound();
std::cout << std::endl;
delete meta;
delete j;
delete i;
delete wronganimal;
delete wrongcat;
//system("leaks ex00");
return (0);
}
