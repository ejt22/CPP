/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:49:17 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/28 14:48:55 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// CONSTRUCTOR

PhoneBook::PhoneBook(void) {

	std::cout << "PhoneBook Constructor called" << std::endl;
	this->_nbrContacts = 0;
	this->_current = -1;
}

// DESTRUCTOR

PhoneBook::~PhoneBook(void) {

	std::cout << "PhoneBook Destructor called" << std::endl;
}

// PRIVATE FUNCTIONS

int	PhoneBook::_askFirstName(void) {

	std::string	firstname;

	std::cout << "Enter first name: ";
	std::getline(std::cin, firstname);
	if (std::cin.eof())
		return (0);
	while (firstname.empty()) {
		std::cout << "Enter first name: ";
		std::getline(std::cin, firstname);
		if (std::cin.eof())
			return (0);
	}
	this->_PhoneBook[this->_current].setFirstName(firstname);
	return (1);
}

int	PhoneBook::_askLastName(void) {

	std::string	lastname;

	std::cout << "Enter last name: ";
	std::getline(std::cin, lastname);
	if (std::cin.eof())
		return (0);
	while (lastname.empty()) {
		std::cout << "Enter last name: ";
		std::getline(std::cin, lastname);
		if (std::cin.eof())
			return (0);
	}
	this->_PhoneBook[this->_current].setLastName(lastname);
	return (1);

}
int	PhoneBook::_askNickname(void) {

	std::string	nickname;

	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	if (std::cin.eof())
		return (0);
	while (nickname.empty()) {
		std::cout << "Enter nickname: ";
		std::getline(std::cin, nickname);
		if (std::cin.eof())
			return (0);
	}
	this->_PhoneBook[this->_current].setNickname(nickname);
	return (1);
}

int	PhoneBook::_askPhoneNumber(void) {

	std::string	phonenumber;

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phonenumber);
	if (std::cin.eof())
		return (0);
	while (phonenumber.empty() || phonenumber.find_first_not_of("0123456789") != std::string::npos) {
		std::cout << "Enter phone number: (only numbers are allowed) ";
		std::getline(std::cin, phonenumber);
		if (std::cin.eof())
			return (0);
	}
	this->_PhoneBook[this->_current].setPhoneNumber(phonenumber);
	return (1);
}

int	PhoneBook::_askDarkSecret(void) {

	std::string	secret;

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, secret);
	if (std::cin.eof())
		return (0);
	while (secret.empty()) {
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, secret);
		if (std::cin.eof())
			return (0);
	}
	this->_PhoneBook[this->_current].setDarkSecret(secret);
	return (1);
}

void	PhoneBook::_printAll(void) const {

	std::string	firstName;
	std::string	lastName;
	std::string	nickname;

	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First name" << "|"
			<< std::setw(10) << "Last name" << "|"
			<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < this->_nbrContacts; i++) {
		firstName = this->_PhoneBook[i].getFirstName();
		lastName = this->_PhoneBook[i].getLastName();
		nickname = this->_PhoneBook[i].getNickname();
		if (firstName.length() > 10) {
			firstName.resize(9);
			firstName.resize(10, '.');
		}
		if (lastName.length() > 10) {
			lastName.resize(9);
			lastName.resize(10, '.');
		}
		if (nickname.length() > 10) {
			nickname.resize(9);
			nickname.resize(10, '.');
		}
		std::cout << std::setw(10) << i + 1 << "|"
			<< std::setw(10) << firstName << "|"
			<< std::setw(10) << lastName << "|"
			<< std::setw(10) << nickname << std::endl;
	}
}

// PUBLIC FUNCTIONS

void	PhoneBook::addContact(void) {

	if (this->_nbrContacts < 8)
		this->_nbrContacts++;
	this->_current++;
	if (this->_current == 8)
		this->_current = 0;
	if (!_askFirstName())
		return ;
	if (!_askLastName())
		return ;
	if (!_askNickname())
		return ;
	if (!_askPhoneNumber())
		return ;
	if (!_askDarkSecret())
		return ;
}

void	PhoneBook::searchContact(void) {

	std::string	index;
	int			nbr;

	if (this->_nbrContacts == 0) {
		std::cout << "There are no contacts in the phonebook" << std::endl;
		return ;
	}
	PhoneBook::_printAll();
	std::cout << "Enter the index of the contact you want:";
	std::getline(std::cin, index);
	if (std::cin.eof())
		return ;
	nbr = std::atoi(index.c_str());
	while (nbr < 1 || nbr > 8 || nbr > this->_nbrContacts) {
		std::cout << "Your index is not correct" << std::endl;
		std::cout << "Enter the index of the contact you want:";
		std::getline(std::cin, index);
		if (std::cin.eof())
			return ;
		nbr = std::atoi(index.c_str());
	}
	this->_PhoneBook[nbr - 1].display();
}