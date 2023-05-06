/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:14:09 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/30 15:56:59 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// CONSTRUCTORS

Span::Span() : _N(0), _size(0) {
	
	// std::cout << "Span default constructor called\n";
}

Span::Span( unsigned int N ) : _N(N), _size(0) {
	
	// std::cout << "Span constructor with N called\n";
}

Span::Span( Span const & src ) {
	
	// std::cout << "Span copy constructor called\n";
	*this = src;
}

// DESTRUCTOR

Span::~Span() {

	// std::cout << "Span destructor called\n";
	this->_vect.clear();
}

// OPERATOR SURCHARGES

Span	& Span::operator=( Span const & rhs ) {

	if (this != &rhs) {
		this->_vect.clear();
		this->_vect = rhs._vect;
		this->_N = rhs._N;
		this->_size = rhs._size;
	}
	return (*this);
}

// ACCESSORS

unsigned int	Span::getSize() const {

	return (this->_size);
}

unsigned int	Span::getMaxSize() const {

	return (this->_N);
}

std::vector<int>	Span::getVector() const {

	return (this->_vect);
}

// OTHER PUBLIC MB FUNCTIONS

void	Span::addNumber( int const nb ) {

	if (this->_size == this->_N)
		throw fullSpanException() ;
	this->_vect.push_back(nb);
	this->_size++;
}

float	Span::longestSpan() const {

	if (this->_size == 0 || this->_size == 1)
		throw spanSizeTooSmallException();
	else {
		float min = static_cast<float>(*std::min_element(this->_vect.begin(), this->_vect.end()));
		float max = static_cast<float>(*std::max_element(this->_vect.begin(), this->_vect.end()));
		return (max - min);
	}
}

float	Span::shortestSpan() const {

	if (this->_size == 0 || this->_size == 1)
		throw spanSizeTooSmallException();
	std::vector<int> copy = this->_vect;
	std::sort(copy.begin(), copy.end());
	float	ret = UINT_MAX;
	for(unsigned int i = 0; i < (this->_size - 1); i++) {
		if (std::abs(static_cast<float>(copy[i + 1]) - static_cast<float>(copy[i])) < ret)
			ret = std::abs(static_cast<float>(copy[i + 1]) - static_cast<float>(copy[i]));
	}
	return (ret);
}

void Span::fillSpan( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {
	
	while (begin < end) {
		addNumber(*begin);
		begin++;
	}
}

// OPERATOR << SURCHARGE

std::ostream	& operator<<( std::ostream & o, Span const & rhs ) {

	o << "Span = ";
	for(unsigned int i = 0; i < rhs.getSize() - 1; i++) {
		o << rhs.getVector()[i] << "; ";
	}
	o << rhs.getVector()[rhs.getSize() - 1] << "\n";
	return (o);
}