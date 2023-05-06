/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:07:30 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/29 16:06:16 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// CONSTRUCTORS

template < typename T >
Array<T>::Array() {
	std::cout << "Array constructor called\n";
	this->_array = new T[0];
	this->_size = 0;
}

template < typename T >
Array<T>::Array( unsigned int n ) : _size(n) {
	std::cout << "Array constructor with size called\n";
	this->_array = new T[n];
}

template < typename T >
Array<T>::Array( Array<T> const & src ) : _size(src._size) {
	std::cout << "Array copy constructor called\n";
	this->_array = new T[src._size];
	for (unsigned int i = 0; i < src._size; i++) {
		this->_array[i] = src._array[i];
	}
}

// DESTRUCTORS

template < typename T >
Array<T>::~Array() {
	std::cout << "Array destructor called\n";
	delete [] this->_array;
}

// OPERATOR SURCHARGES

template < typename T >
Array<T>	& Array<T>::operator=( Array<T> const & rhs ) {
	
	if (this != &rhs) {
		if (this->_array)
			delete [] this->_array;
		this->_size = rhs._size;
		this->_array = new T[rhs._size];
		for (unsigned int i = 0; i < rhs._size; i++) {
			this->_array[i] = rhs._array[i];
		}
	}
	return (*this);
}

template < typename T >
T	& Array<T>::operator[]( unsigned int i ) {

	if (i < 0 || i >= this->_size)
		throw invalidIndex();
	else
		return (this->_array[i]);
}

// OTHER MB PUBLIC FUNCTION

template < typename T >
unsigned int	Array<T>::size() const {

	return (this->_size);
}

// OPERATOR << SURCHARGE FUNCTION

template < typename T >
std::ostream	& operator<<( std::ostream & o, Array<T> & rhs ) {

	for (unsigned int i = 0; i < rhs.size(); i++) {
		o << "array[" << i << "] = " << rhs[i] << std::endl;
	}
	return (o);
}