/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:21:38 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/02/27 12:52:33 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// CONSTRUCTOR

Contact::Contact(void) {

	//std::cout << "Contact Constructor called" << std::endl;
}

// DESTRUCTOR

Contact::~Contact(void) {

	//std::cout << "Contact Destructor called" << std::endl;
}

// GETTERS

std::string	Contact::getFirstName(void) const {

	return (this->_FirstName);
}

std::string	Contact::getLastName(void) const {

	return (this->_LastName);
}

std::string	Contact::getNickname(void) const {

	return (this->_Nickname);
}

std::string	Contact::getPhoneNumber(void) const {

	return (this->_PhoneNumber);
}

std::string	Contact::getDarkSecret(void) const {

	return (this->_DarkSecret);
}

// SETTERS

void	Contact::setFirstName(std::string FirstName) {

	this->_FirstName = FirstName;
}

void	Contact::setLastName(std::string LastName) {

	this->_LastName = LastName;
}

void	Contact::setNickname(std::string Nickname) {

	this->_Nickname = Nickname;
}

void	Contact::setPhoneNumber(std::string PhoneNumber) {

	this->_PhoneNumber = PhoneNumber;
}

void	Contact::setDarkSecret(std::string DarkSecret) {

	this->_DarkSecret = DarkSecret;
}

// OTHER

void	Contact::display(void) const {

	std::cout << "Contact First Name: " + this->_FirstName << std:: endl;
	std::cout << "Contact Last Name: " + this->_LastName << std:: endl;
	std::cout << "Contact Nickname: " + this->_Nickname << std:: endl;
	std::cout << "Contact PhoneNumber: " + this->_PhoneNumber << std:: endl;
	std::cout << "Contact DarkSecret: " + this->_DarkSecret << std:: endl;
}