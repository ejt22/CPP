/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:02:36 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/04/27 10:17:58 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_HPP
# define ALGO_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <ctime>
# include "utils.hpp"

template < typename T >
void	initialise( T & container, int argc, char *argv[] ) {

	int	value;
	
	for (int i = 1; i < argc; i++) {
			value = atoi(argv[i]);
			container.push_back(value);
	}
}

template < typename T >
void	smallSort( T & container, size_t size ) {
	
	int	tmp;
	
	switch (size) {
		case 1:
			return ;
			
		case 2:
			if (container[0] > container[1])
				swap(container[0], container[1]);
			return ;

		case 3:
			if (check_sorted(container))
				return ;
			if (container[0] > container[1])
				swap(container[0], container[1]);
			if (container[2] < container[0]) {
				tmp = container[2];
				container[2] = container[1];
				container[1]= container[0];
				container[0]= tmp;
			}
			else if (container[2] < container[1]) {
				tmp = container[2];
				container[2] = container[1];
				container[1]= tmp;
			}
			break ;

		default:
			return ;
	}
}

template < typename T >
void	createPairs( T & container ) {

	size_t		i = 0;
	size_t		size = container.size();
	
	while (i < size) {
		if ((i == size - 1) && (size % 2))
			break ;
		if (container[i] > container[i + 1])
			swap(container[i], container[i + 1]);
		i += 2;
	}
}

template < typename T >
void	merge( T & container, size_t l, size_t m, size_t r) {

	size_t				nl = m - l + 1;
	size_t				nr = r - m;
	size_t				k = l;
	T					lcont(nl, 0);
	T					rcont(nr, 0);

	for (size_t i = 0; i < nl; i++)
		lcont[i] = container[l + i];
	for (size_t j = 0; j < nr; j++)
		rcont[j] = container[m + 1 + j];
	size_t	i = 0;
	size_t	j = 0;
	while(i < nl - 1 && j < nr - 1) {
		if (lcont[i] <= rcont[j]) {
			container[k] = lcont[i];
			container[k + 1] = lcont[i + 1];
			i += 2;
		}
		else {
			container[k] = rcont[j];
			container[k + 1] = rcont[j + 1];
			j += 2;	
		}
		k += 2;
	}
	while(i < nl) {
		container[k] = lcont[i];
		i++;
		k++;
	}
	while(j < nr) {
		container[k] = rcont[j];
		j++;
		k++;
	}
}

template < typename T >
void	mergeSort( T & container, size_t l, size_t r ) {

	size_t	m;

	if (l == r - 1)
		return ;
	if (((l + r) / 2) % 2 || (l == r - 1))
		m = (l + r) / 2;
	else
		m = 1 + (l + r) / 2;
	mergeSort(container, l, m);
	mergeSort(container, m + 1, r);
	merge(container, l, m, r);
}

template < typename T >
void	insertSort( T & container ) {

	size_t	i;
	size_t	j;
	size_t	imax;
	int		tmp;

	if (container.size() % 2)
		imax = container.size() - 2;
	else
		imax = container.size() - 1;
	i = imax - 2;
	while (i >= 1) {
		j = imax;
		while (j > i) {
			if (container[i] > container[j]) {
				tmp = container[i];
				for (size_t k = i; k < j; k++)
					container[k] = container[k + 1];
				container[j] = tmp;
				break ;
			}
			j--;
		}
		if (i != 1)
			i -= 2;
		else 
			i--;
	}
}

template < typename T >
void	insertStraggler( T & container ) {

	size_t	i = 0;
	size_t	n = container.size() - 1;
	size_t	k = n;
	int		tmp;

	while (i < n) {
		if (container[i] > container[n]) {
			tmp = container[n];
			while (k > i) {
				container[k] = container[k - 1];
				k--;
			}
			container[i] = tmp;
			break ;
		}
		i++;
	}
}

template < typename T >
void	algorithm( T & container ) {

	size_t	size = container.size();
	
	createPairs(container);
	if (size % 2)
		mergeSort(container, 0, size - 2);
	else
		mergeSort(container, 0, size - 1);
	insertSort(container);
	if (size % 2)
		insertStraggler(container);
}

#endif