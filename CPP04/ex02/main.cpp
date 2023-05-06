/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:43:20 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/23 11:40:43 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
 //------- MAIN IN SUBJECT
	// main in subject
{ 
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	system("leaks ex02");
/*
 //------- MAIN IN SUBJECT
	// // main asked in subject
	const int	nbr_aanimal = 4;
	AAnimal* aanimals[4];
	for (int i = 0; i < nbr_aanimal / 2; i++)
		aanimals[i] = new Dog();
	for (int i = nbr_aanimal / 2; i < nbr_aanimal; i++)
		aanimals[i] = new Cat();
	for (int i = 0; i < nbr_aanimal; i++)
		delete aanimals[i];
	system("leaks ex02");

	//Check if deep copy (all brain are copied) Ref copy
	Cat *c1 = new Cat();
	Cat *c2 = new Cat(*c1);
	Brain	*brain1 = c1->getBrain();
	Brain	*brain2 = c2->getBrain();
	std::cout << "brain1 address= " << brain1 << std::endl;
	std::cout << "brain2 address= " << brain2 << std::endl;
	std::cout << "brains ideas are:" << std::endl;
	for (int i = 0; i < 100; i++) {
		std::cout << brain1->getIdea( i ) << " | ";
		std::cout << brain2->getIdea( i ) << std::endl;	
	}
	delete c1;
	delete c2;
	system("leaks ex02");
	Cat c3;
	Cat c4;
	c4 = c3;
	Brain	*brain3 = c3.getBrain();
	Brain	*brain4 = c4.getBrain();
	std::cout << "brain3 address= " << brain3 << std::endl;
	std::cout << "brain4 address= " << brain4 << std::endl;
	std::cout << "brains ideas are:" << std::endl;
	for (int i = 0; i < 100; i++) {
		std::cout << brain3->getIdea( i ) << " | ";
		std::cout << brain4->getIdea( i ) << std::endl;	
	}
 	system("leaks ex02");
*/
/*
*/
	return (0);
}