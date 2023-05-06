/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:46:20 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/04/26 15:44:28 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// CONSTRUCTORS

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange( std::string dataFile, std::string inputFile ) {

	initialiseMap(dataFile);
	treatInput(inputFile);
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src ) {

	*this = src;
}

// DESTRUCTORS

BitcoinExchange::~BitcoinExchange() {
	
}

// OTHER PRIVATE MB FUNCTIONS

void	BitcoinExchange::initialiseMap( std::string dataFile ) {

	std::ifstream	myfile;
	std::string		key;
	std::string		value;

	myfile.open(dataFile);
	if (myfile.is_open()) {
		getline(myfile, key);
	} // takes care of the first line which does not need to be put into the map
	else
		throw fileOpenException() ;
	if (myfile.is_open()) {
		while (myfile) {
			std::getline(myfile, key, ',');
			if (key.empty())
				break ;
			//std::cout << "key: " << key << '\n';
			std::getline(myfile, value);
			//std:: cout << "value: " << value << '\n';
			this->_data[key] = stof(value);
		}
	}
	myfile.close();
}

float	BitcoinExchange::getRate( std:: string date ) const {
	
	std::map<std::string, float>::const_iterator	itlow;

	itlow = this->_data.lower_bound(date);
	if (itlow == this->_data.begin())
		return (0);
	else {
		itlow--;
		// std::cout << itlow->first << std::endl;
		return (itlow->second);
	}
	// Do we need to erase itlow?
}

void	BitcoinExchange::treatInput( std::string inputFile ) const {

	std::ifstream	myFile;
	std::string		buffer;
	std::string		date;
	std::string		value;

	myFile.open(inputFile);
	if (myFile.is_open()) {
		getline(myFile, buffer);
		// std::cout << buffer << std::endl;
		if (buffer.empty()) {
			throw emptyFileException();
			return ;
		}
		else if (!check_firstline(buffer)) {
			std::cout << "Error: input file has a wrong format.\n";
			return ;
		}
	}
	else
		throw fileOpenException() ;
	if (myFile.is_open()) {
		while (getline(myFile, buffer)) {
			// std::cout << buffer << std::endl;
			if(!check_input(buffer))
				continue ;
			date = buffer.substr(0,11);
			std::cout << date << " => ";
			value = buffer.substr(13, buffer.length() - 13);
			std::cout << value << " = ";
			std::cout << stof(value) * getRate(date) << std::endl;
		}
	}
	myFile.close();
}

void	BitcoinExchange::displayMap() const {
	
	std::map<std::string, float>::const_iterator	it = this->_data.begin();
	
	while(it != this->_data.end()) {
		std::cout << "key: " << it->first;
		std::cout << ", value: " << std::fixed << std::setprecision(2) << it->second << std::endl;
		it++;	
	}
}

// OPERATOR SURCHARGE

BitcoinExchange	& BitcoinExchange::operator=( BitcoinExchange const & rhs ) {

	if (this != &rhs) {
		this->_data = rhs._data;
	}
	return (*this);
}