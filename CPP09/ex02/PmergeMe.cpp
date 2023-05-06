/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:13:14 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/04/27 10:23:17 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "utils.hpp"

// CONSTRUCTORS

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe( PmergeMe const & src ) {
	
	*this = src;
}

PmergeMe::PmergeMe( int argc, char *argv[] ) {
	
	if (!check_input(argc, argv)) {
		std::cout << "Input should only be positive integers!\n";
		return ;
	}
	performVect(argc, argv);
	performDeque(argc, argv);
	display(argc, argv);
}

// DESTRUCTOR

PmergeMe::~PmergeMe() {
}

// PRIVATE MB FCS

void	PmergeMe::performVect( int argc, char * argv[] ) {

	clock_t	t;
	size_t	size;

	t = clock();
	initialise(this->_vector, argc, argv);
	size = this->_vector.size();
	if (size < 4) {
		smallSort(this->_vector, size);
		return ;
	}
	createPairs(this->_vector);
	if (size % 2)
		mergeSort(this->_vector, 0, size - 2);
	else
		mergeSort(this->_vector, 0, size - 1);
	insertSort(this->_vector);
	if (size % 2)
		insertStraggler(this->_vector);
	if (!check_sorted(this->_vector)) {
		std::cout << "Sorting did not work!\n";
		return ;
	}
	this->_timeVect = ((static_cast<double>(clock() - t)) / CLOCKS_PER_SEC) * 1000;
}

void	PmergeMe::performDeque( int argc, char * argv[] ) {

	clock_t	t;
	size_t	size;

	t = clock();
	initialise(this->_deque, argc, argv);
	size = this->_deque.size();
	if (size < 4) {
		smallSort(this->_deque, size);
		return ;
	}
	createPairs(this->_deque);
	if (size % 2)
		mergeSort(this->_deque, 0, size - 2);
	else
		mergeSort(this->_deque, 0, size - 1);
	insertSort(this->_deque);
	if (size % 2)
		insertStraggler(this->_deque);
	if (!check_sorted(this->_deque)) {
		std::cout << "Sorting did not work!\n";
		return ;
	}
	this->_timeDeque = ((static_cast<double>(clock() - t)) / CLOCKS_PER_SEC) * 1000;
}

void	PmergeMe::display( int argc, char * argv[] ) const {

	std::cout << "Before:";
	for (int i = 1; i < argc; i++) {
		std::cout << " " << argv[i];
	}
	std::cout << std::endl;
	std::cout << "After: ";
	displayContainer(this->_vector);
	std::cout << "Time to process a range of " << argc - 1;
	std::cout << " elements with std::vector: " << std::fixed << std::setprecision(2) << this->_timeVect << " ms" <<std::endl;
	std::cout << "Time to process a range of " << argc - 1;
	std::cout << " elements with std::deque: " << std::fixed << std::setprecision(2) << this->_timeDeque << " ms" <<std::endl;
}

// OPERATOR SURCHARGE

PmergeMe	& PmergeMe::operator=( PmergeMe const & rhs ) {
	
	if (this != &rhs)
		*this = rhs;
	return (*this);
}